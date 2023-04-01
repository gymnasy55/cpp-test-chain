cmake_minimum_required(VERSION 3.25)
project(test_chain)

set(CMAKE_CXX_STANDARD 23)

add_executable(test_chain main.cpp Block.h Blockchain.h Block.cpp sha256/sha256.h sha256/sha256.cpp Blockchain.cpp)
