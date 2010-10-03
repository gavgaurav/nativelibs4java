/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package scalacl

import java.io.File
import org.junit._
import Assert._

class ArrayForeach2WhileTest extends TestUtils {

  implicit val outDir = new File("target/arrayForeachTestOut")
  outDir.mkdirs

  @Test
  def simplePrimitiveArrayForeach = 
    for (p <- Seq("Double", "Float", "Int", "Short", "Long", "Byte", "Char", "Boolean"))
      simpleArrayForeach(p)

  @Test
  def simpleStringArrayForeach =
    simpleArrayForeach("String")

  def simpleArrayForeach(typeStr: String) {
    ensurePluginCompilesSnippetsToSameByteCode(
      """ val a = new Array[""" + typeStr + """](10)
          a.foreach(println(_))
      """,
      """ val a = new Array[""" + typeStr + """](10)
          val aa = a
          var i = 0
          val n = aa.length
          while (i < n)
          {
            println(a(i))
            i += 1
          }
      """
    )
  }
}
