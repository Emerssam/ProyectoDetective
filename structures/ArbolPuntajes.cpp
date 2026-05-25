#include "ArbolPuntajes.h"
#include <iostream>

using namespace std;

ArbolPuntajes::ArbolPuntajes() {

    raiz = nullptr;
}

NodoArbol* ArbolPuntajes::insertarRecursivo(
        NodoArbol* nodo,
        string jugador,
        int puntaje) {

    if (nodo == nullptr) {

        return new NodoArbol(jugador, puntaje);
    }

    if (puntaje < nodo->puntaje) {

        nodo->izquierda =
                insertarRecursivo(
                        nodo->izquierda,
                        jugador,
                        puntaje
                );
    }

    else {

        nodo->derecha =
                insertarRecursivo(
                        nodo->derecha,
                        jugador,
                        puntaje
                );
    }

    return nodo;
}

void ArbolPuntajes::insertar(
        string jugador,
        int puntaje) {

    raiz = insertarRecursivo(
            raiz,
            jugador,
            puntaje
    );
}

void ArbolPuntajes::mostrarRecursivo(
        NodoArbol* nodo) {

    if (nodo == nullptr) {
        return;
    }

    mostrarRecursivo(nodo->izquierda);

    cout << nodo->jugador
         << " -> "
         << nodo->puntaje
         << endl;

    mostrarRecursivo(nodo->derecha);
}

void ArbolPuntajes::mostrarHistorial() {

    cout << endl;
    cout << "HISTORIAL DE PUNTAJES" << endl;
    cout << endl;

    mostrarRecursivo(raiz);

    cout << endl;
}