cmake_minimum_required(VERSION 3.17)
project(PokeChaton)

set(CMAKE_CXX_STANDARD 14)

add_executable(PokeChaton main.cpp components/Interface/Interface.cpp components/Interface/Interface.h components/Question/Question.cpp components/Question/Question.h components/CSVReader.cpp components/CSVReader.h)