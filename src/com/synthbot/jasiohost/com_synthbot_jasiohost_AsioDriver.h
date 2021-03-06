/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_synthbot_jasiohost_AsioDriver */

#ifndef _Included_com_synthbot_jasiohost_AsioDriver
#define _Included_com_synthbot_jasiohost_AsioDriver
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_synthbot_jasiohost_AsioDriver
 * Method:    ASIOInit
 * Signature: ()Lcom/synthbot/jasiohost/AsioDriverInfo;
 */
JNIEXPORT jobject JNICALL Java_com_synthbot_jasiohost_AsioDriver_ASIOInit
  (JNIEnv *, jobject);

/*
 * Class:     com_synthbot_jasiohost_AsioDriver
 * Method:    ASIOExit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_synthbot_jasiohost_AsioDriver_ASIOExit
  (JNIEnv *, jobject);

/*
 * Class:     com_synthbot_jasiohost_AsioDriver
 * Method:    ASIOControlPanel
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_synthbot_jasiohost_AsioDriver_ASIOControlPanel
  (JNIEnv *, jclass);

/*
 * Class:     com_synthbot_jasiohost_AsioDriver
 * Method:    ASIOGetChannels
 * Signature: (Z)I
 */
JNIEXPORT jint JNICALL Java_com_synthbot_jasiohost_AsioDriver_ASIOGetChannels
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_synthbot_jasiohost_AsioDriver
 * Method:    ASIOGetSampleRate
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_synthbot_jasiohost_AsioDriver_ASIOGetSampleRate
  (JNIEnv *, jclass);

/*
 * Class:     com_synthbot_jasiohost_AsioDriver
 * Method:    ASIOCanSampleRate
 * Signature: (D)Z
 */
JNIEXPORT jboolean JNICALL Java_com_synthbot_jasiohost_AsioDriver_ASIOCanSampleRate
  (JNIEnv *, jclass, jdouble);

/*
 * Class:     com_synthbot_jasiohost_AsioDriver
 * Method:    ASIOGetBufferSize
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_synthbot_jasiohost_AsioDriver_ASIOGetBufferSize
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_synthbot_jasiohost_AsioDriver
 * Method:    ASIOGetLatencies
 * Signature: (Z)I
 */
JNIEXPORT jint JNICALL Java_com_synthbot_jasiohost_AsioDriver_ASIOGetLatencies
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_synthbot_jasiohost_AsioDriver
 * Method:    ASIOGetChannelInfo
 * Signature: (IZ)Lcom/synthbot/jasiohost/AsioChannelInfo;
 */
JNIEXPORT jobject JNICALL Java_com_synthbot_jasiohost_AsioDriver_ASIOGetChannelInfo
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_synthbot_jasiohost_AsioDriver
 * Method:    ASIOCreateBuffers
 * Signature: ([Lcom/synthbot/jasiohost/AsioChannelInfo;I)V
 */
JNIEXPORT void JNICALL Java_com_synthbot_jasiohost_AsioDriver_ASIOCreateBuffers
  (JNIEnv *, jclass, jobjectArray, jint);

/*
 * Class:     com_synthbot_jasiohost_AsioDriver
 * Method:    ASIODisposeBuffers
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_synthbot_jasiohost_AsioDriver_ASIODisposeBuffers
  (JNIEnv *, jclass);

/*
 * Class:     com_synthbot_jasiohost_AsioDriver
 * Method:    ASIOStart
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_synthbot_jasiohost_AsioDriver_ASIOStart
  (JNIEnv *, jclass);

/*
 * Class:     com_synthbot_jasiohost_AsioDriver
 * Method:    ASIOStop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_synthbot_jasiohost_AsioDriver_ASIOStop
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
