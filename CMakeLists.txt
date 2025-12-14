cmake_minimum_required(VERSION 3.10.0)
project(riscv-proc VERSION 0.1.0 LANGUAGES C CXX)

include_directories(src)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(riscv-proc ${SOURCES})

include(CTest)
enable_testing()

