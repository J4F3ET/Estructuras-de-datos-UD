#include<iostream>
#include<stdlib.h>
#include<string.h>
#include "Direccion.h"
using namespace std;
Direccion::Direccion(){
    direccion="INDEFINIDO";
}
Direccion::~Direccion(){}
void Direccion:: setDireccion(string aux){
    direccion=aux;
}
string Direccion:: getDireccion(){
    return direccion;
}