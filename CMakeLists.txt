cmake_minimum_required(VERSION 2.6)
project(libjazz)

find_package(boost REQUIRED)

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

include_directories(
	include
	${BOOST_INCLUDE_DIR}
)

add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(examples)
