lib_LTLIBRARIES=libglfx.la
libglfx_la_SOURCES=glfx.cpp glfxLALRParser.cpp glfxScanner.cpp  
AM_CPPFLAGS=-DLINUX -I../include -Wall

bin_PROGRAMS=glfxc
glfxc_SOURCES=glfxc.cpp
glfxc_LDADD=-lglut -lGLEW libglfx.la
