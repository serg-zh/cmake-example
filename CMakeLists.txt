cmake_minimum_required(VERSION 3.10)

project(hello C)

add_subdirectory(libpci)
#add_subdirectory(liblib)

add_executable(hello src/hello.c)

target_link_libraries(hello PUBLIC libpci)
