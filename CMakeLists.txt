cmake_minimum_required(VERSION 2.8.7)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/modules")

set(GLFX_VERSION 0.6.0)

IF(WIN32)
	set(GLEW_DIR "./../dependencies/GLEW" CACHE PATH "Path to the Glew library.")
ENDIF(WIN32)

add_subdirectory(src)
