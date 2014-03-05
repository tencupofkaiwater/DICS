PRONAME:= dics_service 
TARGET:= $(PRONAME)
PRE_DEFINED := 
BUILD_PATH := $(shell pwd)
INCLUDES := $(BUILD_PATH)/inc \
            ../brain/inc \
            ../limbs/inc \
            ../inc

LIBS_PATH := $(DUYE_LIB) \
            ../lib
             
LIBS := dposix brain limbs

include ../../app.mk

$(shell mkdir -p ../bin)
$(shell cp $(BUILD_PATH)/output/bin/* ../bin)

$(shell mkdir -p ../../bin)
$(shell cp $(BUILD_PATH)/output/bin/* ../../bin)
