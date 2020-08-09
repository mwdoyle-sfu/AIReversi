cmake_minimum_required(VERSION 3.16)
project(AIReversi)

set(CMAKE_CXX_STANDARD 20)

add_executable(AIReversi main.cpp board.h human_player.h abstract_player.h computer_player.h)