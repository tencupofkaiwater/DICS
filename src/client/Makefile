PRONAME:= dics_client
TARGET:= $(PRONAME)
PRE_DEFINED := 
BUILD_PATH := $(shell pwd)
INCLUDES := $(BUILD_PATH)/inc
LIBS_PATH := $(DUYE_LIB)
LIBS := dposix

include ../app.mk

$(shell mkdir -p ../bin)
$(shell cp $(BUILD_PATH)/output/bin/* ../bin)
