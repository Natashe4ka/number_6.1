cmake_minimum_required(VERSION 2.8)

project(six)

set(six_src main.cpp CPoint_class.cpp CDist_class.cpp operators.cpp)
set(six_hdr six.hpp CDist_class.hpp CPoint_class.hpp)

add_executable(${PROJECT_NAME} ${six_src} ${six_hdr})

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 /std:c++14")