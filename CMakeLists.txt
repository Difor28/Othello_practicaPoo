cmake_minimum_required(VERSION 3.5)

project(pracial_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(pracial_2 main.cpp
    tablero.h tablero.cpp
    logica.h logica.cpp)

include(GNUInstallDirs)
install(TARGETS pracial_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
