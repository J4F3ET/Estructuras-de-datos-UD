#include<iostream>
#include<stdlib.h>
#include<string.h>
#include "Libro.h"
#include "Ejemplares.h"
Libro::Libro(){
    string aux="INDEFINIDO";
    nombreL="INDEFINIDO";
    autor.setNombreA(aux);
    Ejemplares nombreL;
    ejemplares=nombreL.getCantidad();
}
Libro::~Libro(){

}
void Libro:: setNombreL(string aux){
    nombreL=aux;
}
void Libro:: setAutorL(string aux){
    autor.setNombreA(aux);
}
void Libro:: setEjemplares(int aux){
    Ejemplares nombreL;
    nombreL.setCantidad(aux);
}
string Libro:: getNombreL(){
    return nombreL;
}
string Libro:: getAutor(){
    return autor.getNombreA();
}
int Libro:: getEjemplares(){
    return ejemplares;
}