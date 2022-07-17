#include<iostream>
#include<stdlib.h>
#include<string.h>
#include"Lector.h"
#include"Libro.h"
#include "LibreriaM.cpp"
using namespace std;
int main(){
	int opt;
	Libro Libro[3];
	Lector lector[3];
	do{
		letrero();
		menu();
		cout<<"Escoja una de las opciones >";
		cin>>opt;
		switch(opt){
		case 1://Registrar
			system("cls");
			verRegistro();
			menu2();
			cout<<"Escoja una de las opciones >";
			cin>>opt;
			do{
				switch (opt){
				case 1://Registrar persona
					system("cls");
					registro();
					for(int i=0;i<3;i++){
						if(lector[i].getNombre()=="INDEFINIDO"){
							string auxS;
							double auxD;
							cout<<"------------Persona-#"<<i+1<<"-----------"<<endl;
							cout<<"Nombre"<<endl;
							cin>>auxS;
							lector[i].setNombre(auxS);
							cin.ignore();
							cout<<"Numero de Identidad (Cedula)"<<endl;
							cin>>auxD;
							lector[i].setId(auxD);
							cout<<"Proyecto curricular"<<endl;
							lector[i].setPrograma(auxS);
							getline(cin,auxS);
							cin.ignore();
							do{
								opt=0;
								menu3();
								cout<<"Escoja una de las opciones >";
								cin>>opt;
							}while(opt==1||opt==2);
							if(opt==1){//Estudiante
								int auxE;
								float auxF;
								cout<<"Semestre Actual"<<endl;
								cin>>auxE;
								lector[i].setSemestre(auxE);
								cout<<"Promedio"<<endl;
								cin>>auxF;
								lector[i].setPromedio(auxF);
							}else{//Profesor
								
							}
							cout<<""<<endl;
							cout<<""<<endl;
							i=100;
						}
					}
					finRegistro();
					system("pause");
					break;
				case 2://Registrar libro
					system("cls");
					registro();
					finRegistro();
					system("pause");
					break;
				case 3://Registrar persona
					break;
				default:
					cout<<"Opcion incorrecta\nPor favor intentelo denuevo."<<endl;
					system("pause");
					system("cls");		
					break;
				}
			}while(opt!=3);
			system("pause");
			break;
		case 2://Ver Pérsona
			system("cls");
			system("pause");
			break;
		case 3://Pedir libro
			system("cls");
			system("pause");
			break;
		case 4://Consutar
			system("cls");
			system("pause");
			break;
		case 5://Salir
			break;
		default:
			cout<<"Opcion incorrecta\nPor favor intentelo denuevo."<<endl;
			system("pause");
			system("cls");
			break;
		}
	}while(opt!=5);
	fin();
	return 0;
}
