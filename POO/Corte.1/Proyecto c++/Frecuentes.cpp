#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Frecuentes.h"
#include "Clientes.h"
#include "Persona.h"
using namespace std;
Frecuentes::Frecuentes():Clientes(){
    numCompras=0;
}
Frecuentes::~Frecuentes(){}
void Frecuentes:: setNumCompras(int aux){
    numCompras=aux;
}
int  Frecuentes::getNumCompras(){
    return numCompras;
}
void Frecuentes::setRegistrar(string nom,int gen,int id,string prod,string org,int estr,int numCrop){
	setNom(nom);
    setGen(gen);
    setIdent(id);
    setProducto(prod);
    setOrigen(org);
    setEstrato(estr);
    setNumCompras(numCrop);
}
void Frecuentes::getRegistro(){
    cout<<"Nombre el cliente: "<<getNom()<<endl;
    cout<<"\nGenero del cliente: "<<getGen()<<endl;
    cout<<"Numero de identidad: "<<getIdent()<<endl;
    cout<<"Nombre del producto: "<<getProducto()<<endl;
    cout<<"Nacionalidad del cliente: "<<getOrigen()<<endl;
    cout<<"Estrato del cliente: "<<getEstrato()<<endl;
    cout<<"Numero de compras: "<<getNumCompras()<<endl;
}
