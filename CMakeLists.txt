cmake_minimum_required(VERSION 3.12)
project(P2_List_Sort)

set(CMAKE_CXX_STANDARD 11)

set(LIB_DIR "/Users/ajwood/Dropbox/FSU/COP 4531/LIB")
set(LIB_DIR_2 "/Users/122354/Dropbox/FSU/COP 4531/LIB")

set(COMPILE_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMPILE_FLAGS}")

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${LIB_DIR}/cpp)
include_directories(${LIB_DIR}/tcpp)
include_directories(${LIB_DIR}/graph)
include_directories(${LIB_DIR}/tests)
include_directories(${LIB_DIR_2}/cpp)
include_directories(${LIB_DIR_2}/tcpp)
include_directories(${LIB_DIR_2}/graph)
include_directories(${LIB_DIR_2}/tests)


set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(lsort lsort.cpp)