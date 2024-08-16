dnl autoconf minimum version
dnl AC_PREREQ([2.72])

dnl project name, version and contact information
AC_INIT([libutils], [1.0.0], [yigtuyumz@gmail.com])

dnl location of m4 macro files
AC_CONFIG_MACRO_DIR([m4])

dnl automake flags, not C compiler !.
AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects])

dnl on FreeBSD, gcc named as gcc13
AC_PROG_CC([gcc gcc13])

dnl supports archiving programs
AM_PROG_AR

dnl final configuration file
AC_CONFIG_FILES([
	Makefile
])

dnl check the library files used by the project
dnl AC_CHECK_HEADERS([header1 header2 ...],
dnl                  [actions-if-found],
dnl                  [actions-if-not-found],
dnl                  [action-to-take-if-check-fails])
AC_CHECK_HEADER([unistd.h])

dnl checks restrict keyword
AC_C_RESTRICT

dnl checks malloc function
AC_FUNC_MALLOC

dnl checks size_t
AC_TYPE_SIZE_T

dnl creates config.h file and set C macros with values adjusted by autotools
AC_CONFIG_HEADERS([config.h])

dnl information message
AC_MSG_NOTICE([================================================])
AC_MSG_NOTICE([====================libutils====================])
AC_MSG_NOTICE([================================================])

dnl initializing libtool
LT_INIT

dnl redirects created output to the related files
AC_OUTPUT

