/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_nativelibs4java_runtime_Pointer */

#ifndef _Included_com_nativelibs4java_runtime_Pointer
#define _Included_com_nativelibs4java_runtime_Pointer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    getInt
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_nativelibs4java_runtime_Pointer_getInt
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    getShort
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_com_nativelibs4java_runtime_Pointer_getShort
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    getLong
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_Pointer_getLong
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    getByte
 * Signature: (J)B
 */
JNIEXPORT jbyte JNICALL Java_com_nativelibs4java_runtime_Pointer_getByte
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    getDouble
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_com_nativelibs4java_runtime_Pointer_getDouble
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    getFloat
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_nativelibs4java_runtime_Pointer_getFloat
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    getPointerAddress
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_Pointer_getPointerAddress
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    setPointerAddress
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_Pointer_setPointerAddress
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    setInt
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_Pointer_setInt
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    setShort
 * Signature: (JS)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_Pointer_setShort
  (JNIEnv *, jobject, jlong, jshort);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    setLong
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_Pointer_setLong
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    setByte
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_Pointer_setByte
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    setDouble
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_Pointer_setDouble
  (JNIEnv *, jobject, jlong, jdouble);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    setFloat
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_Pointer_setFloat
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    doAllocate
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_Pointer_doAllocate
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_nativelibs4java_runtime_Pointer
 * Method:    doFree
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_Pointer_doFree
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
