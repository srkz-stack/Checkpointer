cmake_minimum_required(VERSION 3.31)
project(Checkpointer)

set(CMAKE_CXX_STANDARD 23)

add_executable(Checkpointer main.cpp
        main.h
        cli_parser.cpp
        cli_parser.h
        command_init.cpp
        commands.h
        command_init.h)
