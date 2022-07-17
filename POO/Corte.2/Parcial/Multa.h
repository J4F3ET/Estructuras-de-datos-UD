#include<iostream>
#ifndef MULTA_H
#define MULTA_H
using namespace std;
class Multa{
	private:
		int gravedad;
		double valor;
	public:
		Multa();
		~Multa();
		void setGravedad(int);
		void setValor(double);
		int getGravedad();
		double getValor();
};
#endif
