cmake_minimum_required(VERSION 3.21)
project(SecureNote)

set(CMAKE_CXX_STANDARD 14)

add_executable(SecureNote UserInformation.h UserInteraction.h  main.cpp UserInformation.cpp UserInteraction.cpp)
