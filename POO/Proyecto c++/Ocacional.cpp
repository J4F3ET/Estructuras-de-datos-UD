#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Ocacional.h"
#include "Proveedor.h"
#include "Persona.h"
using namespace std;
Ocacional::Ocacional():Proveedor(){
    productoOca="DESCONOCIDO";
    fecha="00/00/0000";
}
Ocacional::~Ocacional(){}
void Ocacional:: setFecha(string aux){
    fecha=aux;
}
void Ocacional:: setProductoOca(string aux){
    productoOca=aux;
}
string Ocacional:: getProductoOca(){
    return productoOca;
}
string Ocacional:: getFecha(){
    return fecha;
}
void Ocacional::setRegistro(string nom,int gen,int id,string nomEmpr,int nit,string proOca,string fecha){
    setNom(nom);
    setGen(gen);
    setIdent(id);
    setNomEmpresa(nomEmpr);
    setNit(nit);
    setProductoOca(proOca);
    setFecha(fecha);
}
void Ocacional::getRegistro(){
    cout<<"Nombre el proveedor: "<<getNom()<<endl;
    cout<<"\nGenero del proveedor: "<<getGen()<<endl;
    cout<<"Numero de identidad: "<<getIdent()<<endl;
    cout<<"Nombre de empresa: "<<getNombreEmpresa()<<endl;
    cout<<"NIT: "<<getNit()<<endl;
    cout<<"Producto : "<<getProductoOca()<<endl;
    cout<<"Fecha: "<<getFecha()<<endl;
}