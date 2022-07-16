#include<iostream>
#include<stdlib.h>
#include<string.h>
#ifndef PROFESOR_H
#define PROFESOR_H
#include "Persona.h"
using namespace std;
class Profesor :virtual public Persona{
	private:
		string rol;
		string materias[3];
	public:
		Profesor();
		~Profesor();
		void setMaterias(string[]);
		string getMaterias(int);
};

#endif
