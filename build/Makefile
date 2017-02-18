# Build DirectFB for Pandora
# Copyright 2017 Benedikt Muessig <mail@bmuessig.eu>

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

ZLIB_DIR=zlib-1.2.11
ZLIB_BIN=$(PREFIX)/lib/libz.a
LIBPNG_DIR=libpng-1.6.28
LIBPNG_BIN=$(PREFIX)/lib/libpng16.a
FREETYPE_DIR=freetype-2.7.1
FREETYPE_BIN=$(PREFIX)/lib/libfreetype.a
FREETYPE_OPT=--enable-static=yes
JPEG_DIR=jpeg-9b
JPEG_BIN=$(PREFIX)/lib/libjpeg.a
JPEG_OPT=--enable-static=yes
DFB_DIR=DirectFB-1.7.6
DFB_BIN=$(PREFIX)/lib/libdirect.a
DFB_OPT=--enable-static=yes --enable-osx=no --enable-x11=no --enable-x11vdpau=no --enable-multicore=no --enable-fbdev=yes --enable-zlib=yes --enable-png=yes --enable-jpeg=yes --enable-freetype=yes --enable-linotype=no --enable-video4linux=no --with-gfxdrivers=none --with-inputdrivers=keyboard,linuxinput,ps2mouse
SDL_DIR=SDL-1.2.15
SDL_BIN=$(PREFIX)/lib/libSDL.a
SDL_OPT=--enable-static --enable-shared --enable-video-fbcon --disable-audio --disable-joystick --disable-cdrom --disable-loadso --disable-cpuinfo --disable-assembly --disable-oss --disable-alsa --disable-alsatest --disable-alsa-shared --disable-esd --disable-esdtest --disable-esd-shared --disable-pulseaudio --disable-pulseaudio-shared --disable-arts --disable-arts-shared --disable-nas --disable-nas-shared --disable-diskaudio --disable-dummyaudio --disable-mintaudio --disable-nasm --disable-altivec --disable-video-x11 --disable-x11-shared --disable-dga --disable-video-dga --disable-video-x11-dgamouse --disable-video-x11-vm --disable-video-x11-xv --disable-video-x11-xinerama --disable-video-x11-xme --disable-video-x11-xrandr --disable-video-photon --disable-video-cocoa --disable-video-directfb --disable-video-ps2gs --disable-video-ps3 --disable-video-svga --disable-video-vgl --disable-video-wscons --disable-video-xbios --disable-video-gem --disable-video-dummy --disable-video-opengl --disable-osmesa-shared --disable-sdl-dlopen --without-x
SDLCFG_BIN=$(PREFIX)/bin/sdl-config
SDLTTF_DIR=SDL_ttf-2.0.11
SDLTTF_BIN=$(PREFIX)/lib/libSDL_ttf.a
SDLTTF_OPT=--enable-static --enable-shared --without-x --with-freetype-prefix=$(PREFIX)/lib --with-sdl-prefix=$(PREFIX)/lib
SDLIMG_DIR=
SDLIMG_BIN=
SDLIMG_OPT=

.PHONY: all clean clean-target clean-zlib clean-libpng clean-freetype clean-dfb clean-sdl clean-sdlttf

all: $(ZLIB_BIN) $(LIBPNG_BIN) $(FREETYPE_BIN) $(SDL_BIN) $(SDLTTF_BIN)

clean: clean-target clean-zlib clean-libpng clean-freetype clean-dfb clean-sdl clean-sdlttf

clean-target:
	rm -rf $(PREFIX)
	mkdir $(PREFIX)

clean-zlib:
	cd $(ZLIB_DIR) ;\
	make clean ;\
	rm -f Makefile

clean-libpng:
	cd $(LIBPNG_DIR) ;\
	make clean ;\
	rm -f Makefile

clean-freetype:
	cd $(FREETYPE_DIR) ;\
	make clean ;\
	rm -f config.mk

clean-dfb:
	cd $(DFB_DIR) ;\
	make clean ;\
	rm -f Makefile

clean-sdl:
	cd $(SDL_DIR) ;\
	make clean ;\
	rm -f Makefile

clean-sdlttf:
	cd $(SDLTTF_DIR) ;\
	make clean ;\
	rm -f Makefile

$(ZLIB_DIR)/Makefile:
	cd $(ZLIB_DIR) ;\
	./configure --prefix=$(PREFIX) --static

$(ZLIB_BIN): $(ZLIB_DIR)/Makefile
	cd $(ZLIB_DIR) ;\
	make ;\
	make install

$(LIBPNG_DIR)/Makefile: $(ZLIB_BIN)
	cd $(LIBPNG_DIR) ;\
	./configure --host=$(TARGETMACH) --build=$(BUILDMACH) --prefix=$(PREFIX) CC=$(CC) CFLAGS="-I$(PREFIX)/include" CPPFLAGS="-I$(PREFIX)/include" LDFLAGS="-L$(PREFIX)/lib"

$(LIBPNG_BIN): $(LIBPNG_DIR)/Makefile
	cd $(LIBPNG_DIR) ;\
	make ;\
	make install

$(FREETYPE_DIR)/config.mk:
	cd $(FREETYPE_DIR) ;\
	./configure --host=$(TARGETMACH) --build=$(BUILDMACH) --prefix=$(PREFIX) $(FREETYPE_OPT) CC=$(CC) CFLAGS="-I$(PREFIX)/include" CPPFLAGS="-I$(PREFIX)/include" LDFLAGS="-L$(PREFIX)/lib"

$(FREETYPE_BIN): $(FREETYPE_DIR)/config.mk
	cd $(FREETYPE_DIR) ;\
	make ;\
	make install

$(JPEG_DIR)/Makefile:
	cd $(JPEG_DIR) ;\
	./configure --host=$(TARGETMACH) --build=$(BUILDMACH) --prefix=$(PREFIX) $(JPEG_OPT) CC=$(CC) CFLAGS="-I$(PREFIX)/include" CPPFLAGS="-I$(PREFIX)/include" LDFLAGS="-L$(PREFIX)/lib"

$(JPEG_BIN): $(JPEG_DIR)/Makefile
	cd $(JPEG_DIR) ;\
	make ;\
	make install

$(DFB_DIR)/Makefile: $(ZLIB_BIN) $(LIBPNG_BIN) $(FREETYPE_BIN) $(JPEG_BIN)
	cd $(DFB_DIR) ;\
	./configure --host=$(TARGETMACH) --build=$(BUILDMACH) --prefix=$(PREFIX) $(DFB_OPT) CC=$(CC) CFLAGS="-I$(PREFIX)/include" CPPFLAGS="-I$(PREFIX)/include" LDFLAGS="-L$(PREFIX)/lib"

$(DFB_BIN): $(DFB_DIR)/Makefile
	cd $(DFB_DIR) ;\
	make ;\
	make install

$(SDL_DIR)/Makefile:
	cd $(SDL_DIR) ;\
	./configure --host=$(TARGETMACH) --build=$(BUILDMACH) --prefix=$(PREFIX) $(SDL_OPT) CC=$(CC) CFLAGS="-I$(PREFIX)/include" CPPFLAGS="-I$(PREFIX)/include" LDFLAGS="-L$(PREFIX)/lib"

$(SDL_BIN): $(SDL_DIR)/Makefile
	cd $(SDL_DIR) ;\
	make ;\
	make install ;\

$(SDLTTF_DIR)/Makefile: $(SDL_BIN) $(SDLCFG_BIN) $(FREETYPE_BIN)
	cd $(SDLTTF_DIR) ;\
	./configure --host=$(TARGETMACH) --build=$(BUILDMACH) --prefix=$(PREFIX) $(SDLTTF_OPT) CC=$(CC) CFLAGS="`$(SDLCFG_BIN) --cflags`  -I$(PREFIX)/include -I$(PREFIX)/include/freetype2 -I$(PREFIX)/include/SDL" CPPFLAGS="-I$(PREFIX)/include -I$(PREFIX)/include/freetype2 -I$(PREFIX)/include/SDL" LDFLAGS="-L$(PREFIX)/lib `pkg-config --libs sdl` `pkg-config --libs freetype2`"

$(SDLTTF_BIN): $(SDLTTF_DIR)/Makefile
	cd $(SDLTTF_DIR) ;\
	make ;\
	make install;
