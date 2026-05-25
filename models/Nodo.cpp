#include "Nodo.h"

Nodo::Nodo(int fila, int columna) {

    this->fila = fila;
    this->columna = columna;

    contenido = 'o';

    descubierto = false;

    arriba = nullptr;
    abajo = nullptr;
    izquierda = nullptr;
    derecha = nullptr;
}