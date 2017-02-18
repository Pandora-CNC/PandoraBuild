export INSTALLDIR=/home/bmuessig/x-tools/armarmv5te-unknown-linux-gnueabi
export TARGETMACH=arm-none-linux-gnueabi
export BUILDMACH=x86_64-linux-gnu
export CROSS=armarmv5te-unknown-linux-gnueabi
export PREFIX=/home/bmuessig/Pandora/target
export CC=$(CROSS)-gcc
export CXX=$(CROSS)-g++
export LD=$(CROSS)-ld
export AS=$(CROSS)-as
export AR=$(CROSS)-ar
export RANLIB=$(CROSS)-ranlib

export LD_LIBRARY_PATH=$(PREFIX)/lib
export PKG_CONFIG_PATH=$(LD_LIBRARY_PATH)/pkgconfig
export INC_PATH=$(PREFIX)/include

all: hello.elf

hello.elf: hello.c
	$(CC) --static `pkg-config --cflags sdl` -I$(INC_PATH) -o hello.elf hello.c `pkg-config --libs sdl`
