cmake_minimum_required(VERSION 3.0.0)
project(Hazel VERSION 0.1.0)

include(CTest)
enable_testing()

set(ROOT_DIR ../)
set(INCLUDE_DIR ${ROOT_DIR}/Hazel)
set(HEADER_FILES ./test.h)

add_library(Hazel SHARED src/test.cpp ${HEADER_FILES})

target_include_directories(Hazel PRIVATE ${INCLUDE_DIR})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
