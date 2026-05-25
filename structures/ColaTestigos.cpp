#include "ColaTestigos.h"
#include <iostream>

using namespace std;

void ColaTestigos::agregarTestigo(Testigo testigo) {

    cola.push(testigo);
}

void ColaTestigos::interrogar() {

    if (cola.empty()) {

        cout << endl;
        cout << "No hay testigos pendientes." << endl;

        return;
    }

    Testigo actual = cola.front();

    cola.pop();

    cout << endl;
    cout << "DECLARACION DEL TESTIGO:" << endl;
    cout << actual.mensaje << endl;
}

bool ColaTestigos::vacia() {

    return cola.empty();
}