#pragma once

#include "Nodo.h"
#include "../structures/PilaPistas.h"
#include "../structures/ColaTestigos.h"

class Ciudad {

private:

    Nodo* inicio;
    Nodo* detective;

    PilaPistas pilaPistas;

    ColaTestigos colaTestigos;

    int pistasRecolectadas;

public:

    Ciudad();

    void crearCiudad();

    void enlazarNodos(Nodo* matriz[9][9]);

    void imprimirTablero();

    void colocarDetective();

    void moverDetective(char movimiento);

    Nodo* obtenerNodo(int fila, int columna);

    void colocarCallejones();

    void colocarPistas();

    void colocarTestigos();

    void mostrarPistas();

    void interrogarTestigo();

};
