#include<iostream>
#include<stdlib.h>
#include<string.h>
#include "Palabras_clave.h"
Palabras_clave::Palabras_clave(){
    palabra="INDEFINIDO";
}
Palabras_clave::~Palabras_clave(){}
void Palabras_clave:: setPalabra(string aux){
    palabra=aux;
}
string Palabras_clave:: getPalabra(){
    return palabra;
}
bool Palabras_clave:: buscar(Libro aux){
    bool l=false;
    if("INDEFINIDO"!=aux.getNombreL()&&(palabra==aux.getNombreL()||palabra==aux.getAutor())&&0<aux.getEjemplares())
        l=true;
    return l;
}