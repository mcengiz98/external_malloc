# CROSS_COMPILE ?=	arm-none-eabi-

# export CROSS_COMPILE

# CC = $(CROSS_COMPILE)gcc
# LD = $(CROSS_COMPILE)ld
# OBJCOPY = $(CROSS_COMPILE)objcopy

# OBJDIR = obj
# OSDIR = mdepx

CFLAGS = -Wall -Wextra -std=c11 -pedantic -ggdb

ext_test: test.c
	$(CC) $(CFLAGS) -o ext_test test.c