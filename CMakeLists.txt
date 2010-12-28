cmake_minimum_required(VERSION 2.6)
project(libjazz)

find_package(boost REQUIRED)

include_directories(
	includes
	${BOOST_INCLUDE_DIR}
)

add_subdirectory(src)
