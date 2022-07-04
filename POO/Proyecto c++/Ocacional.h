#ifndef OCACIONAL_H
#define OCACIONAL_H
#include "Proveedor.h"
#include <string.h>
#include <iostream>
using namespace std;
class Ocacional: public Proveedor{
private:
    string productoOca,fecha;
public:
    Ocacional();
    ~Ocacional();
    void setFecha(string aux);
    void setProductoOca(string aux);
    void setRegistro(string nom,int gen,int id,string nomEmpr,int nit,string proOca,string fecha);
    string getProductoOca();
    string getFecha();
    void getRegistro();
};
#endif
