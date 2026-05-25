#include "Ciudad.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Ciudad::Ciudad() {

    inicio = nullptr;
    detective = nullptr;

    srand(time(nullptr));

    crearCiudad();

    colocarCallejones();

    colocarDetective();
}

void Ciudad::crearCiudad() {

    Nodo* matriz[9][9];

    for (int i = 0; i < 9; i++) {

        for (int j = 0; j < 9; j++) {

            matriz[i][j] = new Nodo(i, j);
        }
    }

    enlazarNodos(matriz);

    inicio = matriz[0][0];
}

void Ciudad::enlazarNodos(Nodo* matriz[9][9]) {

    for (int i = 0; i < 9; i++) {

        for (int j = 0; j < 9; j++) {

            if (i > 0) {
                matriz[i][j]->arriba = matriz[i - 1][j];
            }

            if (i < 8) {
                matriz[i][j]->abajo = matriz[i + 1][j];
            }

            if (j > 0) {
                matriz[i][j]->izquierda = matriz[i][j - 1];
            }

            if (j < 8) {
                matriz[i][j]->derecha = matriz[i][j + 1];
            }
        }
    }
}

Nodo* Ciudad::obtenerNodo(int fila, int columna) {

    Nodo* actual = inicio;

    for (int i = 0; i < fila; i++) {
        actual = actual->abajo;
    }

    for (int j = 0; j < columna; j++) {
        actual = actual->derecha;
    }

    return actual;
}

void Ciudad::colocarCallejones() {

    int cantidad = 0;

    while (cantidad < 16) {

        int fila = rand() % 9;
        int columna = rand() % 9;

        Nodo* actual = obtenerNodo(fila, columna);

        if (actual->contenido == 'o') {

            actual->contenido = '|';

            cantidad++;
        }
    }
}

void Ciudad::colocarDetective() {

    while (true) {

        int fila = rand() % 9;
        int columna = rand() % 9;

        Nodo* actual = obtenerNodo(fila, columna);

        if (actual->contenido == 'o') {

            detective = actual;

            detective->contenido = 'D';

            detective->descubierto = true;

            break;
        }
    }
}

void Ciudad::imprimirTablero() {

    cout << endl;

    for (int i = 0; i < 11; i++) {
        cout << "# ";
    }

    cout << endl;

    Nodo* filaActual = inicio;

    while (filaActual != nullptr) {

        cout << "# ";

        Nodo* actual = filaActual;

        while (actual != nullptr) {

            if (actual->descubierto) {
                cout << actual->contenido << " ";
            }
            else {
                cout << "o ";
            }

            actual = actual->derecha;
        }

        cout << "#";

        cout << endl;

        filaActual = filaActual->abajo;
    }

    for (int i = 0; i < 11; i++) {
        cout << "# ";
    }

    cout << endl;
}

void Ciudad::moverDetective(char movimiento) {

    Nodo* siguiente = detective;

    if (movimiento == 'W') {

        if (detective->arriba != nullptr) {
            siguiente = detective->arriba;
        }
    }

    else if (movimiento == 'S') {

        if (detective->abajo != nullptr) {
            siguiente = detective->abajo;
        }
    }

    else if (movimiento == 'A') {

        if (detective->izquierda != nullptr) {
            siguiente = detective->izquierda;
        }
    }

    else if (movimiento == 'D') {

        if (detective->derecha != nullptr) {
            siguiente = detective->derecha;
        }
    }

    if (siguiente->contenido == '|') {

        siguiente->descubierto = true;

        cout << endl;
        cout << "Hay un callejon cerrado." << endl;

        return;
    }

    detective->contenido = ' ';

    detective = siguiente;

    detective->contenido = 'D';

    detective->descubierto = true;
}