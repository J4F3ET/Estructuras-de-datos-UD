#include<iostream>
#include<stdlib.h>
#include<string.h>
#include "Profesor.h"
using namespace std;
Profesor::Profesor():Persona(){
    rol="PROFESOR";
    for(int i=0;i<3;i++){
        materias[i]="INDEFINIDO";
    }
}
Profesor::~Profesor(){
}
void Profesor::setMaterias(string aux[3]){
    for(int i=0;i<3;i++){
        materias[i]=aux[i];
    }
}
string Profesor::getMaterias(int i){
    return materias[i];
}
