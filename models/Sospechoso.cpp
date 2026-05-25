#include "Sospechoso.h"

Sospechoso::Sospechoso() {

    nombre = "";
    atributo = "";
    culpable = false;
}

Sospechoso::Sospechoso(string nombre,
                       string atributo,
                       bool culpable) {

    this->nombre = nombre;
    this->atributo = atributo;
    this->culpable = culpable;
}
