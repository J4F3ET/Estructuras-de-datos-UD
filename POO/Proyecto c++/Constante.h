#ifndef CONSTANTE_H
#define CONSTANTE_H
#include "Proveedor.h"
#include <string.h>
using namespace std;
class Constante: public Proveedor{
private:
    string productoConst;
    int cantidad;
public:
    Constante();
    ~Constante();
    void setProductoConst(string aux);
    void setCantidad(int aux);
    void setRegistro(string nom,int gen,int id,string nomEmpr,int nit,string proConst,int cantd);
    string getProductoConst();
    int getCantidad();
    void getRegistro();
    friend int getCoutCantProducts_Const(Constante proveedor[],int aux);
};

#endif
