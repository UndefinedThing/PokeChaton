cmake_minimum_required(VERSION 3.17)
project(PokeChaton)

set(CMAKE_CXX_STANDARD 14)

add_executable(PokeChaton main.cpp components/Poke/PokeChat.cpp header/Poke/Species.h components/Poke/Species.cpp components/db/CSVTraitement.cpp components/db/CSVTraitement.h components/db/CSVRecord.h)