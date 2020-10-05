cmake_minimum_required(VERSION 3.0.0)
project(Hazel VERSION 0.1.0)

include(CTest)
enable_testing()

set(ROOT_DIR ../)
set(HAZEL_INC_DIR ${ROOT_DIR} ${ROOT_DIR}/Hazel)
set(HAZEL_HEADER_FILES ${HAZEL_INC_DIR}/test.h)

add_executable(Sandbox src/application.cpp ${HAZEL_HEADER_FILES})

target_include_directories(Sandbox PRIVATE ${HAZEL_INC_DIR})

target_link_libraries(Sandbox Hazel)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
