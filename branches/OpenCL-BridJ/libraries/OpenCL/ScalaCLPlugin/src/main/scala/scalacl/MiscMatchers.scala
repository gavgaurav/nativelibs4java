/*
 * ScalaCL - putting Scala on the GPU with JavaCL / OpenCL
 * http://scalacl.googlecode.com/
 *
 * Copyright (c) 2009-2010, Olivier Chafik (http://ochafik.free.fr/)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Olivier Chafik nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY OLIVIER CHAFIK AND CONTRIBUTORS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE REGENTS AND CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
package scalacl

import scala.reflect.NameTransformer
import scala.tools.nsc.Global

trait MiscMatchers {
  val global: Global
  import global._
  import definitions._
  import treeInfo.{ methPart }
  import typer.typed

  /** Strips apply nodes looking for type application. */
  def typeArgs(tree: Tree): List[Tree] = tree match {
    case Apply(fn, _)              => typeArgs(fn)
    case TypeApply(fn, args)       => args
    case AppliedTypeTree(fn, args) => args
    case _                         => Nil
  }
  /** Smashes directly nested applies down to catenate the argument lists. */
  def flattenApply(tree: Tree): List[Tree] = tree match {
    case Apply(fn, args)  => flattenApply(fn) ++ args
    case _                => Nil
  }
  def flattenApplyGroups(tree: Tree): List[List[Tree]] = tree match {
    case Apply(fn, args)  => flattenApplyGroups(fn) ++ List(args)
    case _                => Nil
  }
  /** Smashes directly nested selects down to the inner tree and a list of names. */
  def flattenSelect(tree: Tree): (Tree, List[Name]) = tree match {
    case Select(qual, name) => flattenSelect(qual) match { case (t, xs) => (t, xs :+ name) }
    case _                  => (tree, Nil)
  }
  /** Creates an Ident or Select from a list of names. */
  def mkSelect(names: Name*): Tree = names.toList match {
    case Nil        => EmptyTree
    case x :: Nil   => Ident(x)
    case x :: xs    => xs.foldLeft(Ident(x): Tree)(Select(_, _))
  }

  class Ids(start: Long = 1) {
    private var nx = start
    def next = this.synchronized {
      val v = nx
      nx += 1
      v
    }
  }
  
  class N(val s: String) {
    def unapply(n: Name): Boolean = n.toString == s
  }
  object N {
    def apply(s: String) = new N(s)
  }
  implicit def N2Name(n: N) = newTermName(n.s)

  val addAssignName = N(NameTransformer.encode("+="))
  val toArrayName = N("toArray")
  val toListName = N("toList")
  val resultName = N("result")
  val scalaName = N("scala")
  val ArrayName = N("Array")
  val intWrapperName = N("intWrapper")
  val tabulateName = N("tabulate")
  val toName = N("to")
  val byName = N("by")
  val withFilterName = N("withFilter")
  val untilName = N("until")
  val isEmptyName = N("isEmpty")
  val sumName = N("sum")
  val minName = N("min")
  val maxName = N("max")
  val headName = N("head")
  val tailName = N("tail")
  val foreachName = N("foreach")
  val foldLeftName = N("foldLeft")
  val foldRightName = N("foldRight")
  val reduceLeftName = N("reduceLeft")
  val reduceRightName = N("reduceRight")
  val scanLeftName = N("scanLeft")
  val scanRightName = N("scanRight")
  val mapName = N("map")
  val canBuildFromName = N("canBuildFrom")
  val filterName = N("filter")
  val filterNotName = N("filterNot")
  val takeWhileName = N("takeWhile")
  val dropWhileName = N("dropWhile")
  val countName = N("count")
  val forallName = N("forall")
  val existsName = N("exists")
  val findName = N("find")
  val updateName = N("update")
  val toSizeTName = N("toSizeT")
  val toLongName = N("toLong")
  val toIntName = N("toInt")
  val toShortName = N("toShort")
  val toByteName = N("toByte")
  val toCharName = N("toChar")
  val toDoubleName = N("toDouble")
  val toFloatName = N("toFloat")
  val mathName = N("math")
  val packageName = N("package")
  lazy val ArrayBufferClass = definitions.getClass("scala.collection.mutable.ArrayBuffer")
  lazy val RefArrayBuilderClass = definitions.getClass("scala.collection.mutable.ArrayBuilder.ofRef")
  lazy val WrappedArrayBuilderClass = definitions.getClass("scala.collection.mutable.WrappedArrayBuilder")
  lazy val ListBufferClass = definitions.getClass("scala.collection.mutable.ListBuffer")
  lazy val primArrayBuilderClasses = Array(
    (IntClass.tpe, "ofInt"),
    (LongClass.tpe, "ofLong"),
    (ShortClass.tpe, "ofShort"),
    (ByteClass.tpe, "ofByte"),
    (CharClass.tpe, "ofChar"),
    (BooleanClass.tpe, "ofBoolean"),
    (FloatClass.tpe, "ofFloat"),
    (DoubleClass.tpe, "ofDouble")
  ).map { case (sym, n) => (sym, definitions.getClass("scala.collection.mutable.ArrayBuilder." + n)) } toMap

  object ScalaMathFunction {
    /** I'm all for avoiding "magic strings" but in this case it's hard to
     *  see the twice-as-long identifiers as much improvement.
     */
    def apply(functionName: String, args: List[Tree]) =
      Apply(mkSelect("scala", "math", "package", functionName), args)
        
    def unapply(tree: Tree): Option[(Name, List[Tree])] = tree match {
      case
        Apply(
          Select(
            Select(
              Select(
                Ident(scalaName()),
                mathName()
              ),
              packageName()
            ),
            funName
          ),
          args
        ) =>
        Some((funName, args))
      case _ =>
        None
    }
  }
  object IntRange {
    def apply(from: Tree, to: Tree, by: Option[Tree], isUntil: Boolean, filters: List[Tree]) = error("not implemented")

	def unapply(tree: Tree): Option[(Tree, Tree, Option[Tree], Boolean, List[Tree])] = tree match {
      case Apply(Select(Apply(Select(Predef(), intWrapperName()), List(from)), funToName @ (toName() | untilName())), List(to)) =>
        funToName match {
          case toName() =>
            Some((from, to, None, false, Nil))
          case untilName() =>
            Some((from, to, None, true, Nil))
          case _ =>
            None
        }
      case Apply(Select(tg, n @ (byName() | withFilterName())), List(arg)) =>
       tg match {
          case IntRange(from, to, by, isUntil, filters) =>
            n match {
                case byName() if by == None =>
                    Some((from, to, Some(arg), isUntil, filters))
                case withFilterName() =>
                    Some((from, to, by, isUntil, filters ++ List(arg)))
                case _ =>
                    None
            }
          case _ =>
            None
        }
    }
  }

  object FilteredCol {
    def apply(col: Tree, filters: List[Tree]) = error("not implemented")
	def unapply(tree: Tree): Option[(Tree, List[Tree])] = tree match {
      case Apply(Select(tg, filterName()), a @ List(arg)) =>
       tg match {
          case FilteredCol(col, filters) =>
            Some(col, filters ++ a)
          case _ =>
            Some(tree, Nil)
        }
      case _ =>
        Some(tree, Nil)
    }
  }
  
  object Predef {
    lazy val RefArrayOps = this("refArrayOps")
    lazy val GenericArrayOps = this("genericArrayOps")
    lazy val IntWrapper  = this("intWrapper")
    lazy val println  = this("println")

    def contains(sym: Symbol)        = sym.owner == PredefModule.moduleClass
    def apply(name: String): Symbol  = PredefModule.tpe member name
    def unapply(tree: Tree): Boolean = tree.symbol == PredefModule
  }
  object ArrayOps {
    lazy val ArrayOpsClass    = definitions.getClass("scala.collection.mutable.ArrayOps")

    def unapply(tree: Tree): Option[Symbol] = tree match {
      case TypeApply(sel, List(arg))
        if sel.symbol == Predef.RefArrayOps || sel.symbol == Predef.GenericArrayOps =>
        Some(arg.tpe.typeSymbol)
      case _  => tree.symbol.tpe match {
        case MethodType(_, TypeRef(_, ArrayOpsClass, List(param)))
          if Predef contains tree.symbol =>
          Some(param.typeSymbol)
        case _ =>
          None
      }
    }
  }

  object Foreach {
    def apply(target: Tree, function: Tree) = error("not implemented")

	def unapply(tree: Tree): Option[(Tree, Tree)] = tree match {
      case Apply(TypeApply(Select(target, foreachName()), List(fRetType)), List(function)) =>
        Some((target, function))
      case _ =>
        None
    }
  }
  object ArrayTree {
    def unapply(tree: Tree) = tree match {
      case Apply(ArrayOps(componentType), List(array)) => Some(array, componentType)
      case _ => None
    }
  }
  /** This method submitted in case you like this sort of thing:
   *  not everyone does.  I'm a tireless advocate for brevity.
   */
  class ColTree(ColClass: Symbol) {
    //def unapply(tree: Tree) = Some(tree.tpe.dealias.deconst.widen) collect {
    //def unapply(tree: Tree) = Some(tree.tpe.dealias.deconst.widen) collect {
    def unapply(tree: Tree) = Some(tree.symbol.tpe.dealias.deconst.widen) collect {
      case TypeRef(_, ColClass, List(param)) => param.typeSymbol
    }
  }
  object ListTree extends ColTree(ListClass)
  
  object CanBuildFromArg {
    def unapply(tree: Tree) = tree match {
      case
        Apply(
          TypeApply(
            Select(
              xxx,
              canBuildFromName()
            ),
            yyy
          ),
          zzz
        ) =>
        true
      case
        TypeApply(
          Select(
            xxx,
            canBuildFromName()
          ),
          yyy
        ) =>
        true
      case _ =>
        false
    }
  }

  object Func {
    def unapply(tree: Tree): Option[(List[ValDef], Tree)] = tree match {
      case // method references def f(x: T) = y; col.map(f) (inside the .map = a block((), xx => f(xx))
        Block(List(), Func(params, body)) =>
        Some(params, body)
      case Function(params, body) =>
        Some(params, body)
      case _ =>
        None
    }
  }
  object ArrayTabulate {
    /** This is the one all the other ones go through. */
    lazy val tabulateSyms = (ArrayModule.tpe member "tabulate" alternatives).toSet//filter (_.paramss.flatten.size == 3)

    def apply(componentType: Tree, lengths: List[Tree], function: Tree, manifest: Tree) = error("not implemented")
    def unapply(tree: Tree): Option[(Tree, List[Tree], Tree, Tree)] = {
      if (!tabulateSyms.contains(methPart(tree).symbol))
        None
      else flattenApplyGroups(tree) match {
        case List(lengths, List(function), List(manifest)) =>
          Some((typeArgs(tree).headOption getOrElse EmptyTree, lengths, function, manifest))
        case _ =>
          None
      }
    }
  }
  sealed abstract class TraversalOpType {
    def methodName(isLeft: Boolean): String
    val needsInitialValue = false
    val needsFunction = false
    val loopSkipsFirst = false
  }
  
  object ReduceName {
    def apply(isLeft: Boolean) = error("not implemented")
    def unapply(name: Name) = name match {
      case reduceLeftName() => Some(true)
      case reduceRightName() => Some(false)
      case _ => None
    }
  }
  object ScanName {
    def apply(isLeft: Boolean) = error("not implemented")
    def unapply(name: Name) = name match {
      case scanLeftName() => Some(true)
      case scanRightName() => Some(false)
      case _ => None
    }
  }
  object FoldName {
    def apply(isLeft: Boolean) = error("not implemented")
    def unapply(name: Name) = name match {
      case foldLeftName() => Some(true)
      case foldRightName() => Some(false)
      case _ => None
    }
  }

  /// Matches one of the folding/scanning/reducing functions : (reduce|fold|scan)(Left|Right)
  object TraversalOp {

    case object Fold extends TraversalOpType {
      override def methodName(isLeft: Boolean) = "fold" + (if (isLeft) "Left" else "Right")
      override val needsInitialValue = true
      override val needsFunction: Boolean = true
    }
    case object Scan extends TraversalOpType {
      override def methodName(isLeft: Boolean) = "scan" + (if (isLeft) "Left" else "Right")
      override val needsInitialValue = true
      override val needsFunction: Boolean = true
    }
    case object Reduce extends TraversalOpType {
      override def methodName(isLeft: Boolean) = "reduce" + (if (isLeft) "Left" else "Right")
      override val needsFunction: Boolean = true
      override val loopSkipsFirst = true
    }
    case object Sum extends TraversalOpType {
      override def methodName(isLeft: Boolean) = "sum"
    }
    case object Count extends TraversalOpType {
      override def methodName(isLeft: Boolean) = "count"
      override val needsFunction: Boolean = true
    }
    case object Min extends TraversalOpType {
      override def methodName(isLeft: Boolean) = "min"
      override val loopSkipsFirst = true
    }
    case object Max extends TraversalOpType {
      override def methodName(isLeft: Boolean) = "max"
      override val loopSkipsFirst = true
    }
    case class Filter(not: Boolean) extends TraversalOpType {
      override def methodName(isLeft: Boolean) = if (not) "filterNot" else "filter"
    }
    case class FilterWhile(take: Boolean) extends TraversalOpType {
      override def methodName(isLeft: Boolean) = if (take) "takeWhile" else "dropWhile"
    }
    case object Map extends TraversalOpType {
      override def methodName(isLeft: Boolean) = "map"
    }
    case class AllOrSome(all: Boolean) extends TraversalOpType {
      override def methodName(isLeft: Boolean) = if (all) "forall" else "exists"
    }
    case object Find extends TraversalOpType {
      override def methodName(isLeft: Boolean) = "find"
    }
    def refineComponentType(componentType: Type, collectionTree: Tree): Type = {
      collectionTree.tpe match {
        case TypeRef(_, _, List(t)) =>
          t
        case _ =>
          componentType
      }
    }
    def apply(op: TraversalOpType, array: Tree, resultType: Type, mappedCollectionType: Type, function: Tree, isLeft: Boolean, initialValue: Tree) = error("not implemented")
    def unapply(tree: Tree): Option[(TraversalOpType, Tree, Type, Type, Tree, Boolean, Tree)] = tree match {
      case // map[B, That](f)(canBuildFrom)
        Apply(
          Apply(
            TypeApply(
              Select(collection, mapName()),
              List(mappedComponentType, mappedCollectionType)
            ),
            List(function)
          ),
          List(canBuildFrom @ CanBuildFromArg())
        ) =>
        Some((Map, collection, refineComponentType(mappedComponentType.tpe, tree), mappedCollectionType.tpe, function, true, null))
      case // map[B](f)
        Apply(
          TypeApply(
            Select(collection, mapName()),
            List(mappedComponentType)
          ),
          List(function)
        ) =>
        Some((Map, collection, refineComponentType(mappedComponentType.tpe, tree), null, function, true, null))
      case // scanLeft, scanRight
        Apply(
          Apply(
            Apply(
              TypeApply(
                Select(collection, ScanName(isLeft)),
                List(functionResultType, mappedArrayType)
              ),
              List(initialValue)
            ),
            List(function)
          ),
          List(CanBuildFromArg())
        ) =>
        Some((Scan, collection, functionResultType.tpe, null, function, isLeft, initialValue))
      case // foldLeft, foldRight
        Apply(
          Apply(
            TypeApply(
              Select(collection, FoldName(isLeft)),
              List(functionResultType)
            ),
            List(initialValue)
          ),
          List(function)
        ) =>
        Some((Fold, collection, functionResultType.tpe, null, function, isLeft, initialValue))
      case // sum, min, max
        Apply(
          TypeApply(
            Select(collection, n @ (sumName() | minName() | maxName())),
            List(functionResultType)
          ),
          List(isNumeric)
        ) =>
        reductionFunctionOp(n).collect { case op => (op, collection, functionResultType.tpe, null, null, true, null) }
      case // sum, min, max
        Select(collection, n @ (sumName() | minName() | maxName())) =>
        reductionFunctionOp(n).collect { case op => (op, collection, null, null, null, true, null) }
      case // reduceLeft, reduceRight
        Apply(
          TypeApply(
            Select(collection, ReduceName(isLeft)),
            List(functionResultType)
          ),
          List(function)
        ) =>
        Some((Reduce, collection, functionResultType.tpe, null, function, isLeft, null))
      case // filter, filterNot, takeWhile, dropWhile, forall, exists
        Apply(Select(collection, n), List(function @ Func(List(param), body))) =>
        (
          n match {
            case filterName() =>
              Some(Filter(false), collection.tpe)
            case filterNotName() =>
              Some(Filter(true), collection.tpe)

            case takeWhileName() =>
              Some(FilterWhile(true), collection.tpe)
            case dropWhileName() =>
              Some(FilterWhile(false), collection.tpe)

            case forallName() =>
              Some(AllOrSome(true), BooleanClass.tpe)
            case existsName() =>
              Some(AllOrSome(false), BooleanClass.tpe)

            case countName() =>
              Some(Count, IntClass.tpe)
            case _ =>
              None
          }
        ) match {
          case Some((op, resType)) =>
            Some((op, collection, resType, null, function, true, null))
          case None =>
            None
        }
      case _ =>
        None
    }
    def reductionFunctionOp(n: Name) = n match {
      case sumName() =>
        Some(Sum)
      case minName() =>
        Some(Min)
      case maxName() =>
        Some(Max)
      case _ =>
        None
    }
  }
}