#include "Multa.h"
Multa::Multa(){
    gravedad=valor=0;
}
Multa::~Multa(){}
void Multa:: setGravedad(int aux){
    gravedad=aux;
}
void Multa:: setValor(double aux){
    valor=aux;
}
int Multa:: getGravedad(){
    return gravedad;
}
double Multa:: getValor(){
    return valor;
}
