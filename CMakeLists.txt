cmake_minimum_required(VERSION 2.8)
project( myws )

set(CMAKE_BUILD_TYPE "Release")
# 添加c++ 11标准支持
#set(CMAKE_CXX_FLAGS "-std=c++2a")
set(CMAKE_CXX_FLAGS "-fPIC")
set(CMAKE_CXX_STANDARD 14)

#SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/${CMAKE_PROJECT_NAME})

# Eigen
include_directories("/usr/include/eigen3")

# 寻找OpenCV库
find_package(OpenCV 4.2 REQUIRED)
# 添加头文件
include_directories(${OpenCV_INCLUDE_DIRS})

add_subdirectory(imageBasics)
add_subdirectory(lrcv)
add_subdirectory(lrcpp)
