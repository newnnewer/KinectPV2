/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class pKinect_PKinect */

#ifndef _Included_pKinect_PKinect
#define _Included_pKinect_PKinect
#ifdef __cplusplus
extern "C" {
#endif
#undef pKinect_PKinect_CNT
#define pKinect_PKinect_CNT 5L
/*
 * Class:     pKinect_PKinect
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_pKinect_PKinect_init
  (JNIEnv *, jobject);

/*
 * Class:     pKinect_PKinect
 * Method:    Nui_GetImage
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_pKinect_PKinect_Nui_1GetImage
  (JNIEnv *, jobject);

/*
 * Class:     pKinect_PKinect
 * Method:    Nui_GetDepth
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_pKinect_PKinect_Nui_1GetDepth
  (JNIEnv *, jobject);

/*
 * Class:     pKinect_PKinect
 * Method:    Nui_GetMask
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_pKinect_PKinect_Nui_1GetMask
  (JNIEnv *, jobject);

/*
 * Class:     pKinect_PKinect
 * Method:    getFigure
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_pKinect_PKinect_getFigure
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
