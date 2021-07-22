/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_seeta_sdk_AgePredictor */

#ifndef _Included_com_seeta_sdk_AgePredictor
#define _Included_com_seeta_sdk_AgePredictor
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_seeta_sdk_AgePredictor
 * Method:    construct
 * Signature: (Lcom/seeta/sdk/SeetaModelSetting;)V
 */
JNIEXPORT void JNICALL Java_com_seeta_sdk_AgePredictor_construct
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_seeta_sdk_AgePredictor
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_seeta_sdk_AgePredictor_dispose
  (JNIEnv *, jobject);

/*
 * Class:     com_seeta_sdk_AgePredictor
 * Method:    GetCropFaceWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_seeta_sdk_AgePredictor_GetCropFaceWidth
  (JNIEnv *, jobject);

/*
 * Class:     com_seeta_sdk_AgePredictor
 * Method:    GetCropFaceHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_seeta_sdk_AgePredictor_GetCropFaceHeight
  (JNIEnv *, jobject);

/*
 * Class:     com_seeta_sdk_AgePredictor
 * Method:    GetCropFaceChannels
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_seeta_sdk_AgePredictor_GetCropFaceChannels
  (JNIEnv *, jobject);

/*
 * Class:     com_seeta_sdk_AgePredictor
 * Method:    CropFace
 * Signature: (Lcom/seeta/sdk/SeetaImageData;[Lcom/seeta/sdk/SeetaPointF;Lcom/seeta/sdk/SeetaImageData;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_seeta_sdk_AgePredictor_CropFace
  (JNIEnv *, jobject, jobject, jobjectArray, jobject);

/*
 * Class:     com_seeta_sdk_AgePredictor
 * Method:    PredictAge
 * Signature: (Lcom/seeta/sdk/SeetaImageData;[I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_seeta_sdk_AgePredictor_PredictAge
  (JNIEnv *, jobject, jobject, jintArray);

/*
 * Class:     com_seeta_sdk_AgePredictor
 * Method:    PredictAgeWithCrop
 * Signature: (Lcom/seeta/sdk/SeetaImageData;[Lcom/seeta/sdk/SeetaPointF;[I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_seeta_sdk_AgePredictor_PredictAgeWithCrop
  (JNIEnv *, jobject, jobject, jobjectArray, jintArray);

/*
 * Class:     com_seeta_sdk_AgePredictor
 * Method:    set
 * Signature: (Lcom/seeta/sdk/AgePredictor/Property;D)V
 */
JNIEXPORT void JNICALL Java_com_seeta_sdk_AgePredictor_set
  (JNIEnv *, jobject, jobject, jdouble);

/*
 * Class:     com_seeta_sdk_AgePredictor
 * Method:    get
 * Signature: (Lcom/seeta/sdk/AgePredictor/Property;)D
 */
JNIEXPORT jdouble JNICALL Java_com_seeta_sdk_AgePredictor_get
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
