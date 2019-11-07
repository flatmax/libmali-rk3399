# Makefile for gbm wrapper

CCFLAGS=-O2 -pipe -Wall -Werror -fPIC \
		`pkg-config --cflags libdrm`

SRCDIR=src
LIBDIR=lib
TARGET=$(LIBDIR)/libgbm.so.1.0.0

.PHONY: all clean

all : $(TARGET)

clean :
	$(RM) -f $(TARGET)

$(TARGET) : $(SRCDIR)/gbm-wrapper.c
	$(CC) $(CCFLAGS) -shared -Llib -lmali-midgard-t86x-r14p0-wayland -o $@ $^
