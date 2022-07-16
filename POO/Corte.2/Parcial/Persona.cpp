#include<iostream>
#include<stdlib.h>
#include<string.h>
#include "Persona.h"
using namespace std;
Persona::Persona(){
    nombre="INDEFINIDO";
    id=0;
    programa="INDEFINIDO";
}
Persona::~Persona(){}
void Persona::setNombre(string aux){
    nombre=aux;
}
void Persona::setPrograma(string aux){
    programa=aux;
}
void Persona::setId(double aux){
    id=aux;
}
string Persona::getNombre(){
    return nombre;
}
string Persona::getPrograma(){
    return programa;
}
double Persona::getId(){
    return id;
}