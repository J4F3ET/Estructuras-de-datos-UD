#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"
#include "Proveedor.h"
using namespace std;	
Proveedor::Proveedor(){
    nomEmpresa="Desconocido";
    nit=0;
    Persona();
}
Proveedor::~Proveedor(){
}
void Proveedor:: setNomEmpresa(string aux){
    nomEmpresa=aux;
}
void Proveedor:: setNit(int aux){
    nit=aux;
}
string Proveedor:: getNombreEmpresa(){
    return nomEmpresa;
}
int Proveedor:: getNit(){
    return nit;
}
