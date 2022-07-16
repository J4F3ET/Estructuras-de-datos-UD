#include<iostream>
#include<stdlib.h>
#include<string.h>
#ifndef LECTOR_H
#define LECTOR_H
#include "Estudiante.h"
#include "Profesor.h"
#include "Direccion.h"
using namespace std;
class Lector : public Estudiante,public Profesor{
	private:
		int estado;
		Direccion direccion;
	public:
		Lector();
		~Lector();
		void setEstado(int);
		string getEstado();
		void setDireccion(string);
		string getDireccion();
};
#endif
