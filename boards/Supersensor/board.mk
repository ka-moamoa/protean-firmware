ifeq "$(BOARD_DIR)" ""
$(error BOARD_DIR must be set)
endif

MISC_DRIVERS_DIR = $(LIBS_DIR)/MiscDrivers

# Source files for this test (add path to VPATH below)
SRCS += stdio.c
SRCS += led.c
SRCS += pb.c
SRCS += $(shell find $(BOARD_DIR) -name "*.c")

# Where to find BSP header files
IPATH += $(dir $(wildcard $(BOARD_DIR)/Include/*/))
IPATH += $(dir $(wildcard $(BOARD_DIR)/Drivers/*/))
IPATH += $(dir $(wildcard $(MISC_DRIVERS_DIR)/*/))

# Where to find BSP source files
VPATH += $(dir $(wildcard $(BOARD_DIR)/Source/*/))
VPATH += $(dir $(wildcard $(BOARD_DIR)/Drivers/*/))
VPATH += $(dir $(wildcard $(MISC_DRIVERS_DIR)/*/))