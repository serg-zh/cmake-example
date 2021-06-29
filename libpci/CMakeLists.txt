include(ExternalProject)

file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/include)

ExternalProject_Add(libpcisrc
    URL ${CMAKE_CURRENT_SOURCE_DIR}/pciutils-master.zip
    BUILD_IN_SOURCE ON
    CONFIGURE_COMMAND ""
    BUILD_COMMAND make PREFIX=${CMAKE_BINARY_DIR}
    COMMAND make PREFIX=${CMAKE_BINARY_DIR} install-lib
    INSTALL_COMMAND ""
)

add_library(libpci STATIC IMPORTED GLOBAL)
set_target_properties(libpci PROPERTIES IMPORTED_LOCATION ${CMAKE_BINARY_DIR}/lib/libpci.a)
set_target_properties(libpci PROPERTIES INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_BINARY_DIR}/include)

add_dependencies(libpci libpcisrc)
