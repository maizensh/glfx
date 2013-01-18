#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT(glfx, 0.70, etay.meiri@gmail.com)
dnl Must come before AM_INIT_AUTOMAKE.
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([readme-alpha dist-xz -Wall])
AC_CONFIG_SRCDIR([src/glfxClasses.h])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_LEX
AC_PROG_YACC
AC_PROG_LIBTOOL

# Checks for libraries.

# Checks for header files.
AC_FUNC_ALLOCA
AC_CHECK_HEADERS([inttypes.h libintl.h malloc.h stddef.h stdlib.h string.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_INT8_T
AC_TYPE_SIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT8_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_CHECK_FUNCS([memset])

AC_CONFIG_FILES([Makefile src/Makefile man/Makefile])
AC_OUTPUT

AC_CONFIG_MACRO_DIR([m4])
