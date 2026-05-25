#pragma once

class Nodo {

public:

    int fila;
    int columna;

    char contenido;

    bool descubierto;

    Nodo* arriba;
    Nodo* abajo;
    Nodo* izquierda;
    Nodo* derecha;

    Nodo(int fila, int columna);

};