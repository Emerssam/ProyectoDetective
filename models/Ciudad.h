#pragma once

#include "Nodo.h"

class Ciudad {

private:

    Nodo* inicio;
    Nodo* detective;

public:

    Ciudad();

    void crearCiudad();

    void enlazarNodos(Nodo* matriz[9][9]);

    void imprimirTablero();

    void colocarDetective();

    void moverDetective(char movimiento);

    Nodo* obtenerNodo(int fila, int columna);

    void colocarCallejones();

};