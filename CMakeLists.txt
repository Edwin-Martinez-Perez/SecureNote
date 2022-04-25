cmake_minimum_required(VERSION 3.21)
project(SecureNote)

set(CMAKE_CXX_STANDARD 14)

add_executable(SecureNote UserInfo.h UserInteraction.h  main.cpp UserInfo.cpp UserInteraction.cpp)
