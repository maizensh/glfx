cmake_minimum_required(VERSION 2.8.7)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/modules")

set(GLFX_VERSION 0.7.0)

add_subdirectory(src)

SET (LIB_SUFFIX "" CACHE STRING "Define suffix of directory name (32/64)" )
SET (LIB_DESTINATION "${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX}" CACHE STRING "Library directory name")
## the following are directories where stuff will be installed to
SET(INCLUDE_INSTALL_DIR      "${CMAKE_INSTALL_PREFIX}/include/gl/" CACHE PATH "The subdirectory to the header prefix")
SET(PKGCONFIG_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}/lib${LIB_SUFFIX}/pkgconfig/" CACHE STRING "Base directory for pkgconfig files")
IF(NOT WIN32)
  CONFIGURE_FILE(${CMAKE_CURRENT_SOURCE_DIR}/glfx.pc.cmake ${CMAKE_CURRENT_BINARY_DIR}/glfx.pc @ONLY)
  INSTALL( FILES ${CMAKE_CURRENT_BINARY_DIR}/glfx.pc DESTINATION ${PKGCONFIG_INSTALL_PREFIX})
ENDIF(NOT WIN32)
