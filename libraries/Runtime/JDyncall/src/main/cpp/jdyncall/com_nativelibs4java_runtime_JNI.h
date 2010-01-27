/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_nativelibs4java_runtime_JNI */

#ifndef _Included_com_nativelibs4java_runtime_JNI
#define _Included_com_nativelibs4java_runtime_JNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_init
  (JNIEnv *, jclass);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    sizeOf_size_t
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_nativelibs4java_runtime_JNI_sizeOf_1size_1t
  (JNIEnv *, jclass);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    sizeOf_wchar_t
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_nativelibs4java_runtime_JNI_sizeOf_1wchar_1t
  (JNIEnv *, jclass);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    sizeOf_ptrdiff_t
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_nativelibs4java_runtime_JNI_sizeOf_1ptrdiff_1t
  (JNIEnv *, jclass);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    registerMethod
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Method;J)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_registerMethod
  (JNIEnv *, jclass, jclass, jobject, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    loadLibrary
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_loadLibrary
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    freeLibrary
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_freeLibrary
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    findSymbolInLibrary
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_findSymbolInLibrary
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    newGlobalRef
 * Signature: (Ljava/lang/Object;)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_newGlobalRef
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    deleteGlobalRef
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_deleteGlobalRef
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    newWeakGlobalRef
 * Signature: (Ljava/lang/Object;)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_newWeakGlobalRef
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    deleteWeakGlobalRef
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_deleteWeakGlobalRef
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    newDirectByteBuffer
 * Signature: (JJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_nativelibs4java_runtime_JNI_newDirectByteBuffer
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    getDirectBufferAddress
 * Signature: (Ljava/nio/Buffer;)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_getDirectBufferAddress
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    getDirectBufferCapacity
 * Signature: (Ljava/nio/Buffer;)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_getDirectBufferCapacity
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    getIntegerArrayElements
 * Signature: ([I[Z)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_getIntegerArrayElements
  (JNIEnv *, jclass, jintArray, jbooleanArray);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    releaseIntegerArrayElements
 * Signature: ([IJI)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_releaseIntegerArrayElements
  (JNIEnv *, jclass, jintArray, jlong, jint);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    get_int
 * Signature: (JB)I
 */
JNIEXPORT jint JNICALL Java_com_nativelibs4java_runtime_JNI_get_1int
  (JNIEnv *, jclass, jlong, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    set_int
 * Signature: (JIB)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_set_1int
  (JNIEnv *, jclass, jlong, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    get_int_array
 * Signature: (JIB)[I
 */
JNIEXPORT jintArray JNICALL Java_com_nativelibs4java_runtime_JNI_get_1int_1array
  (JNIEnv *, jclass, jlong, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    set_int_array
 * Signature: (J[IIIB)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_set_1int_1array
  (JNIEnv *, jclass, jlong, jintArray, jint, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    getLongArrayElements
 * Signature: ([J[Z)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_getLongArrayElements
  (JNIEnv *, jclass, jlongArray, jbooleanArray);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    releaseLongArrayElements
 * Signature: ([JJI)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_releaseLongArrayElements
  (JNIEnv *, jclass, jlongArray, jlong, jint);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    get_long
 * Signature: (JB)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_get_1long
  (JNIEnv *, jclass, jlong, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    set_long
 * Signature: (JJB)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_set_1long
  (JNIEnv *, jclass, jlong, jlong, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    get_long_array
 * Signature: (JIB)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_nativelibs4java_runtime_JNI_get_1long_1array
  (JNIEnv *, jclass, jlong, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    set_long_array
 * Signature: (J[JIIB)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_set_1long_1array
  (JNIEnv *, jclass, jlong, jlongArray, jint, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    getShortArrayElements
 * Signature: ([S[Z)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_getShortArrayElements
  (JNIEnv *, jclass, jshortArray, jbooleanArray);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    releaseShortArrayElements
 * Signature: ([SJI)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_releaseShortArrayElements
  (JNIEnv *, jclass, jshortArray, jlong, jint);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    get_short
 * Signature: (JB)S
 */
JNIEXPORT jshort JNICALL Java_com_nativelibs4java_runtime_JNI_get_1short
  (JNIEnv *, jclass, jlong, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    set_short
 * Signature: (JSB)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_set_1short
  (JNIEnv *, jclass, jlong, jshort, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    get_short_array
 * Signature: (JIB)[S
 */
JNIEXPORT jshortArray JNICALL Java_com_nativelibs4java_runtime_JNI_get_1short_1array
  (JNIEnv *, jclass, jlong, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    set_short_array
 * Signature: (J[SIIB)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_set_1short_1array
  (JNIEnv *, jclass, jlong, jshortArray, jint, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    getByteArrayElements
 * Signature: ([B[Z)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_getByteArrayElements
  (JNIEnv *, jclass, jbyteArray, jbooleanArray);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    releaseByteArrayElements
 * Signature: ([BJI)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_releaseByteArrayElements
  (JNIEnv *, jclass, jbyteArray, jlong, jint);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    get_byte
 * Signature: (JB)B
 */
JNIEXPORT jbyte JNICALL Java_com_nativelibs4java_runtime_JNI_get_1byte
  (JNIEnv *, jclass, jlong, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    set_byte
 * Signature: (JBB)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_set_1byte
  (JNIEnv *, jclass, jlong, jbyte, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    get_byte_array
 * Signature: (JIB)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_nativelibs4java_runtime_JNI_get_1byte_1array
  (JNIEnv *, jclass, jlong, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    set_byte_array
 * Signature: (J[BIIB)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_set_1byte_1array
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    getCharacterArrayElements
 * Signature: ([C[Z)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_getCharacterArrayElements
  (JNIEnv *, jclass, jcharArray, jbooleanArray);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    releaseCharacterArrayElements
 * Signature: ([CJI)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_releaseCharacterArrayElements
  (JNIEnv *, jclass, jcharArray, jlong, jint);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    get_char
 * Signature: (JB)C
 */
JNIEXPORT jchar JNICALL Java_com_nativelibs4java_runtime_JNI_get_1char
  (JNIEnv *, jclass, jlong, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    set_char
 * Signature: (JCB)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_set_1char
  (JNIEnv *, jclass, jlong, jchar, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    get_char_array
 * Signature: (JIB)[C
 */
JNIEXPORT jcharArray JNICALL Java_com_nativelibs4java_runtime_JNI_get_1char_1array
  (JNIEnv *, jclass, jlong, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    set_char_array
 * Signature: (J[CIIB)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_set_1char_1array
  (JNIEnv *, jclass, jlong, jcharArray, jint, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    getFloatArrayElements
 * Signature: ([F[Z)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_getFloatArrayElements
  (JNIEnv *, jclass, jfloatArray, jbooleanArray);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    releaseFloatArrayElements
 * Signature: ([FJI)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_releaseFloatArrayElements
  (JNIEnv *, jclass, jfloatArray, jlong, jint);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    get_float
 * Signature: (JB)F
 */
JNIEXPORT jfloat JNICALL Java_com_nativelibs4java_runtime_JNI_get_1float
  (JNIEnv *, jclass, jlong, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    set_float
 * Signature: (JFB)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_set_1float
  (JNIEnv *, jclass, jlong, jfloat, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    get_float_array
 * Signature: (JIB)[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_nativelibs4java_runtime_JNI_get_1float_1array
  (JNIEnv *, jclass, jlong, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    set_float_array
 * Signature: (J[FIIB)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_set_1float_1array
  (JNIEnv *, jclass, jlong, jfloatArray, jint, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    getDoubleArrayElements
 * Signature: ([D[Z)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_getDoubleArrayElements
  (JNIEnv *, jclass, jdoubleArray, jbooleanArray);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    releaseDoubleArrayElements
 * Signature: ([DJI)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_releaseDoubleArrayElements
  (JNIEnv *, jclass, jdoubleArray, jlong, jint);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    get_double
 * Signature: (JB)D
 */
JNIEXPORT jdouble JNICALL Java_com_nativelibs4java_runtime_JNI_get_1double
  (JNIEnv *, jclass, jlong, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    set_double
 * Signature: (JDB)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_set_1double
  (JNIEnv *, jclass, jlong, jdouble, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    get_double_array
 * Signature: (JIB)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_com_nativelibs4java_runtime_JNI_get_1double_1array
  (JNIEnv *, jclass, jlong, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    set_double_array
 * Signature: (J[DIIB)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_set_1double_1array
  (JNIEnv *, jclass, jlong, jdoubleArray, jint, jint, jbyte);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    createCallbacks
 * Signature: ([Ljava/lang/reflect/Method;[Lcom/nativelibs4java/runtime/MethodCallInfo;)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_nativelibs4java_runtime_JNI_createCallbacks
  (JNIEnv *, jclass, jobjectArray, jobjectArray);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    freeCallbacks
 * Signature: ([J)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_freeCallbacks
  (JNIEnv *, jclass, jlongArray);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    malloc
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_malloc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    strlen
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_strlen
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    wcslen
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_wcslen
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    memcpy
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_memcpy
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    wmemcpy
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_wmemcpy
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    memmove
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_memmove
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    wmemmove
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_wmemmove
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    memchr
 * Signature: (JBJ)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_memchr
  (JNIEnv *, jclass, jlong, jbyte, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    memcmp
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_com_nativelibs4java_runtime_JNI_memcmp
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    memset
 * Signature: (JBJ)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_memset
  (JNIEnv *, jclass, jlong, jbyte, jlong);

#ifdef __cplusplus
}
#endif
#endif
