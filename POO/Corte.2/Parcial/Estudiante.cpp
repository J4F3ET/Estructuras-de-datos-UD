#include<iostream>
#include<stdlib.h>
#include<string.h>
#include "Estudiante.h"
Estudiante::Estudiante():Persona(){
    rol="ESTUDIANTE";
    semestre=0;
    promedio=0;
}
Estudiante::~Estudiante(){}
void Estudiante::setSemestre(int aux){
    semestre=aux;
}
void Estudiante::setPromedio(float aux){
    promedio=aux;
}
int Estudiante::getSemestre(){
    return semestre;
}
float Estudiante::getPromedio(){
    return promedio;
}
