#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Menus.h"
using namespace std;
void Menus::menu(){
    cout<<"1. Registrar persona \n2. Ver persona \n3. Existencia de productos\n4. Salir"<<endl;
}
void Menus::menuPersona(){
    cout<<"Persona tipo\n1. Cliente\n2. Proveedor\n3. Salir"<<endl; 
}
void Menus::menuPersonaProveedor(){
    cout<<"Tipo de proveedor\n1. Constante\n2. Ocacional\n3. Salir"<<endl;
}
void Menus::letrero(){
    cout<<"*---------------------------------------*"<<endl;
	cout<<"*---------------Bienvenido--------------*"<<endl;
	cout<<"*---------------------------------------*"<<endl;
}
void Menus::fin(){
	cout<<"*---------------------------------------*"<<endl;
	cout<<"*-----------Fin del programa------------*"<<endl;
	cout<<"*---------------------------------------*"<<endl;
}
void Menus::registro(){
    cout<<"*---------------------------------------*"<<endl;
    cout<<"*-----------Comenzando registro---------*"<<endl;
	cout<<"*---------------------------------------*"<<endl; 
}
void Menus::verRegistro(){
    cout<<"*---------------------------------------*"<<endl;
    cout<<"*-----------------Registro--------------*"<<endl;
	cout<<"*---------------------------------------*"<<endl; 
}
void Menus::finRegistro(){
    cout<<"*---------------Fin persona-------------*"<<endl;
    cout<<"*---------------------------------------*"<<endl;
}
void Menus::menuExiste(){
    cout<<"1. Especificar persona \n2. Ver todos \n3. Salir"<<endl;
}