#include <stdlib.h>
#include <stdio.h>
#include "CAdd.h"
#include "jni.h"

CAdd *pCAdd = NULL;
extern "C" {
JNIEXPORT jboolean JNICALL Java_string_pub_jni_test_TestJni_init
  (JNIEnv *env, jobject obj){
if(pCAdd==NULL){
pCAdd = new CAdd ;
}
return pCAdd!=NULL;
}

JNIEXPORT jint JNICALL Java_string_pub_jni_test_TestJni_add
  (JNIEnv *env, jobject obj, jint x, jint y){
jint res = -1;
if(pCAdd==NULL){
	pCAdd = new CAdd ;
res = pCAdd->add(x,y);
}else{
	res = pCAdd->add(x,y);
}
return res;
}

JNIEXPORT void JNICALL Java_string_pub_jni_test_TestJni_destory
  (JNIEnv * env, jobject obj){
if(pCAdd!=NULL){
delete pCAdd;
pCAdd=NULL;
}
}
}
