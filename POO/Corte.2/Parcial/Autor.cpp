#include "Autor.h"
Autor::Autor(){
    nombreA="INDEFINIDO";
}
Autor::~Autor(){}
void Autor::setNombreA(string aux){
    nombreA=aux;
}
string Autor::getNombreA(){
    return nombreA;
}