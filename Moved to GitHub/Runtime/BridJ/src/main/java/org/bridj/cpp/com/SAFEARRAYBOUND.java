package org.bridj.cpp.com;
import org.bridj.CRuntime;
import org.bridj.Pointer;
import org.bridj.StructObject;
import org.bridj.ann.CLong;
import org.bridj.ann.Field;
import org.bridj.ann.Runtime;
import org.bridj.ann.Library;
/**
 * This file was autogenerated by <a href="http://jnaerator.googlecode.com/">JNAerator</a>,<br>
 * a tool written by <a href="http://ochafik.free.fr/">Olivier Chafik</a> that <a href="http://code.google.com/p/jnaerator/wiki/CreditsAndLicense">uses a few opensource projects.</a>.<br>
 * For help, please visit <a href="http://nativelibs4java.googlecode.com/">NativeLibs4Java</a> or <a href="http://bridj.googlecode.com/">BridJ</a> .
 */
@Runtime(CRuntime.class) 
public class SAFEARRAYBOUND extends StructObject {
	public SAFEARRAYBOUND() {
		super();
	}
	public SAFEARRAYBOUND(Pointer pointer) {
		super(pointer);
	}
	/// C type : ULONG
	@Field(0) 
	public int cElements() {
		return this.io.getIntField(this, 0);
	}
	/// C type : ULONG
	@Field(0) 
	public SAFEARRAYBOUND cElements(int cElements) {
		this.io.setIntField(this, 0, cElements);
		return this;
	}
	/// C type : ULONG
	public final int cElements_$eq(int cElements) {
		cElements(cElements);
		return cElements;
	}
	@CLong 
	@Field(1) 
	public long lLbound() {
		return this.io.getCLongField(this, 1);
	}
	@CLong 
	@Field(1) 
	public SAFEARRAYBOUND lLbound(long lLbound) {
		this.io.setCLongField(this, 1, lLbound);
		return this;
	}
	public final long lLbound_$eq(long lLbound) {
		lLbound(lLbound);
		return lLbound;
	}
}

