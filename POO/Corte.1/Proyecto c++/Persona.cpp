#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"
Persona::Persona(){
    nombre="DESCONOCIDO";
    genero=identidad=0;
}
Persona::~Persona(){}
void Persona :: setNom(string nom){
    nombre=nom;
}
void Persona :: setGen(int aux){
    genero=aux;
}
void Persona :: setIdent(int aux){
    identidad=aux;
}
string Persona :: getNom(){
    return nombre;
}
int Persona :: getGen(){
    return genero;
}
int Persona :: getIdent(){
    return identidad;
}
