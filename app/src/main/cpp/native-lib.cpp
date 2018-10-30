#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_anik_appsecurity_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "http://paybangla.com/login.php?cell=";
    return env->NewStringUTF(hello.c_str());
}




// dot (.) replace by underscore(_)

extern "C" JNIEXPORT jstring

JNICALL
Java_com_anik_appsecurity_MainActivity_stringFromJNI2(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "http://affabletechnology/login.php?cell=";
    return env->NewStringUTF(hello.c_str());
}


