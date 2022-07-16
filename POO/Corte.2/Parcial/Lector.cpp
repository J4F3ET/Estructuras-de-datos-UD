#include "Lector.h"
Lector::Lector():Estudiante(),Profesor(){
    estado=0;
}
Lector::~Lector(){}
void Lector::setEstado(int aux){
    estado=aux;
}
string Lector::getEstado(){
    string estadoS;
    if(estado==1)
        estadoS="ACTIVO";
    else
        estadoS="INACTIVO";
    return estadoS;
}
void Lector::setDireccion(string aux){
    direccion.setDireccion(aux);
}
string Lector::getDireccion(){
    return direccion.getDireccion();
}