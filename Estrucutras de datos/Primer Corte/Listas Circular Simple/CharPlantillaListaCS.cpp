#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
class ListaCS{
private:
    char dato;
    ListaCS *sig;
public:
    void crearCab(ListaCS *&cab,char dato){
        cab = new ListaCS;
        cab->dato = dato;
        cab->sig=cab;
    }
    void agregarNodo(ListaCS *&cab,char dato){
        ListaCS *aux=cab;
        while(aux->sig!=cab)//avanza el apuntador al final
            aux = aux->sig;
        aux->sig=new ListaCS;//crear un nuevo nodo
        aux=aux->sig;//avanzo el apuntador ya esta enlazado su parteanterior
        aux->dato = dato;//introduzco el dato
        aux->sig=cab;//enlazo el final de la lista con la cabeza siguientdo la estructura de la Listas Circulares
    }
    void crearLista(ListaCS *&cab){
        char dato='a';
        cout<<"Escriba porfavor"<<endl;
        while(dato!='0'){
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
    void mostrarLista(ListaCS *cab){
        ListaCS *aux=cab;
        cout<<"Lista"<<endl;
        while (aux->sig!=cab){
            cout<<aux->dato<<endl;
            aux= aux->sig;
        }
        cout<<aux->dato<<endl;
        system("pause");
    }

};
// INSERTE EL METODO DEL PROGRAMA
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
letrero();
    setlocale(LC_ALL, "");
	ListaCS objeto, *cab=NULL;
	objeto.crearLista(cab);
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
			objeto.mostrarLista(cab);
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