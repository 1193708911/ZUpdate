#include <jni.h>
#include "bsdiff.c"
#include "bspatch.c"

#ifndef _Included_supersports_com_zupdate_MainActivity
#define _Included_supersports_com_zupdate_MainActivity
#ifdef __cplusplus
extern "C" {
#endif



JNIEXPORT jint JNICALL Java_supersports_com_zupdate_MainActivity_stringFromJNI
        (JNIEnv *env, jclass cls,
         jstring old, jstring newpath,
         jstring patch) {
    int argc = 4;
    char *argv[argc];
    argv[0] = "bsdiff";
    argv[1] = (char *) ((*env)->GetStringUTFChars(env, old, 0));
    argv[2] = (char *) ((*env)->GetStringUTFChars(env, newpath, 0));
    argv[3] = (char *) ((*env)->GetStringUTFChars(env, patch, 0));
    int r=   bsdiff(argc, argv);
    (*env)->ReleaseStringUTFChars(env, old, argv[1]);
    (*env)->ReleaseStringUTFChars(env, newpath, argv[2]);
    (*env)->ReleaseStringUTFChars(env, patch, argv[3]);
    return r;


}


JNIEXPORT jint JNICALL Java_supersports_com_zupdate_MainActivity_patchApk
        (JNIEnv *env, jclass cls,
         jstring old, jstring newpath,
         jstring patch) {
    int argc = 4;
    char *argv[argc];
    argv[0] = "bsdiff";
    argv[1] = (char *) ((*env)->GetStringUTFChars(env, old, 0));
    argv[2] = (char *) ((*env)->GetStringUTFChars(env, newpath, 0));
    argv[3] = (char *) ((*env)->GetStringUTFChars(env, patch, 0));
    int r = patchMethod( argc, argv);
    (*env)->ReleaseStringUTFChars(env, old, argv[1]);
    (*env)->ReleaseStringUTFChars(env, newpath, argv[2]);
    (*env)->ReleaseStringUTFChars(env, patch, argv[3]);
    return r;


}



#ifdef __cplusplus
}
#endif
#endif




