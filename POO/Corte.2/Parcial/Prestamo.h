#include<iostream>
#include<stdlib.h>
#include<string.h>
#ifndef PRESTAMO_H
#define PRESTAMO_H
using namespace std;
#include "Libro.h"
#include "Multa.h"
#include "Lector.h"
class Libro; 
class Prestamo{
	private:
		int hoy,limite;
		Libro libro;
		Multa multa;
		Lector lector;
	public:
		Prestamo();
		~Prestamo();
		void setHoy(int);
		void setLimite(int);
		void setLibro(Libro);
		void setMulta();
		int getHoy();
		int getLimite();
		string getLibro(int);
};
#endif
