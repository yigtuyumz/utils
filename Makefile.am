# make all
#     Build programs, libraries, documentation, etc. (same as make). 
# make install
#     Install what needs to be installed, copying the files from the package’s
#     tree to system-wide directories. 
# make install-strip
#     Same as make install, then strip debugging symbols. Some users like to
#     trade space for useful bug reports... 
# make uninstall
#     The opposite of make install: erase the installed files. (This needs to be
#     run from the same build tree that was installed.) 
# make clean
#     Erase from the build tree the files built by make all. 
# make distclean
#     Additionally erase anything ./configure created. 
# make check
#     Run the test suite, if any. 
# make installcheck
#     Check the installed programs or libraries, if supported. 
# make dist
#     Recreate package-version.tar.gz from all the source files.


lib_LTLIBRARIES = libutils.la
libutils_la_LDFLAGS = -version-info 1:0:0
libutils_la_SOURCES = \
	src/utils_atoi.c \
	src/utils_bzero.c \
	src/utils_floor.c \
	src/utils_isprime.c \
	src/utils_isspace.c \
	src/utils_isxdigit.c \
	src/utils_itoa.c \
	src/utils_memcpy.c \
	src/utils_memset.c \
	src/utils_putchar.c \
	src/utils_putnbr.c \
	src/utils_putstr.c \
	src/utils_strcat.c \
	src/utils_strchr.c \
	src/utils_strcmp.c \
	src/utils_strcpy.c \
	src/utils_strdup.c \
	src/utils_strlen.c \
	src/utils_strncat.c \
	src/utils_strncmp.c \
	src/utils_strncpy.c \
	src/utils_strndup.c \
	src/utils_strnlen.c \
	src/utils_strnstr.c \
	src/utils_strrchr.c \
	src/utils_strstr.c \
	src/utils_swapn.c \
	src/utils_vaput.c

include_HEADERS = include/utils.h
ACLOCAL_AMFLAGS = -I m4
AM_CFLAGS = -Wall -Wextra -Werror -I./include -fPIC -std=c99
AM_LDFLAGS = 
EXTRA_DIST = README.md
