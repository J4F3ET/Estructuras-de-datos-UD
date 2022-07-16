#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Constante.h"
#include "Proveedor.h"
#include "Persona.h"
using namespace std;
Constante::Constante():Proveedor(){
    productoConst="DESCONOCIDO";
    cantidad=0;
}
Constante::~Constante(){}
void Constante:: setProductoConst(string aux){
    productoConst=aux;
}
void Constante:: setCantidad(int aux){
    cantidad=aux;
}
string Constante:: getProductoConst(){
    return productoConst;
}
int Constante:: getCantidad(){
    return cantidad;
}
void Constante::setRegistro(string nom,int gen,int id,string nomEmpr,int nit,string proConst,int cantd){
    setNom(nom);
    setGen(gen);
    setIdent(id);
    setNomEmpresa(nomEmpr);
    setNit(nit);
    setProductoConst(proConst);
    setCantidad(cantd);
}
void Constante::getRegistro(){
    cout<<"Nombre el proveedor: "<<getNom()<<endl;
    cout<<"\nGenero del proveedor: "<<getGen()<<endl;
    cout<<"Numero de identidad: "<<getIdent()<<endl;
    cout<<"Nombre de empresa: "<<getNombreEmpresa()<<endl;
    cout<<"NIT: "<<getNit()<<endl;
    cout<<"Producto : "<<getProductoConst()<<endl;
    cout<<"Cantidad : "<<getCantidad()<<endl;
}
