cmake_minimum_required(VERSION 3.0.0)
project(Hazel VERSION 0.1.0)

include(CTest)
enable_testing()

set(ROOT_DIR ../)
set(INCLUDE_DIR ${ROOT_DIR}/Hazel/inc/Hazel)
set(SOURCE_DIR  ${ROOT_DIR}/Hazel/src)

set(SOURCE_FILES ${SOURCE_DIR}/test.cpp)
set(HEADER_FILES ${INCLUDE_DIR}/test.h)

add_library(Hazel SHARED ${SOURCE_FILES} ${HEADER_FILES})

target_include_directories(Hazel PRIVATE ${INCLUDE_DIR})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
