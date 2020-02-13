#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_weiwei_ndkstudy_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {

//    :: 是作用域符，是运算符中等级最高的
    /**
     *
     *
     * */
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_com_weiwei_ndkstudy_MainActivity_string2FromJNI(JNIEnv *env, jobject instance) {

    std::string hello2 = "hello weiwei";


    return env->NewStringUTF(hello2.c_str());
}