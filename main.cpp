#include <iostream>
#include "models/Ciudad.h"

using namespace std;

int main() {

    Ciudad ciudad;

    char movimiento;

    while (true) {

        ciudad.imprimirTablero();

        cout << endl;
        cout << "W = Arriba" << endl;
        cout << "S = Abajo" << endl;
        cout << "A = Izquierda" << endl;
        cout << "D = Derecha" << endl;
        cout << "T = Ver pistas" << endl;
        cout << "I = Interrogar testigo" << endl;

        cin >> movimiento;

        movimiento = toupper(movimiento);

        if (movimiento == 'T') {

            ciudad.mostrarPistas();
        }

        else if (movimiento == 'I') {

            ciudad.interrogarTestigo();
        }

        else {

            ciudad.moverDetective(movimiento);
        }
    }

    return 0;
}