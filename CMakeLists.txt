cmake_minimum_required(VERSION 3.29)
project(Villalobos_VictoriaExamenCpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Villalobos_VictoriaExamenCpp
        EJERCICIO1/número.cpp
        main.h
        main.cpp
        EJERCICIO2/Día.h
        EJERCICIO2/Día.cpp
        EJERCICIO3/Calificaciones.h
        EJERCICIO3/Calificaciones.cpp
        EJERCICIO4/Precio.h
        EJERCICIO4/Precio.cpp)
