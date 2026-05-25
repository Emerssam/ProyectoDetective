#include "Utils.h"
#include <iostream>

using namespace std;

void Utils::limpiarPantalla() {

#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void Utils::pausa() {

    cout << endl;
    cout << "Presiona ENTER para continuar...";
    cin.ignore();
    cin.get();
}
