#pragma once

#include <stack>
#include "../models/Pista.h"

using namespace std;

class PilaPistas {

private:

    stack<Pista> pila;

public:

    void agregarPista(Pista pista);

    void mostrarPistas();

    bool vacia();

    Pista usarPista();

};