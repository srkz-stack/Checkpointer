cmake_minimum_required(VERSION 3.31)
project(Checkpointer)

set(CMAKE_CXX_STANDARD 23)

add_executable(Checkpointer main.cpp
        main.h
        cli_parser.cpp
        cli_parser.h
        command_init.cpp
        command_init.h
        command_buffer.cpp
        command_buffer.h
        sha256.h
        sha256.cpp)
