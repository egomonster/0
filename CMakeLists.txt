cmake_minimum_required(VERSION 3.5)

project(0 LANGUAGES C)

add_executable(0 main.c)

install(TARGETS 0
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
