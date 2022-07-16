#include<iostream>
#include<stdlib.h>
#include<string.h>
#ifndef AUTOR_H
#define AUTOR_H
using namespace std;
class Autor{
	private:
	 string nombreA;
	public:
		Autor();
		~Autor();
		void setNombreA(string);
		string getNombreA();
};
#endif
