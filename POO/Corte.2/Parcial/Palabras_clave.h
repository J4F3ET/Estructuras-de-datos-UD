#include<iostream>
#include<stdlib.h>
#include<string.h>
#ifndef PALABRAS_CLAVE_H
#define PALABRAS_CLAVE_H
#include "Libro.h"
class Palabras_clave{
	private:
		string palabra;
	public:
		Palabras_clave();
		~Palabras_clave();
		void setPalabra(string);
		string getPalabra();
		bool buscar(Libro);
};
#endif