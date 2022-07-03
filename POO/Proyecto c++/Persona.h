#ifndef PERSONA_H
#define PERSONA_H
#include <string.h>
#include <iostream>
using namespace std;
class Persona{
    private:
        string nombre;
        int genero,identidad;
    public:
        Persona();
        ~Persona();
        void setNom(string nom);
        void setGen(int aux);
        void setIdent(int aux);
        string getNom();
        int getGen();
        int getIdent();
};
#endif
