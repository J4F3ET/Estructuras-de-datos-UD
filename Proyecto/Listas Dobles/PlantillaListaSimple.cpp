#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std; 
class ListaS{
	int dato;
	ListaS *sig;
	public:
		void crearCab(ListaS *&, int);
		void agregarNodo(ListaS *&,int);
		void crearL(ListaS *&);
		void mostrar(ListaS *);
};
void ListaS::crearCab(ListaS *&cab, int dato){
	cab = new ListaS;
	cab -> dato=dato;
	cab -> sig = NULL;
}
void ListaS::agregarNodo(ListaS *&cab, int dato){
	ListaS *aux = cab;
	while(aux->sig){
		aux=aux->sig;
	}
	aux -> sig = new ListaS;
	aux=aux->sig;
	aux-> dato=dato;
	aux->sig=NULL; 
}
void ListaS::crearL(ListaS *&cab){
	int dato = 666;
	cout<<"Creandor de la lista\nEscriba un numero menor a 1 para finalizar la lista\nPor favor rellene la lista"<<endl;
	cout<<"----------"<<endl;
	while (dato>0){
		cout<<"Numero = ";
		cin>>dato;
		if(dato>0){
			if(!cab){
				crearCab(cab,dato);
			}else{
				agregarNodo(cab,dato);
			}
		}
	}
}
void ListaS::mostrar(ListaS *cab){
	ListaS*aux=cab;
	cout<<"--------------"<<endl;
	while(aux){
		cout<<"Dato = "<<aux->dato<<endl;
		aux=aux->sig;
	}
	cout<<"--------------"<<endl;
	system("pause");
}
void letrero(){
	cout<<"*---------------------------------------*"<<endl;
	cout<<"*---------------Bienvenido--------------*"<<endl;
	cout<<"*---------------------------------------*"<<endl;
	cout<<"\nDescripcion del programa:"<<endl;
	cout<<"Este programa tiene como fin "<<endl;//Escriba la descripcion aqui
}
void finDelPrograma(){
	cout<<"*---------------------------------------*"<<endl;
	cout<<"*-----------Fin del programa------------*"<<endl;
	cout<<"*---------------------------------------*"<<endl;
}
int menu(int opt){
	cout<<"Escoja una opcion\n 1)INTRODUZACA FUNCION DEL PROGRAMA \n 2)Mostrar Lista\n 3)Salir del programa\n->";
	cin>>opt;
	return opt;
}
int main(){
// INICIO DEL PROGRAMA
	letrero();
    setlocale(LC_ALL, "");
	ListaS objeto, *cab=NULL;
	objeto.crearL(cab);
	int opt,aux;
    
// SECCION DE APLICACION
	do{
		system("cls");
		opt=menu(opt);
		switch (opt)
		{
		case 1:
			// FUNCION DEL PROGRAMA
			
			break;
		case 2:
			// MOSTRAR LISTA
			objeto.mostrar(cab);
			break;
		case 3:
			// FIN DEL PROGRAMA
			break;
		default:
			cout<<"Opcion incorrecta\nPor favor intentelo denuevo."<<endl;
			opt=4;
			system("pause");
			break;
		}
	}while(opt!=3);
// FIN DE SECCION DE APLICACION
    finDelPrograma();//FIN DEL PROGRAMA :V
}
