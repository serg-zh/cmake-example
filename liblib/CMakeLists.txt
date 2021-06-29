add_library(liblib STATIC lib.c)
target_include_directories(liblib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
