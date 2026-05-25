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
        cout << "S = Ver sospechosos" << endl;
        cout << "F = Acusar sospechoso" << endl;

        cin >> movimiento;

        movimiento = toupper(movimiento);

        if (movimiento == 'T') {

            ciudad.mostrarPistas();
        }

        else if (movimiento == 'I') {

            ciudad.interrogarTestigo();
        }

        else if (movimiento == 'S') {

            ciudad.mostrarSospechosos();
        }

        else if (movimiento == 'F') {

            ciudad.acusarSospechoso();
        }

        else {

            ciudad.moverDetective(movimiento);
        }
    }

    return 0;
}