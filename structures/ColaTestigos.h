#pragma once

#include <queue>
#include "../models/Testigo.h"

using namespace std;

class ColaTestigos {

private:

    queue<Testigo> cola;

public:

    void agregarTestigo(Testigo testigo);

    void interrogar();

    bool vacia();

};
