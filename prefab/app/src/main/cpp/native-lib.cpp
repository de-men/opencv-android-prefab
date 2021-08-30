#include <jni.h>
#include <string>
#include <opencv2/core.hpp>

extern "C" JNIEXPORT jstring JNICALL
Java_org_demen_jni_opencv_MainActivity_getBuildInformation(
        JNIEnv* env,
        jobject /* this */) {
    return env->NewStringUTF(cv::getBuildInformation().c_str());
}