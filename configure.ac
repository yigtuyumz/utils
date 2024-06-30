dnl Process this file with autoconf
dnl AC_PREREQ([2.72])
AC_INIT([libutils], [1.0.0], [yigtuyumz@gmail.com])
AC_CONFIG_MACRO_DIR([m4])
AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects])
dnl gcc13 is for FreeBSD
AC_PROG_CC([gcc gcc13])
AM_PROG_AR
AC_CONFIG_FILES([
	Makefile
])
AC_CHECK_HEADER([unistd.h])
dnl AC_CHECK_HEADERS([malloc.h], [], [], [src/utils_strdup.c])
AC_C_RESTRICT
AC_FUNC_MALLOC
AC_TYPE_SIZE_T
AC_CONFIG_HEADERS([config.h])
AC_ENABLE_SHARED
AC_MSG_NOTICE([Building libutils ($VERSION)])
LT_INIT
AC_OUTPUT

