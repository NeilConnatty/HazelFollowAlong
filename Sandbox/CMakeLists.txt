cmake_minimum_required(VERSION 3.0.0)
project(Hazel VERSION 0.1.0)

include(CTest)
enable_testing()

set(ROOT_DIR ../)
set(HAZEL_INC_DIR ${ROOT_DIR} ${ROOT_DIR}/Hazel/src)
set(SPDLOG_INC_DIR ${ROOT_DIR}/Hazel/vendor/spdlog/include)
set(SOURCE_DIR ${ROOT_DIR}/Sandbox/src)

set(SOURCE_FILES ${SOURCE_DIR}/SandboxApp.cpp)
set(HAZEL_HEADER_FILES ${HAZEL_INC_DIR}/Hazel.h)

add_executable(Sandbox ${SOURCE_FILES} ${HAZEL_HEADER_FILES})

target_include_directories(Sandbox PRIVATE ${HAZEL_INC_DIR} ${SPDLOG_INC_DIR})

target_link_libraries(Sandbox Hazel)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
