/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_bridj_JNI */

#ifndef _Included_org_bridj_JNI
#define _Included_org_bridj_JNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_bridj_JNI
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_init
  (JNIEnv *, jclass);

/*
 * Class:     org_bridj_JNI
 * Method:    sizeOf_size_t
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_bridj_JNI_sizeOf_1size_1t
  (JNIEnv *, jclass);

/*
 * Class:     org_bridj_JNI
 * Method:    sizeOf_wchar_t
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_bridj_JNI_sizeOf_1wchar_1t
  (JNIEnv *, jclass);

/*
 * Class:     org_bridj_JNI
 * Method:    sizeOf_ptrdiff_t
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_bridj_JNI_sizeOf_1ptrdiff_1t
  (JNIEnv *, jclass);

/*
 * Class:     org_bridj_JNI
 * Method:    sizeOf_long
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_bridj_JNI_sizeOf_1long
  (JNIEnv *, jclass);

/*
 * Class:     org_bridj_JNI
 * Method:    getEnv
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_getEnv
  (JNIEnv *, jclass);

/*
 * Class:     org_bridj_JNI
 * Method:    loadLibrary
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_loadLibrary
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_bridj_JNI
 * Method:    freeLibrary
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_freeLibrary
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    loadLibrarySymbols
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_loadLibrarySymbols
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    freeLibrarySymbols
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_freeLibrarySymbols
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    findSymbolInLibrary
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_findSymbolInLibrary
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_bridj_JNI
 * Method:    getLibrarySymbols
 * Signature: (JJ)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_org_bridj_JNI_getLibrarySymbols
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    findSymbolName
 * Signature: (JJJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_bridj_JNI_findSymbolName
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    newGlobalRef
 * Signature: (Ljava/lang/Object;)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_newGlobalRef
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_bridj_JNI
 * Method:    deleteGlobalRef
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_deleteGlobalRef
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    newWeakGlobalRef
 * Signature: (Ljava/lang/Object;)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_newWeakGlobalRef
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_bridj_JNI
 * Method:    deleteWeakGlobalRef
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_deleteWeakGlobalRef
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    newDirectByteBuffer
 * Signature: (JJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_org_bridj_JNI_newDirectByteBuffer
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    getDirectBufferAddress
 * Signature: (Ljava/nio/Buffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_getDirectBufferAddress
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_bridj_JNI
 * Method:    getDirectBufferCapacity
 * Signature: (Ljava/nio/Buffer;)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_getDirectBufferCapacity
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_bridj_JNI
 * Method:    getIntegerArrayElements
 * Signature: ([I[Z)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_getIntegerArrayElements
  (JNIEnv *, jclass, jintArray, jbooleanArray);

/*
 * Class:     org_bridj_JNI
 * Method:    releaseIntegerArrayElements
 * Signature: ([IJI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_releaseIntegerArrayElements
  (JNIEnv *, jclass, jintArray, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    get_int
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_bridj_JNI_get_1int
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    set_int
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1int
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    get_int_array
 * Signature: (JI)[I
 */
JNIEXPORT jintArray JNICALL Java_org_bridj_JNI_get_1int_1array
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    set_int_array
 * Signature: (J[III)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1int_1array
  (JNIEnv *, jclass, jlong, jintArray, jint, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    get_int_disordered
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_bridj_JNI_get_1int_1disordered
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    set_int_disordered
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1int_1disordered
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    get_int_array_disordered
 * Signature: (JI)[I
 */
JNIEXPORT jintArray JNICALL Java_org_bridj_JNI_get_1int_1array_1disordered
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    set_int_array_disordered
 * Signature: (J[III)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1int_1array_1disordered
  (JNIEnv *, jclass, jlong, jintArray, jint, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    getLongArrayElements
 * Signature: ([J[Z)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_getLongArrayElements
  (JNIEnv *, jclass, jlongArray, jbooleanArray);

/*
 * Class:     org_bridj_JNI
 * Method:    releaseLongArrayElements
 * Signature: ([JJI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_releaseLongArrayElements
  (JNIEnv *, jclass, jlongArray, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    get_long
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_get_1long
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    set_long
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1long
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    get_long_array
 * Signature: (JI)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_bridj_JNI_get_1long_1array
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    set_long_array
 * Signature: (J[JII)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1long_1array
  (JNIEnv *, jclass, jlong, jlongArray, jint, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    get_long_disordered
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_get_1long_1disordered
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    set_long_disordered
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1long_1disordered
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    get_long_array_disordered
 * Signature: (JI)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_bridj_JNI_get_1long_1array_1disordered
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    set_long_array_disordered
 * Signature: (J[JII)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1long_1array_1disordered
  (JNIEnv *, jclass, jlong, jlongArray, jint, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    getShortArrayElements
 * Signature: ([S[Z)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_getShortArrayElements
  (JNIEnv *, jclass, jshortArray, jbooleanArray);

/*
 * Class:     org_bridj_JNI
 * Method:    releaseShortArrayElements
 * Signature: ([SJI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_releaseShortArrayElements
  (JNIEnv *, jclass, jshortArray, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    get_short
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_org_bridj_JNI_get_1short
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    set_short
 * Signature: (JS)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1short
  (JNIEnv *, jclass, jlong, jshort);

/*
 * Class:     org_bridj_JNI
 * Method:    get_short_array
 * Signature: (JI)[S
 */
JNIEXPORT jshortArray JNICALL Java_org_bridj_JNI_get_1short_1array
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    set_short_array
 * Signature: (J[SII)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1short_1array
  (JNIEnv *, jclass, jlong, jshortArray, jint, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    get_short_disordered
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_org_bridj_JNI_get_1short_1disordered
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    set_short_disordered
 * Signature: (JS)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1short_1disordered
  (JNIEnv *, jclass, jlong, jshort);

/*
 * Class:     org_bridj_JNI
 * Method:    get_short_array_disordered
 * Signature: (JI)[S
 */
JNIEXPORT jshortArray JNICALL Java_org_bridj_JNI_get_1short_1array_1disordered
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    set_short_array_disordered
 * Signature: (J[SII)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1short_1array_1disordered
  (JNIEnv *, jclass, jlong, jshortArray, jint, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    getByteArrayElements
 * Signature: ([B[Z)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_getByteArrayElements
  (JNIEnv *, jclass, jbyteArray, jbooleanArray);

/*
 * Class:     org_bridj_JNI
 * Method:    releaseByteArrayElements
 * Signature: ([BJI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_releaseByteArrayElements
  (JNIEnv *, jclass, jbyteArray, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    get_byte
 * Signature: (J)B
 */
JNIEXPORT jbyte JNICALL Java_org_bridj_JNI_get_1byte
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    set_byte
 * Signature: (JB)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1byte
  (JNIEnv *, jclass, jlong, jbyte);

/*
 * Class:     org_bridj_JNI
 * Method:    get_byte_array
 * Signature: (JI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_bridj_JNI_get_1byte_1array
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    set_byte_array
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1byte_1array
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    getCharacterArrayElements
 * Signature: ([C[Z)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_getCharacterArrayElements
  (JNIEnv *, jclass, jcharArray, jbooleanArray);

/*
 * Class:     org_bridj_JNI
 * Method:    releaseCharacterArrayElements
 * Signature: ([CJI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_releaseCharacterArrayElements
  (JNIEnv *, jclass, jcharArray, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    get_char
 * Signature: (J)C
 */
JNIEXPORT jchar JNICALL Java_org_bridj_JNI_get_1char
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    set_char
 * Signature: (JC)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1char
  (JNIEnv *, jclass, jlong, jchar);

/*
 * Class:     org_bridj_JNI
 * Method:    get_char_array
 * Signature: (JI)[C
 */
JNIEXPORT jcharArray JNICALL Java_org_bridj_JNI_get_1char_1array
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    set_char_array
 * Signature: (J[CII)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1char_1array
  (JNIEnv *, jclass, jlong, jcharArray, jint, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    get_char_disordered
 * Signature: (J)C
 */
JNIEXPORT jchar JNICALL Java_org_bridj_JNI_get_1char_1disordered
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    set_char_disordered
 * Signature: (JC)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1char_1disordered
  (JNIEnv *, jclass, jlong, jchar);

/*
 * Class:     org_bridj_JNI
 * Method:    get_char_array_disordered
 * Signature: (JI)[C
 */
JNIEXPORT jcharArray JNICALL Java_org_bridj_JNI_get_1char_1array_1disordered
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    set_char_array_disordered
 * Signature: (J[CII)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1char_1array_1disordered
  (JNIEnv *, jclass, jlong, jcharArray, jint, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    getFloatArrayElements
 * Signature: ([F[Z)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_getFloatArrayElements
  (JNIEnv *, jclass, jfloatArray, jbooleanArray);

/*
 * Class:     org_bridj_JNI
 * Method:    releaseFloatArrayElements
 * Signature: ([FJI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_releaseFloatArrayElements
  (JNIEnv *, jclass, jfloatArray, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    get_float
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_org_bridj_JNI_get_1float
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    set_float
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1float
  (JNIEnv *, jclass, jlong, jfloat);

/*
 * Class:     org_bridj_JNI
 * Method:    get_float_array
 * Signature: (JI)[F
 */
JNIEXPORT jfloatArray JNICALL Java_org_bridj_JNI_get_1float_1array
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    set_float_array
 * Signature: (J[FII)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1float_1array
  (JNIEnv *, jclass, jlong, jfloatArray, jint, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    getDoubleArrayElements
 * Signature: ([D[Z)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_getDoubleArrayElements
  (JNIEnv *, jclass, jdoubleArray, jbooleanArray);

/*
 * Class:     org_bridj_JNI
 * Method:    releaseDoubleArrayElements
 * Signature: ([DJI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_releaseDoubleArrayElements
  (JNIEnv *, jclass, jdoubleArray, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    get_double
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_org_bridj_JNI_get_1double
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    set_double
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1double
  (JNIEnv *, jclass, jlong, jdouble);

/*
 * Class:     org_bridj_JNI
 * Method:    get_double_array
 * Signature: (JI)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_org_bridj_JNI_get_1double_1array
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    set_double_array
 * Signature: (J[DII)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1double_1array
  (JNIEnv *, jclass, jlong, jdoubleArray, jint, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    getBooleanArrayElements
 * Signature: ([Z[Z)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_getBooleanArrayElements
  (JNIEnv *, jclass, jbooleanArray, jbooleanArray);

/*
 * Class:     org_bridj_JNI
 * Method:    releaseBooleanArrayElements
 * Signature: ([ZJI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_releaseBooleanArrayElements
  (JNIEnv *, jclass, jbooleanArray, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    get_boolean
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_bridj_JNI_get_1boolean
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    set_boolean
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1boolean
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     org_bridj_JNI
 * Method:    get_boolean_array
 * Signature: (JI)[Z
 */
JNIEXPORT jbooleanArray JNICALL Java_org_bridj_JNI_get_1boolean_1array
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    set_boolean_array
 * Signature: (J[ZII)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_set_1boolean_1array
  (JNIEnv *, jclass, jlong, jbooleanArray, jint, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    callSinglePointerArgVoidFunction
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_callSinglePointerArgVoidFunction
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    createCToJavaCallback
 * Signature: (Lorg/bridj/MethodCallInfo;)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_createCToJavaCallback
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_bridj_JNI
 * Method:    getActualCToJavaCallback
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_getActualCToJavaCallback
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    bindJavaMethodsToObjCMethods
 * Signature: ([Lorg/bridj/MethodCallInfo;)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_bindJavaMethodsToObjCMethods
  (JNIEnv *, jclass, jobjectArray);

/*
 * Class:     org_bridj_JNI
 * Method:    bindJavaToCCallbacks
 * Signature: ([Lorg/bridj/MethodCallInfo;)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_bindJavaToCCallbacks
  (JNIEnv *, jclass, jobjectArray);

/*
 * Class:     org_bridj_JNI
 * Method:    bindJavaMethodsToCFunctions
 * Signature: ([Lorg/bridj/MethodCallInfo;)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_bindJavaMethodsToCFunctions
  (JNIEnv *, jclass, jobjectArray);

/*
 * Class:     org_bridj_JNI
 * Method:    bindJavaMethodsToVirtualMethods
 * Signature: ([Lorg/bridj/MethodCallInfo;)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_bindJavaMethodsToVirtualMethods
  (JNIEnv *, jclass, jobjectArray);

/*
 * Class:     org_bridj_JNI
 * Method:    freeCToJavaCallback
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_freeCToJavaCallback
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    freeObjCMethodBindings
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_freeObjCMethodBindings
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    freeJavaToCCallbacks
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_freeJavaToCCallbacks
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    freeCFunctionBindings
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_freeCFunctionBindings
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    freeVirtualMethodBindings
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_freeVirtualMethodBindings
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_bridj_JNI
 * Method:    createCallTempStruct
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_createCallTempStruct
  (JNIEnv *, jclass);

/*
 * Class:     org_bridj_JNI
 * Method:    deleteCallTempStruct
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_deleteCallTempStruct
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    getMaxDirectMappingArgCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_bridj_JNI_getMaxDirectMappingArgCount
  (JNIEnv *, jclass);

/*
 * Class:     org_bridj_JNI
 * Method:    mallocNulled
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_mallocNulled
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    malloc
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_malloc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    strlen
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_strlen
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    wcslen
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_wcslen
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    memcpy
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_memcpy
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    memmove
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_memmove
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    memchr
 * Signature: (JBJ)J
 */
JNIEXPORT jlong JNICALL Java_org_bridj_JNI_memchr
  (JNIEnv *, jclass, jlong, jbyte, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    memcmp
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_org_bridj_JNI_memcmp
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_bridj_JNI
 * Method:    memset
 * Signature: (JBJ)V
 */
JNIEXPORT void JNICALL Java_org_bridj_JNI_memset
  (JNIEnv *, jclass, jlong, jbyte, jlong);

#ifdef __cplusplus
}
#endif
#endif
