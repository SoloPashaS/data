#https://www.youtube.com/watch?v=2bl_SYM66rc
cmake_minimum_required(VERSION 3.5)
project(empty_project)


set (empty_project_VERSION 1.0.0.0)


set(CMAKE_BUILD_TYPE Debug)
#set(CMAKE_BUILD_TYPE Release)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -O2") 


file(GLOB  CPPS  "source/*.cpp" )      
include_directories("${PROJECT_SOURCE_DIR}/include")     
add_executable(${PROJECT_NAME} ${CPPS})

