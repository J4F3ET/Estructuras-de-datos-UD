#ifndef PROVEEDOR_H
#define PROVEEDOR_H
#include "Persona.h"
#include <string.h>
#include <iostream>
using namespace std;
class Proveedor:public Persona{
    private:
        string nomEmpresa;
        int nit;
    public:
        Proveedor();
        ~Proveedor();
        void setNomEmpresa(string aux);
        void setNit(int aux);
        string getNombreEmpresa();
        int getNit();
};
#endif
