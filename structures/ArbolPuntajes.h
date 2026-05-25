#pragma once

#include <string>

using namespace std;

class NodoArbol {

public:

    string jugador;
    int puntaje;

    NodoArbol* izquierda;
    NodoArbol* derecha;

    NodoArbol(string jugador, int puntaje) {

        this->jugador = jugador;
        this->puntaje = puntaje;

        izquierda = nullptr;
        derecha = nullptr;
    }
};

class ArbolPuntajes {

private:

    NodoArbol* raiz;

    NodoArbol* insertarRecursivo(
            NodoArbol* nodo,
            string jugador,
            int puntaje
    );

    void mostrarRecursivo(NodoArbol* nodo);

public:

    ArbolPuntajes();

    void insertar(string jugador, int puntaje);

    void mostrarHistorial();

};