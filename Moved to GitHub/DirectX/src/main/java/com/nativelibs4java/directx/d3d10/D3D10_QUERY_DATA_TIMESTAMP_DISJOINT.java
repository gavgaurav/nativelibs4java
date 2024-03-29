package com.nativelibs4java.directx.d3d10;
import org.bridj.Pointer;
import org.bridj.StructObject;
import org.bridj.ann.Field;
import org.bridj.ann.Library;
/**
 * <i>native declaration : d3d10.h:850</i><br>
 * This file was autogenerated by <a href="http://jnaerator.googlecode.com/">JNAerator</a>,<br>
 * a tool written by <a href="http://ochafik.free.fr/">Olivier Chafik</a> that <a href="http://code.google.com/p/jnaerator/wiki/CreditsAndLicense">uses a few opensource projects.</a>.<br>
 * For help, please visit <a href="http://nativelibs4java.googlecode.com/">NativeLibs4Java</a> or <a href="http://bridj.googlecode.com/">BridJ</a> .
 */
@Library("d3d10") 
public class D3D10_QUERY_DATA_TIMESTAMP_DISJOINT extends StructObject {
	public D3D10_QUERY_DATA_TIMESTAMP_DISJOINT() {
		super();
	}
	public D3D10_QUERY_DATA_TIMESTAMP_DISJOINT(Pointer pointer) {
		super(pointer);
	}
	/// C type : UINT64
	@Field(0) 
	public long Frequency() {
		return this.io.getLongField(this, 0);
	}
	/// C type : UINT64
	@Field(0) 
	public D3D10_QUERY_DATA_TIMESTAMP_DISJOINT Frequency(long Frequency) {
		this.io.setLongField(this, 0, Frequency);
		return this;
	}
	@Field(1) 
	public int Disjoint() {
		return this.io.getIntField(this, 1);
	}
	@Field(1) 
	public D3D10_QUERY_DATA_TIMESTAMP_DISJOINT Disjoint(int Disjoint) {
		this.io.setIntField(this, 1, Disjoint);
		return this;
	}
}
