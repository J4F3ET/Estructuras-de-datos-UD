#include<iostream>
#include<stdlib.h>
#include<string.h>
#ifndef LIBRO_H
#define LIBRO_H
#include "Autor.h"
#include "Ejemplares.h"
using namespace std;
class Libro{
	string nombreL;
	Autor autor;
	int ejemplares;
	public:
		Libro();
		~Libro();
		void setNombreL(string);
		void setAutorL(string);
		void setEjemplares(int);
		string getNombreL();
		string getAutor();
		int getEjemplares();

};

#endif
