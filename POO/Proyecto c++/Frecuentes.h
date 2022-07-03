#ifndef FRECUENTES_H
#define FRECUENTES_H
#include <string.h> 
#include "Persona.h"
#include "Clientes.h"
#include "Frecuentes.h"
using namespace std;
class Frecuentes:public Clientes{
    private:
        int numCompras;
    public:
        Frecuentes();
        ~Frecuentes();
        void setNumCompras(int aux);
        void setRegistrar(string nom,int gen,int id,string prod,string org,int estr,int numCrop);
        int getNumCompras();
        void getRegistro();
};
#endif
