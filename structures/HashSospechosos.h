#pragma once

#include <unordered_map>
#include "../models/Sospechoso.h"

using namespace std;

class HashSospechosos {

private:

    unordered_map<string, Sospechoso> tabla;

    string culpableReal;

public:

    void generarSospechosos();

    void mostrarSospechosos();

    bool acusar(string nombre);

};
