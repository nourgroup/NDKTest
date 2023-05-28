//
// Created by n.oummadi on 24/04/2023.
//

#include <jni.h>
#include <string.h>
#include <jni.h>

extern "C" JNIEXPORT jint JNICALL
Java_com_ngplus_ndktest_MainActivity_doSomething(JNIEnv *env, jobject thiz) {
    return  20;
}
