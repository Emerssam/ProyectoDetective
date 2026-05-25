#include "HashSospechosos.h"
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void HashSospechosos::generarSospechosos() {

    vector<string> nombres = {
        "Carlos",
        "Diana",
        "Eduardo",
        "Fernanda",
        "Gonzalo",
        "Hilda",
        "Ivan",
        "Juliana"
};

    vector<string> atributos = {
        "alto",
        "bajo",
        "cabello rojo",
        "zurdo",
        "piel clara",
        "nariz grande",
        "ojos verdes",
        "cabello negro"
};

    int culpable = rand() % 8;

    for (int i = 0; i < 8; i++) {

        bool esCulpable = false;

        if (i == culpable) {

            esCulpable = true;

            culpableReal = nombres[i];
        }

        Sospechoso nuevo(
                nombres[i],
                atributos[i],
                esCulpable
        );

        tabla[nombres[i]] = nuevo;
    }
}

void HashSospechosos::mostrarSospechosos() {

    cout << endl;
    cout << "SOSPECHOSOS DEL CASO" << endl;
    cout << endl;

    for (auto elemento : tabla) {

        cout << elemento.second.nombre
             << " -> "
             << elemento.second.atributo
             << endl;
    }

    cout << endl;
}

bool HashSospechosos::acusar(string nombre) {

    if (tabla.find(nombre) == tabla.end()) {

        cout << endl;
        cout << "Ese sospechoso no existe." << endl;

        return false;
    }

    if (nombre == culpableReal) {

        cout << endl;
        cout << "CASO RESUELTO." << endl;
        cout << nombre << " era el culpable." << endl;

        return true;
    }

    cout << endl;
    cout << "ACUSACION INCORRECTA." << endl;
    cout << culpableReal << " era el culpable." << endl;

    return false;
}
