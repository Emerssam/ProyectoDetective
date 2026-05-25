#include "PilaPistas.h"
#include <iostream>

using namespace std;

void PilaPistas::agregarPista(Pista pista) {

    pila.push(pista);
}

void PilaPistas::mostrarPistas() {

    stack<Pista> copia = pila;

    cout << endl;
    cout << "PISTAS RECOLECTADAS" << endl;

    while (!copia.empty()) {

        cout << "[ " << copia.top().tipo << " ]" << endl;

        copia.pop();
    }

    cout << endl;
}

bool PilaPistas::vacia() {

    return pila.empty();
}

Pista PilaPistas::usarPista() {

    Pista ultima = pila.top();

    pila.pop();

    return ultima;
}
