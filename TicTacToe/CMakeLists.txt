cmake_minimum_required(VERSION 3.21)
project(TicTacToe)

file(GLOB SRC_FILES "src/*.cpp")

set(INCLUDE_DIRS "include/")

add_executable(TicTacToe ${SRC_FILES})