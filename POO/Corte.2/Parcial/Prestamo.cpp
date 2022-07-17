#include<iostream>
#include<stdlib.h>
#include<string.h>
#include <sstream>
#include "Prestamo.h"
using namespace std;
#include "Libro.h"
Prestamo::Prestamo(){
    multa=Multa();
    hoy,limite=0;
}
Prestamo::~Prestamo(){}
void Prestamo:: setHoy(int aux){
    hoy=aux;
    if(hoy==1)
        limite=30;
    else{
        if(hoy==30)
            limite+=15;
        else{
            if(hoy>=45)
                limite+=100;
        }
    }
}
void Prestamo::setLibro(Libro aux){
    libro=aux;
}
void Prestamo::setMulta(){
    if(limite==hoy&&limite!=0&&hoy!=0){
        multa.setGravedad(1);
        multa.setValor(15000);
    }else{
        if(hoy>=45){
            multa.setGravedad(2);
            multa.setValor(25000);
        }else{
            multa.setGravedad(0);
            multa.setValor(0);
        }
    }
}
int Prestamo:: getHoy(){
    return hoy;
}
int Prestamo:: getLimite(){
    return limite;
}
string Prestamo::getLibro(int i){
    string aux[3],str;
    int ejemplares;
    aux[0]=libro.getNombreL();
    aux[1]=libro.getAutor();
    ejemplares=libro.getEjemplares();
    stringstream ss;  
    ss << ejemplares;  
    ss >> str;
    aux[2]=str;
    return aux[i];
}