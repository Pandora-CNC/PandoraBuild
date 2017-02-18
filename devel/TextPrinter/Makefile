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

all: directfb.dy directfb.st

directfb.dy: directfb.c
	$(CC) `pkg-config --cflags directfb` -I$(INC_PATH) -o directfb.dy directfb.c `pkg-config --libs directfb`

directfb.st:
	$(CC) --static -static-libgcc `pkg-config --cflags directfb` -I$(INC_PATH) -o directfb.st directfb.c `pkg-config --libs directfb` $(INSTALLDIR)/lib/gcc/armarmv5te-unknown-linux-gnueabi/5.2.0/libgcc.a $(PREFIX)/lib/libdirect.a $(PREFIX)/lib/libfusion.a
