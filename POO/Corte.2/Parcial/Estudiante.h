#include<iostream>
#include<stdlib.h>
#include<string.h>
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "Persona.h"
using namespace std;
class Estudiante:virtual public Persona{
	private:
		string rol;
		int semestre;
		float promedio;
	public:
		Estudiante();
		~Estudiante();
		void setSemestre(int);
		void setPromedio(float);
		int getSemestre();
		float getPromedio();
};
#endif
