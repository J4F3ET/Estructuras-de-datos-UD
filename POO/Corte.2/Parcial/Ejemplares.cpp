#include<iostream>
#include<stdlib.h>
#include<string.h>
#include "Ejemplares.h"
using namespace std;
Ejemplares::Ejemplares(){
    cantidad=0;
}
Ejemplares::~Ejemplares(){}
void Ejemplares::setCantidad(int aux){
    cantidad=cantidad+aux;
}
int Ejemplares::getCantidad(){
    return cantidad;
}