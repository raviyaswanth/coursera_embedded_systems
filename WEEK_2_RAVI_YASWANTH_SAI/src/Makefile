#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
PLATFORM = 

# Architectures Specific Flags
LINKER_FILE = ../msp432p401r.lds
CPU = cortex-m4
ARCH = armv7e-m
SPECS = nosys.specs

# Compiler Flags and Defines
TARGET=c1m2
CC = 
LD = 
LDFLAGS = 
CFLAGS = 

ifeq ($(PLATFORM),HOST)
	CC = gcc
	CFLAGS = -Wall -g -std=c99 -O0 -DHOST
else
	CC = arm-none-eabi-gcc -mcpu=$(CPU) -march=$(ARCH) --specs=$(SPECS)
	CFLAGS = -Wall -g -std=c99 -O0 -DMSP432
	INCLUDES += -I../include/CMSIS -I../include/msp432
	SOURCES += system_msp432p401r.c interrupts_msp432p401r_gcc.c startup_msp432p401r_gcc.c
	LDFLAGS = -Wl,-Map=$(TARGET).map -T $(LINKER_FILE)
endif

OBJS = $(SOURCES:.c=.o)

%.i:%.c
	$(CC) $(INCLUDES) $(CFLAGS) -E $< -o $@

%.asm:%.c
	$(CC) $(INCLUDES) $(CFLAGS) -S $< -o $@

%.o:%.c
	$(CC) $(INCLUDES) $(CFLAGS) -c $< -o $@
	
.PHONY:compile-all
compile-all: $(OBJS)

.PHONY:build
build: $(TARGET).out

$(TARGET).out: $(OBJS)
	
	$(CC) $^ $(CFLAGS) $(LDFLAGS) -o $@

.PHONY:clean
clean:
	rm -f *.o *.out *.map *.i *.asm
