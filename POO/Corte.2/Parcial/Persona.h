#include<iostream>
#include<stdlib.h>
#include<string.h>
#ifndef PERSONA_H
#define PERSONA_H
using namespace std;
class Persona{
	private:
		string nombre,programa;
		double id;
	public:
		Persona();
		~Persona();
		void setNombre(string);
		void setPrograma(string);
		void setId(double);
		string getNombre();
		string getPrograma();
		double getId();
};
#endif
