cmake_minimum_required(VERSION 3.22)
project(LoginInterface)
include_directories("${PROJECT_SOURCE_DIR}/include")

set(CMAKE_CXX_STANDARD 14)

add_executable(LoginInterface main.cpp src/Login.cpp src/User.cpp src/Register.cpp)

