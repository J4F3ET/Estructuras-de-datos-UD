#include<iostream>
#include<stdlib.h>
#include<string.h>
#ifndef EJEMPLARES_H
#define EJEMPLARES_H
using namespace std;
class Ejemplares{
	private:
		int cantidad;
	public:
		Ejemplares();
		~Ejemplares();
		void setCantidad(int);
		int getCantidad();
	protected:
};
#endif
