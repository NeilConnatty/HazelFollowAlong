cmake_minimum_required(VERSION 3.0.0)
project(Hazel VERSION 0.1.0)

include(CTest)
enable_testing()

set(ROOT_DIR ../)
set(SPDLOG_INCLUDE_DIR ${ROOT_DIR}/Hazel/vendor/spdlog/include)
set(HAZEL_INCLUDE_DIR ${ROOT_DIR}/Hazel/src/Hazel)
set(INCLUDE_DIRS ${HAZEL_INCLUDE_DIR} ${SPDLOG_INCLUDE_DIR})
set(SOURCE_DIR  ${ROOT_DIR}/Hazel/src/Hazel)

set(SOURCE_FILES  ${SOURCE_DIR}/Application.cpp
                  ${SOURCE_DIR}/Log.cpp
                  )

set(HEADER_FILES  ${HAZEL_INCLUDE_DIR}/Application.h 
                  ${HAZEL_INCLUDE_DIR}/Core.h 
                  ${HAZEL_INCLUDE_DIR}/EntryPoint.h
                  ${HAZEL_INCLUDE_DIR}/Log.h
                  )

add_compile_definitions(HAZEL_BUILD_LIB)

add_library(Hazel SHARED ${SOURCE_FILES} ${HEADER_FILES})

target_include_directories(Hazel PRIVATE ${INCLUDE_DIRS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
