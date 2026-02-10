cmake_minimum_required(VERSION 3.16)

project(Transport)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_FILES
	source/main.cpp
)

add_executable(Transport
    ${SOURCE_FILES}
)