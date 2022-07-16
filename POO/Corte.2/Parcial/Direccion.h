#include<iostream>
#include<stdlib.h>
#include<string.h>
#ifndef DIRECCION_H
#define DIRECCION_H
using namespace std;
class Direccion{
	private:
		string direccion;
	public:
		Direccion();
		~Direccion();
		void setDireccion(string);
		string getDireccion();
};

#endif
