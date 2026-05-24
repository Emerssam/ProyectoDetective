cmake_minimum_required(VERSION 3.30)
project(ProyectoDetective)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProyectoDetective

        main.cpp

        models/Nodo.cpp
        models/Ciudad.cpp
        models/Detective.cpp
        models/Pista.cpp
        models/Sospechoso.cpp
        models/Testigo.cpp

        structures/PilaPistas.cpp
        structures/ColaTestigos.cpp
        structures/HashSospechosos.cpp
        structures/ArbolPuntajes.cpp

        game/Juego.cpp

        utils/Utils.cpp
)
