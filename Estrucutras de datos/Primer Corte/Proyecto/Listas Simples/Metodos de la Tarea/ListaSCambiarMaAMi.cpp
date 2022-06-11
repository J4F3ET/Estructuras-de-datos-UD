#include <iostream>
#include <string.h>
#include <cctype>
#include <locale.h>
#include <stdlib.h>
using namespace std;
class ListaS{
	char dato;
	ListaS *sig;
	public:
		void crearCab(ListaS *&, char);
		void agregarNodo(ListaS *&,char);
		void mostrar(ListaS *);
		void crearL(ListaS *&);
        void cambiarMayusAMinus(ListaS *&);
};
void ListaS::crearCab(ListaS *&cab, char dato){
	cab = new ListaS;
	cab -> dato=dato;
	cab -> sig = NULL;
}
void ListaS::agregarNodo(ListaS *&cab, char dato){
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
	char dato = 'a';
	while (dato!='0'){
		cout<<"Caracter -> ";
		cin>>dato;
		if(dato!='0'){
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
	while(aux){
		cout<<"Dato = "<<aux->dato<<endl;
		aux=aux->sig;
	}
    system("pause");
}
void ListaS::cambiarMayusAMinus(ListaS *&cab){
    ListaS *aux=cab;
    while(aux){
        // mayusculas a minusculas
        if(aux->dato>=65&&aux->dato<=90){
            aux->dato=aux->dato+32;
        }else if(aux->dato>=97&&aux->dato<=122){
            aux->dato=aux->dato-32;
        }else{
            char ene=164;
            cout<<aux->dato<<"<- El dato no es alfabetico y en dado que sea alfabetico es "<<ene<<endl;
        }

        aux=aux->sig;
    }
    cout<<"Operación finalizada, porfavor vizualice la lista con opcion 2 del menu"<<endl;
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
	cout<<"Escoja una opcion\n 1)Cambiar mayusculas a minusculas y viceversa\n 2)Mostrar Lista\n 3)Salir del programa\n->";
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
            objeto.cambiarMayusAMinus(cab);
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