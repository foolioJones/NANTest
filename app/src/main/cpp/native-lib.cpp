#include <jni.h>
#include <string>
#include <android/log.h>
#include <math.h>


extern "C" JNIEXPORT jstring JNICALL
Java_com_example_nantest_MainActivity_testPow(JNIEnv *env, jobject /* this */) {

    double val = pow(2.0, 0.5);

    double valNan = pow(2.0, 0.05);

    std::string val_s = std::to_string(val);

    std::string valNan_s = std::to_string(valNan);

    std::string s = "pow(2.0, 0.5) = " + val_s + "\npow(2.0, 0.05) = " + valNan_s;

    return env->NewStringUTF(s.c_str());
}