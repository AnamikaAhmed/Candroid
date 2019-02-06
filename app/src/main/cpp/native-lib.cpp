#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_anamika_candroid_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    //char string[] = "Hello";
    //std::string hello = "Hello from C++";
    return env->NewStringUTF("Hello from C");
}
