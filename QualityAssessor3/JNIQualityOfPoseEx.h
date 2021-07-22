/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_seeta_sdk_QualityOfPoseEx */

#ifndef _Included_com_seeta_sdk_QualityOfPoseEx
#define _Included_com_seeta_sdk_QualityOfPoseEx
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_seeta_sdk_QualityOfPoseEx
 * Method:    construct
 * Signature: (Lcom/seeta/sdk/SeetaModelSetting;)V
 */
JNIEXPORT void JNICALL Java_com_seeta_sdk_QualityOfPoseEx_construct__Lcom_seeta_sdk_SeetaModelSetting_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_seeta_sdk_QualityOfPoseEx
 * Method:    construct
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_seeta_sdk_QualityOfPoseEx_construct__Ljava_lang_String_2Ljava_lang_String_2I
  (JNIEnv *, jobject, jstring, jstring, jint);

/*
 * Class:     com_seeta_sdk_QualityOfPoseEx
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_seeta_sdk_QualityOfPoseEx_dispose
  (JNIEnv *, jobject);

/*
 * Class:     com_seeta_sdk_QualityOfPoseEx
 * Method:    checkCore
 * Signature: (Lcom/seeta/sdk/SeetaImageData;Lcom/seeta/sdk/SeetaRect;[Lcom/seeta/sdk/SeetaPointF;[F)I
 */
JNIEXPORT jint JNICALL Java_com_seeta_sdk_QualityOfPoseEx_checkCore__Lcom_seeta_sdk_SeetaImageData_2Lcom_seeta_sdk_SeetaRect_2_3Lcom_seeta_sdk_SeetaPointF_2_3F
  (JNIEnv *, jobject, jobject, jobject, jobjectArray, jfloatArray);

/*
 * Class:     com_seeta_sdk_QualityOfPoseEx
 * Method:    checkCore
 * Signature: (Lcom/seeta/sdk/SeetaImageData;Lcom/seeta/sdk/SeetaRect;[Lcom/seeta/sdk/SeetaPointF;[F[F[F)V
 */
JNIEXPORT void JNICALL Java_com_seeta_sdk_QualityOfPoseEx_checkCore__Lcom_seeta_sdk_SeetaImageData_2Lcom_seeta_sdk_SeetaRect_2_3Lcom_seeta_sdk_SeetaPointF_2_3F_3F_3F
  (JNIEnv *, jobject, jobject, jobject, jobjectArray, jfloatArray, jfloatArray, jfloatArray);

/*
 * Class:     com_seeta_sdk_QualityOfPoseEx
 * Method:    set
 * Signature: (Lcom/seeta/sdk/QualityOfPoseEx/Property;D)V
 */
JNIEXPORT void JNICALL Java_com_seeta_sdk_QualityOfPoseEx_set
  (JNIEnv *, jobject, jobject, jdouble);

/*
 * Class:     com_seeta_sdk_QualityOfPoseEx
 * Method:    get
 * Signature: (Lcom/seeta/sdk/QualityOfPoseEx/Property;)D
 */
JNIEXPORT jdouble JNICALL Java_com_seeta_sdk_QualityOfPoseEx_get
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
