cmake_minimum_required(VERSION 4.0)
project(MA3)

set(CMAKE_CXX_STANDARD 20)

add_executable(MA3 main.cpp
        card.cpp
        card.h
        deck.cpp
        deck.h)
