cmake_minimum_required(VERSION 2.8.7)

project(glfx)

FILE( GLOB GRAMMAR_FILES
"glfx.ypp"
"glfx.lpp"
)
SOURCE_GROUP( "Grammar Files" FILES ${GRAMMAR_FILES} )

FILE( GLOB HEADER_FILES
"../include/gl/glfx.h"
"glfxClasses.h"
"glfxParser.h"
"glfxScanner.h"
"glfxLALRParser.hpp"
)
SOURCE_GROUP( "Header Files" FILES ${HEADER_FILES} )

FILE( GLOB SOURCE_FILES
"glfx.cpp"
"glfxLALRParser.cpp"
"glfxScanner.cpp"
)
SOURCE_GROUP( "Source Files" FILES ${SOURCE_FILES} )

IF(WIN32)
    include_directories( "./../glew/include" "./../include" )
    link_directories( "./../glew/lib" )
ELSEIF(UNIX)
    include_directories( "./../include" )
ENDIF(WIN32)

add_library( glfx SHARED ${GRAMMAR_FILES} ${HEADER_FILES} ${SOURCE_FILES} )
add_library( glfx_static STATIC ${GRAMMAR_FILES} ${HEADER_FILES} ${SOURCE_FILES} )

IF(WIN32)
target_link_libraries( glfx "glew32")
set_target_properties( glfx PROPERTIES COMPILE_FLAGS "-DWIN32 -DUNICODE -D_UNICODE -DGLFX_BUILD" )
set_target_properties( glfx_static PROPERTIES COMPILE_FLAGS "-DWIN32 -DUNICODE -D_UNICODE -DGLFX_BUILD -DGLFX_STATIC -DGLEW_STATIC" )
ELSEIF(UNIX)
target_link_libraries( glfx "GL" "GLEW")
set_target_properties( glfx PROPERTIES COMPILE_FLAGS "-DLINUX -DUNICODE -D_UNICODE -DGLFX_BUILD" )
set_target_properties( glfx_static PROPERTIES COMPILE_FLAGS "-DLINUX -DUNICODE -D_UNICODE -DGLFX_BUILD -DGLFX_STATIC -DGLEW_STATIC" )
ENDIF(WIN32)

IF(NOT WIN32)
INSTALL(FILES ./../include/gl/glfx.h DESTINATION ${INCLUDE_INSTALL_DIR})
INSTALL(FILES ${CMAKE_BINARY_DIR}/src/libglfx_static.a DESTINATION ${LIB_DESTINATION})
INSTALL(FILES ${CMAKE_BINARY_DIR}/src/libglfx.so DESTINATION ${LIB_DESTINATION})
ENDIF(NOT WIN32)
