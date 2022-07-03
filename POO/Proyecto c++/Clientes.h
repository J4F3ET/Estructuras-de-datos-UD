#ifndef CLIENTES_H
#define CLIENTES_H
#include "Persona.h"
#include <string.h>
#include <iostream>
using namespace std;
class Clientes:public Persona{
    private:
        string origen,producto;//nacionalidad
        int estrato;
    public:
        Clientes();
        ~Clientes();
        void setOrigen(string aux);
        void setProducto(string aux);
        void setEstrato(int aux);
        string getOrigen();
        string getProducto();
        int getEstrato();
};
#endif
