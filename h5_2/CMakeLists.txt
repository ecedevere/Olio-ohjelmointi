cmake_minimum_required(VERSION 3.16)

project(h5_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(h5_2 main.cpp
    classb.h classb.cpp
    classa1.h classa1.cpp
    classa2.h classa2.cpp)

include(GNUInstallDirs)
install(TARGETS h5_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
