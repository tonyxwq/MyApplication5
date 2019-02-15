//
// Created by ywq on 2019/2/15.
//
#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_rx_myapplication_MainActivity_helloJni(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "你好啊");
}