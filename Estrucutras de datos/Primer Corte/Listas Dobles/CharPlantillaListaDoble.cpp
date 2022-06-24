#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std; 
class ListaD{
	char dato;
	ListaD *sig,*ant;
	public:
		void crearCab(ListaD *&, char);
		void agregarNodo(ListaD *&,char);
		void crearL(ListaD *&);
		void mostrar(ListaD *);

};
void ListaD::crearCab(ListaD *&cab, char dato){
	cab=new ListaD;
    cab->dato=dato;
    cab->sig=cab->ant=NULL;
}
void ListaD::agregarNodo(ListaD *&cab, char dato){
	ListaD *aux=cab;
	while(aux->sig){ //Equivale a while(aux->sig!=NULL){}
		aux=aux->sig;    
	}
	// CREA NODO
	aux->sig=new ListaD;
	// UBICA ANT APUNTANDO AL NODO ANTERIOR DEL NODO ACTUAL
	aux->sig->ant=aux;
	// HACE ABANZAR AL AUXILIAR AL NODO CREADO
	aux=aux->sig;
	// charRODUCE EL DATO
	aux->dato=dato;
	// AUXILIAR EN SU PARTE SIGUIENTE VA AQUEDAR APUNTANDO A NULO
	aux->sig=NULL;
}
void ListaD::crearL(ListaD *&cab){
	char dato='a';
	cout<<"Creandor de la lista\nEscriba un numero menor a 1 para finalizar la lista\nPor favor rellene la lista"<<endl;
	cout<<"----------"<<endl;
	while(dato!='0'){
		cout<<"Dato: ";
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
void ListaD::mostrar(ListaD *cab){
	ListaD *aux=cab;
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
	ListaD objeto, *cab=NULL;
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
