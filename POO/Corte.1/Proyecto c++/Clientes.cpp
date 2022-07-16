#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"
#include "Clientes.h"
using namespace std;
Clientes::Clientes():Persona(){
    origen="DESCONOCIDO";
    producto="DESCONOCIDO";
    estrato=0;
}
Clientes::~Clientes(){}
void Clientes:: setOrigen(string aux){
    origen=aux;
}
void Clientes:: setProducto(string aux){
    producto=aux;
}
void Clientes:: setEstrato(int aux){
    estrato=aux;
}
string Clientes:: getOrigen(){
    return origen;
}
string Clientes:: getProducto(){
    return producto;
}
int Clientes:: getEstrato(){
    return estrato;
}
