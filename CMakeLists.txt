cmake_minimum_required(VERSION 3.21)
project(CPP_Module_00)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex01)

add_executable(CPP_Module_00
        ex01/contact.cpp
        ex01/contact.hpp
        ex01/main.cpp
        ex01/phonebook.cpp
        ex01/phonebook.hpp)
