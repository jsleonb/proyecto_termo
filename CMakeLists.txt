cmake_minimum_required(VERSION 2.8)
project( prueba3 )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )
add_executable( prueba3 prueba3.cpp )
target_link_libraries( prueba3 ${OpenCV_LIBS} )
