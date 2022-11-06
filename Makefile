################################################################################
 # Copyright (C) 2020 Maxim Integrated Products, Inc., All Rights Reserved.
 #
 # Permission is hereby granted, free of charge, to any person obtaining a
 # copy of this software and associated documentation files (the "Software"),
 # to deal in the Software without restriction, including without limitation
 # the rights to use, copy, modify, merge, publish, distribute, sublicense,
 # and/or sell copies of the Software, and to permit persons to whom the
 # Software is furnished to do so, subject to the following conditions:
 #
 # The above copyright notice and this permission notice shall be included
 # in all copies or substantial portions of the Software.
 #
 # THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 # OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 # MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 # IN NO EVENT SHALL MAXIM INTEGRATED BE LIABLE FOR ANY CLAIM, DAMAGES
 # OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 # ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 # OTHER DEALINGS IN THE SOFTWARE.
 #
 # Except as contained in this notice, the name of Maxim Integrated
 # Products, Inc. shall not be used except as stated in the Maxim Integrated
 # Products, Inc. Branding Policy.
 #
 # The mere transfer of this software does not imply any licenses
 # of trade secrets, proprietary technology, copyrights, patents,
 # trademarks, maskwork rights, or any other form of intellectual
 # property whatsoever. Maxim Integrated Products, Inc. retains all
 # ownership rights.
 #
 #
 ###############################################################################

# Specify SDK path 
# Make MAXIM_PATH as an environmental variable
# MAXIM_PATH=/Users/abubakar/Documents/ai8x-synthesis/sdk/
# ARM_PATH = /src/ARM/bin/

APPLICATION = KWS-Vanilla
RUNTIME = chameleon

# This is the name of the build output file
ifeq "$(PROJECT)" ""
PROJECT=max78000
endif

# Specify the target processor
ifeq "$(TARGET)" ""
TARGET=MAX78000
endif

# Create Target name variables
TARGET_UC:=$(shell echo $(TARGET) | tr a-z A-Z)
TARGET_LC:=$(shell echo $(TARGET) | tr A-Z a-z)

# Select 'GCC' or 'IAR' compiler
COMPILER=GCC

# Specify the board used
ifeq "$(BOARD)" ""
# BOARD=EvKit_V1
# BOARD=FTHR_RevA
BOARD=Supersensor
endif

BOARD_DIR=./boards/$(BOARD)

# This is the path to the CMSIS root directory
ifeq "$(MAXIM_PATH)" ""
LIBS_DIR=../../../Libraries
else
LIBS_DIR=/$(subst \,/,$(subst :,,$(MAXIM_PATH))/Libraries)
endif

CMSIS_ROOT=$(LIBS_DIR)/CMSIS

#Use this for other library make files so they are all based off the same as root as the project
export CMSIS_ROOT

# Source files for this test (add path to VPATH below)
SRCS = 
SRCS += $(shell find ./src/$(APPLICATION) -name "*.c")
SRCS += $(shell find ./$(RUNTIME) -name "*.c")
SRCS +=


# Where to find source files for this test
VPATH =
VPATH += $(CMSIS_ROOT)/Device/Maxim/$(TARGET_UC)/Source
VPATH += $(dir $(wildcard ./$(RUNTIME)/*/))
VPATH += $(dir $(wildcard ./src/$(APPLICATION)/*/))
VPATH += 

# Where to find header files for this test
IPATH =
IPATH += ./config
IPATH += $(CMSIS_ROOT)/Device/Maxim/$(TARGET_UC)/Source
IPATH += ./include
IPATH += $(dir $(wildcard ./$(RUNTIME)/*/))
IPATH += $(dir $(wildcard ./include/$(APPLICATION)/*/))
IPATH += $(dir $(wildcard ./src/*/))
IPATH += 

# Enable assertion checking for development
PROJ_CFLAGS+=-DMXC_ASSERT_ENABLE 

# Add debug flags for C++ source files (SDK adds debug flags only for C source files)
ifneq (${MAKECMDGOALS},release)
ifneq (${DEBUG},0)
PROJ_CFLAGS+=-g3 -ggdb -DDEBUG
endif
endif

# Control program based on board
PROJ_CFLAGS+=-D$(BOARD)

# Enable traditional GNU semantics for inline functions
PROJ_CFLAGS+=-fgnu89-inline

# Point this variable to a startup file to override the default file
STARTUPFILE=startup.S

# Set MXC_OPTIMIZE to override the default optimization level 
MXC_OPTIMIZE_CFLAGS=-O0

# Point this variable to a linker file to override the default file
LINKER_PATH=./$(BOARD_DIR)/linker-script
LINKER=$(TARGET_LC).ld
LINKERFILE=$(LINKER_PATH)/$(LINKER)

################################################################################
# Include external library makefiles here

# Include the BSP
include $(BOARD_DIR)/board.mk

# Include the peripheral driver
PERIPH_DRIVER_DIR=$(LIBS_DIR)/PeriphDrivers
include $(PERIPH_DRIVER_DIR)/periphdriver.mk
export PERIPH_DRIVER_DIR

################################################################################
# Include the rules for building for this target. All other makefiles should be
# included before this one.
include $(CMSIS_ROOT)/Device/Maxim/$(TARGET_UC)/Source/$(COMPILER)/$(TARGET_LC).mk

all:
# 	arm-none-eabi-objcopy $(BUILD_DIR)/$(PROJECT).elf -R .sig -O binary $(BUILD_DIR)/$(PROJECT).bin
# 	$(CA_SIGN_BUILD) $(BUILD_DIR)/$(PROJECT).bin $(TEST_KEY)
# 	arm-none-eabi-objcopy  $(BUILD_DIR)/$(PROJECT).elf --update-section .sig=$(BUILD_DIR)/$(PROJECT).bin.sig

libclean: 
	$(MAKE)  -f ${PERIPH_DRIVER_DIR}/periphdriver.mk clean.periph
	
clean: 
#	rm -r ${SCP_PACKETS}/

# The rule to clean out all the build products.
distclean: clean libclean

sla: all
#	$(BUILD_SESSION) -c $(TARGET_UC) key_file=$(TEST_KEY) ${SCP_PACKETS} $(BUILD_DIR)/$(PROJECT).sbin
