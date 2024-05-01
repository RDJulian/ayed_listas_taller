cmake_minimum_required(VERSION 3.22)
project(ayed_listas_taller)

set(CMAKE_CXX_STANDARD 23)

include_directories(include)

add_executable(ayed_listas_taller main.cpp
        include/serie.hpp
        src/serie.cpp
        include/nodo_lc.hpp
        include/lista_circular.hpp
        include/catalogo.hpp
        src/catalogo.cpp)
