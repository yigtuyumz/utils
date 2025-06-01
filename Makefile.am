lib_LTLIBRARIES = libutils.la
libutils_la_LDFLAGS = -version-info 1:0:0
libutils_la_SOURCES = \
	src/utils_boolean.c \
	src/utils_math.c \
	src/utils_memory.c \
	src/utils_standard.c \
	src/utils_stream.c \
	src/utils_string.c

include_HEADERS = src/utils.h
ACLOCAL_AMFLAGS = -I m4
AM_CFLAGS = -Wall -Wextra -Werror -I./include -fPIC -std=c99
AM_LDFLAGS = 
EXTRA_DIST = README.md

