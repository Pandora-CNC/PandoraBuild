# Makefile.in generated by automake 1.14.1 from Makefile.am.
# include/++dfb/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2013 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.




am__is_gnu_make = test -n '$(MAKEFILE_LIST)' && test -n '$(MAKELEVEL)'
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/DirectFB
pkgincludedir = $(includedir)/DirectFB
pkglibdir = $(libdir)/DirectFB
pkglibexecdir = $(libexecdir)/DirectFB
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-pc-linux-gnu
host_triplet = arm-none-linux-gnueabi
target_triplet = arm-none-linux-gnueabi
subdir = include/++dfb
DIST_COMMON = $(srcdir)/Makefile.in $(srcdir)/Makefile.am \
	$(dfbppinclude_HEADERS)
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/as-ac-expand.m4 \
	$(top_srcdir)/m4/libtool.m4 $(top_srcdir)/m4/ltoptions.m4 \
	$(top_srcdir)/m4/ltsugar.m4 $(top_srcdir)/m4/ltversion.m4 \
	$(top_srcdir)/m4/lt~obsolete.m4 $(top_srcdir)/configure.in
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
SOURCES =
DIST_SOURCES =
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
am__vpath_adj_setup = srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`;
am__vpath_adj = case $$p in \
    $(srcdir)/*) f=`echo "$$p" | sed "s|^$$srcdirstrip/||"`;; \
    *) f=$$p;; \
  esac;
am__strip_dir = f=`echo $$p | sed -e 's|^.*/||'`;
am__install_max = 40
am__nobase_strip_setup = \
  srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*|]/\\\\&/g'`
am__nobase_strip = \
  for p in $$list; do echo "$$p"; done | sed -e "s|$$srcdirstrip/||"
am__nobase_list = $(am__nobase_strip_setup); \
  for p in $$list; do echo "$$p $$p"; done | \
  sed "s| $$srcdirstrip/| |;"' / .*\//!s/ .*/ ./; s,\( .*\)/[^/]*$$,\1,' | \
  $(AWK) 'BEGIN { files["."] = "" } { files[$$2] = files[$$2] " " $$1; \
    if (++n[$$2] == $(am__install_max)) \
      { print $$2, files[$$2]; n[$$2] = 0; files[$$2] = "" } } \
    END { for (dir in files) print dir, files[dir] }'
am__base_list = \
  sed '$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;$$!N;s/\n/ /g' | \
  sed '$$!N;$$!N;$$!N;$$!N;s/\n/ /g'
am__uninstall_files_from_dir = { \
  test -z "$$files" \
    || { test ! -d "$$dir" && test ! -f "$$dir" && test ! -r "$$dir"; } \
    || { echo " ( cd '$$dir' && rm -f" $$files ")"; \
         $(am__cd) "$$dir" && rm -f $$files; }; \
  }
am__installdirs = "$(DESTDIR)$(dfbppincludedir)"
HEADERS = $(dfbppinclude_HEADERS)
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
# Read a list of newline-separated strings from the standard input,
# and print each of them once, without duplicates.  Input order is
# *not* preserved.
am__uniquify_input = $(AWK) '\
  BEGIN { nonempty = 0; } \
  { items[$$0] = 1; nonempty = 1; } \
  END { if (nonempty) { for (i in items) print i; }; } \
'
# Make sure the list of sources is unique.  This is necessary because,
# e.g., the same source file might be shared among _SOURCES variables
# for different programs/libraries.
am__define_uniq_tagged_files = \
  list='$(am__tagged_files)'; \
  unique=`for i in $$list; do \
    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
  done | $(am__uniquify_input)`
ETAGS = etags
CTAGS = ctags
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /home/bmuessig/Pandora/build/DirectFB-1.7.6/missing aclocal-1.14 
ALSA_CFLAGS = 
ALSA_LIBS = 
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 0
AR = armarmv5te-unknown-linux-gnueabi-ar
AS = armarmv5te-unknown-linux-gnueabi-as
ASFLAGS = 
AUTOCONF = ${SHELL} /home/bmuessig/Pandora/build/DirectFB-1.7.6/missing autoconf
AUTOHEADER = ${SHELL} /home/bmuessig/Pandora/build/DirectFB-1.7.6/missing autoheader
AUTOMAKE = ${SHELL} /home/bmuessig/Pandora/build/DirectFB-1.7.6/missing automake-1.14
AVIFILE_CFLAGS = 
AVIFILE_CONFIG = 
AVIFILE_LIBS = 
AWK = gawk
CC = armarmv5te-unknown-linux-gnueabi-gcc
CCAS = armarmv5te-unknown-linux-gnueabi-gcc
CCASDEPMODE = depmode=gcc3
CCASFLAGS = -g -O2
CCDEPMODE = depmode=gcc3
CDDB_CFLAGS = 
CDDB_LIBS = 
CFLAGS = -Wall -Wstrict-prototypes -Wmissing-prototypes -Wno-strict-aliasing -Werror-implicit-function-declaration -O3 -g2 -ffast-math -pipe  -D_GNU_SOURCE  -std=gnu99 -Werror-implicit-function-declaration
CPP = armarmv5te-unknown-linux-gnueabi-gcc -E
CPPFLAGS = -D_REENTRANT -I/home/bmuessig/Pandora/target/include
CXX = armarmv5te-unknown-linux-gnueabi-g++
CXXCPP = armarmv5te-unknown-linux-gnueabi-g++ -E
CXXDEPMODE = depmode=gcc3
CXXFLAGS = -Wall -Wno-strict-aliasing -std=c++0x -g -O2 -O3 -g2 -ffast-math -pipe  -D_GNU_SOURCE 
CXXSTD = c++0x
CYGPATH_W = echo
DATADIR = ${datarootdir}/directfb-1.7.6
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DEP_ONE = 
DEP_VOODOO = 
DFB_CFLAGS_OMIT_FRAME_POINTER = -fomit-frame-pointer
DFB_INTERNAL_CFLAGS = -D_GNU_SOURCE 
DFB_LDFLAGS = -L/home/bmuessig/Pandora/target/lib -lz
DFB_SMOOTH_SCALING = 
DIRECTFB_BINARY_AGE = 0
DIRECTFB_BUILD_ONE = 0
DIRECTFB_BUILD_PURE_VOODOO = 0
DIRECTFB_BUILD_VOODOO = 0
DIRECTFB_CSOURCE = 
DIRECTFB_INTERFACE_AGE = 0
DIRECTFB_MAJOR_VERSION = 1
DIRECTFB_MICRO_VERSION = 6
DIRECTFB_MINOR_VERSION = 7
DIRECTFB_VERSION = 1.7.6
DIRECTFB_VERSION_VENDOR = 
DIRECT_BUILD_DEBUG = 0
DIRECT_BUILD_DEBUGS = 1
DIRECT_BUILD_DYNLOAD = 1
DIRECT_BUILD_GCC_ATOMICS = 0
DIRECT_BUILD_GETTID = 1
DIRECT_BUILD_MULTICORE = 0
DIRECT_BUILD_NETWORK = 1
DIRECT_BUILD_OSTYPE = DIRECT_OS_LINUX_GNU_LIBC
DIRECT_BUILD_STDBOOL = 1
DIRECT_BUILD_TEXT = 1
DIRECT_BUILD_TRACE = 0
DLLTOOL = false
DRMKMS_CFLAGS = 
DRMKMS_LIBS = 
DSYMUTIL = 
DUMPBIN = :
DYNLIB = -ldl
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGL_CFLAGS = 
EGL_LIBS = 
EGREP = /bin/grep -E
EXEEXT = 
FFMPEG_CFLAGS = 
FFMPEG_LIBS = 
FGREP = /bin/grep -F
FLASH_LIBS = 
FLUXCOMP = /usr/local/bin/fluxcomp
FLUXED_ARGS_BYTES = 1024
FREETYPE_CFLAGS = 
FREETYPE_LIBS = 
FREETYPE_PROVIDER = 
FS_MAX_CHANNELS = 6
FUSION_BUILD_KERNEL = 1
FUSION_BUILD_MULTI = 0
FUSION_MESSAGE_SIZE = 16384
GENERIC_INCLUDEDIR = ${prefix}/include
GIF_PROVIDER = 
GLES2_CFLAGS = 
GLES2_LIBS = 
GL_LIBS = 
GP2D_CFLAGS = 
GP2D_LIBS = 
GREP = /bin/grep
GSTREAMER_INCL = 
GSTREAMER_LIBS = 
HAVE_LINUX = 
IMLIB2_CFLAGS = 
IMLIB2_CONFIG = 
IMLIB2_LIBS = 
INCLUDEDIR = ${prefix}/include/directfb
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
INTERNALINCLUDEDIR = ${prefix}/include/directfb-internal
JASPER_LIBS = 
JPEG_PROVIDER = 
LD = armarmv5te-unknown-linux-gnueabi-ld
LDFLAGS = -L/home/bmuessig/Pandora/target/lib
LIBJPEG = -ljpeg
LIBM = -lm
LIBMNG = 
LIBMPEG3_LIBS = 
LIBOBJS = 
LIBPNG_CFLAGS = 
LIBPNG_LIBS = 
LIBS = -ldl -lrt -lpthread 
LIBTIFF_CFLAGS = 
LIBTIFF_LIBS = 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LIBWEBP_CFLAGS = 
LIBWEBP_LIBS = 
LINOTYPE_CFLAGS = 
LINOTYPE_LIBS = 
LIPO = 
LN_S = ln -s
LTLIBOBJS = 
LT_AGE = 0
LT_BINARY = 6
LT_CURRENT = 6
LT_RELEASE = 1.7
LT_REVISION = 0
MAD_LIBS = 
MAINT = #
MAKEINFO = ${SHELL} /home/bmuessig/Pandora/build/DirectFB-1.7.6/missing makeinfo
MAN2HTML = no
MANIFEST_TOOL = :
MESA_CFLAGS = 
MESA_LIBS = 
MKDIR_P = /bin/mkdir -p
MNG_PROVIDER = 
MODULEDIR = ${exec_prefix}/lib/directfb-1.7-6
MODULEDIRNAME = directfb-1.7-6
NM = nm
NMEDIT = 
OBJDUMP = objdump
OBJEXT = o
OPENQUICKTIME_LIBS = 
OSX_LIBS = 
OTOOL = 
OTOOL64 = 
PACKAGE = DirectFB
PACKAGE_BUGREPORT = 
PACKAGE_NAME = 
PACKAGE_STRING = 
PACKAGE_TARNAME = 
PACKAGE_URL = 
PACKAGE_VERSION = 
PATH_SEPARATOR = :
PERL = /usr/bin/perl
PKG_CONFIG = /usr/bin/pkg-config
PKG_CONFIG_LIBDIR = 
PKG_CONFIG_PATH = 
PNG_PROVIDER = 
PVR2D_CFLAGS = 
PVR2D_LIBS = 
RANLIB = armarmv5te-unknown-linux-gnueabi-ranlib
RTLIB = -lrt
RUNTIME_SYSROOT = 
SDL_CFLAGS = 
SDL_LIBS = 
SED = /bin/sed
SET_MAKE = 
SH772X_DEP_CFLAGS = 
SH772X_DEP_LIBS = 
SH772X_SHJPEG_DEP_CFLAGS = 
SH772X_SHJPEG_DEP_LIBS = 
SHELL = /bin/bash
SOPATH = ${exec_prefix}/lib/libdirectfb-1.7.so.6
STRIP = strip
SVG_CFLAGS = 
SVG_LIBS = 
SWFDEC_CFLAGS = 
SWFDEC_LIBS = 
SYSCONFDIR = /home/bmuessig/Pandora/target/etc
THREADFLAGS = -D_REENTRANT
THREADLIB = -lpthread
TIMIDITY_CFLAGS = 
TIMIDITY_LIBS = 
TSLIB_CFLAGS = 
TSLIB_LIBS = 
VERSION = 1.7.6
VNC_CFLAGS = 
VNC_CONFIG = no
VNC_LIBS = 
VOODOO_BUILD_NO_SETSOCKOPT = 0
VORBISFILE_CFLAGS = 
VORBISFILE_LIBS = 
X11VDPAU_CFLAGS = 
X11VDPAU_LIBS = 
X11_CFLAGS = 
X11_LIBS = 
XINE_CFLAGS = 
XINE_CONFIG = 
XINE_LIBS = 
XINE_PLUGINDIR = 
XINE_VDPAU_CFLAGS = 
XINE_VDPAU_LIBS = 
XINE_VDPAU_PLUGINDIR = 
ZLIB_LIBS = -lz
abs_builddir = /home/bmuessig/Pandora/build/DirectFB-1.7.6/include/++dfb
abs_srcdir = /home/bmuessig/Pandora/build/DirectFB-1.7.6/include/++dfb
abs_top_builddir = /home/bmuessig/Pandora/build/DirectFB-1.7.6
abs_top_srcdir = /home/bmuessig/Pandora/build/DirectFB-1.7.6
ac_ct_AR = 
ac_ct_CC = 
ac_ct_CXX = 
ac_ct_DUMPBIN = link -dump
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build = x86_64-pc-linux-gnu
build_alias = x86_64-linux-gnu
build_cpu = x86_64
build_os = linux-gnu
build_vendor = pc
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE}
dvidir = ${docdir}
exec_prefix = ${prefix}
host = arm-none-linux-gnueabi
host_alias = arm-none-linux-gnueabi
host_cpu = arm
host_os = linux-gnueabi
host_vendor = none
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/bmuessig/Pandora/build/DirectFB-1.7.6/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /home/bmuessig/Pandora/target
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target = arm-none-linux-gnueabi
target_alias = 
target_cpu = arm
target_os = linux-gnueabi
target_vendor = none
top_build_prefix = ../../
top_builddir = ../..
top_srcdir = ../..
INCLUDES = -I$(top_srcdir)/include/++dfb
dfbppincludedir = $(includedir)/++dfb
dfbppinclude_HEADERS = \
	++dfb.h				\
	++dfb_mangle.h			\
	++dfb_unmangle.h		\
	idirectfb.h			\
	idirectfbdatabuffer.h		\
	idirectfbdisplaylayer.h		\
	idirectfbeventbuffer.h		\
	idirectfbfont.h			\
	idirectfbimageprovider.h	\
	idirectfbinputdevice.h		\
	idirectfbpalette.h		\
	idirectfbscreen.h		\
	idirectfbsurface.h		\
	idirectfbvideoprovider.h	\
	idirectfbwindow.h

all: all-am

.SUFFIXES:
$(srcdir)/Makefile.in: # $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu include/++dfb/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --gnu include/++dfb/Makefile
.PRECIOUS: Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure: # $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4): # $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs
install-dfbppincludeHEADERS: $(dfbppinclude_HEADERS)
	@$(NORMAL_INSTALL)
	@list='$(dfbppinclude_HEADERS)'; test -n "$(dfbppincludedir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(dfbppincludedir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(dfbppincludedir)" || exit 1; \
	fi; \
	for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  echo "$$d$$p"; \
	done | $(am__base_list) | \
	while read files; do \
	  echo " $(INSTALL_HEADER) $$files '$(DESTDIR)$(dfbppincludedir)'"; \
	  $(INSTALL_HEADER) $$files "$(DESTDIR)$(dfbppincludedir)" || exit $$?; \
	done

uninstall-dfbppincludeHEADERS:
	@$(NORMAL_UNINSTALL)
	@list='$(dfbppinclude_HEADERS)'; test -n "$(dfbppincludedir)" || list=; \
	files=`for p in $$list; do echo $$p; done | sed -e 's|^.*/||'`; \
	dir='$(DESTDIR)$(dfbppincludedir)'; $(am__uninstall_files_from_dir)

ID: $(am__tagged_files)
	$(am__define_uniq_tagged_files); mkid -fID $$unique
tags: tags-am
TAGS: tags

tags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	set x; \
	here=`pwd`; \
	$(am__define_uniq_tagged_files); \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: ctags-am

CTAGS: ctags
ctags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	$(am__define_uniq_tagged_files); \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"
cscopelist: cscopelist-am

cscopelist-am: $(am__tagged_files)
	list='$(am__tagged_files)'; \
	case "$(srcdir)" in \
	  [\\/]* | ?:[\\/]*) sdir="$(srcdir)" ;; \
	  *) sdir=$(subdir)/$(srcdir) ;; \
	esac; \
	for i in $$list; do \
	  if test -f "$$i"; then \
	    echo "$(subdir)/$$i"; \
	  else \
	    echo "$$sdir/$$i"; \
	  fi; \
	done >> $(top_builddir)/cscope.files

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(HEADERS)
installdirs:
	for dir in "$(DESTDIR)$(dfbppincludedir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-libtool mostlyclean-am

distclean: distclean-am
	-rm -f Makefile
distclean-am: clean-am distclean-generic distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am: install-dfbppincludeHEADERS

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am:

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-generic mostlyclean-libtool

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-dfbppincludeHEADERS

.MAKE: install-am install-strip

.PHONY: CTAGS GTAGS TAGS all all-am check check-am clean clean-generic \
	clean-libtool cscopelist-am ctags ctags-am distclean \
	distclean-generic distclean-libtool distclean-tags distdir dvi \
	dvi-am html html-am info info-am install install-am \
	install-data install-data-am install-dfbppincludeHEADERS \
	install-dvi install-dvi-am install-exec install-exec-am \
	install-html install-html-am install-info install-info-am \
	install-man install-pdf install-pdf-am install-ps \
	install-ps-am install-strip installcheck installcheck-am \
	installdirs maintainer-clean maintainer-clean-generic \
	mostlyclean mostlyclean-generic mostlyclean-libtool pdf pdf-am \
	ps ps-am tags tags-am uninstall uninstall-am \
	uninstall-dfbppincludeHEADERS


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
