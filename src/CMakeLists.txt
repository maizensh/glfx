cmake_minimum_required(VERSION 2.8.7)

project(glfx)

set(LIBRARY_OUTPUT_PATH ".lib")
set(CMAKE_DEBUG_POSTFIX "_d")

IF(WIN32)
    include_directories(
    "${GLEW_DIR}/include"
	"./../include")

    link_directories(
    "${GLEW_DIR}/lib")
ELSEIF(UNIX)
    include_directories( "./../include" )
ENDIF(WIN32)

add_library( glfx SHARED
"../include/glfx.h"
"glfx.ypp"
"glfxClasses.h"
"glfxParser.h"
"glfxScanner.h"
"glfx.cpp"
"glfxLALRParser.cpp"
"glfxScanner.cpp")

IF(WIN32)
target_link_libraries( glfx
"glew32")
add_definitions( -DWIN32 )
ELSEIF(UNIX)
target_link_libraries( glfx
"GL"
"GLEW")
add_definitions( -DLINUX )
ENDIF(WIN32)

set_target_properties( glfx PROPERTIES LINK_INTERFACE_LIBRARIES "" )
