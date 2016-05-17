LOCAL_PATH := $(call my-dir)
  
include $(CLEAR_VARS)
  
LOCAL_MODULE    := TestJNI
LOCAL_SRC_FILES := string_pub_jni_test_TestJni.cpp
LOCAL_SRC_FILES += CAdd.cpp
  
include $(BUILD_SHARED_LIBRARY)
