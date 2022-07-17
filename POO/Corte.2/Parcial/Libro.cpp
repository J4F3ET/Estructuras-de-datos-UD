#include<iostream>
#include<stdlib.h>
#include<string.h>
#include "Libro.h"
#include "Ejemplares.h"
Libro::Libro(){
    string aux="INDEFINIDO";
    nombreL="INDEFINIDO";
    autor.setNombreA(aux);
    ejemplares.setCantidad(0);
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
    ejemplares.setCantidad(aux);
}
string Libro:: getNombreL(){
    return nombreL;
}
string Libro:: getAutor(){
    return autor.getNombreA();
}
int Libro:: getEjemplares(){
    int aux=ejemplares.getCantidad();
    return aux;
}
