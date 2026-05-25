#pragma once

#include <string>

using namespace std;

class Sospechoso {

public:

    string nombre;
    string atributo;

    bool culpable;

    Sospechoso();

    Sospechoso(string nombre,
                string atributo,
                bool culpable);

};
