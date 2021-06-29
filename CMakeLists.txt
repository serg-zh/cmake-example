cmake_minimum_required(VERSION 3.10)

project(hello C)

include(FindPkgConfig)
pkg_check_modules(libpci IMPORTED_TARGET libpci)

if(NOT libpci_FOUND)
    add_subdirectory(libpci)
endif()

add_executable(hello src/hello.c)
target_link_libraries(hello PUBLIC PkgConfig::libpci)
