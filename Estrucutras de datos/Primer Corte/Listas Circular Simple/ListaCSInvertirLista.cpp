#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
class ListaCS{
private:
    int dato;
    ListaCS *sig;
public:
    void crearCab(ListaCS *&cab,int dato){
        cab = new ListaCS;
        cab->dato = dato;
        cab->sig=cab;
    }
    void agregarNodo(ListaCS *&cab,int dato){
        ListaCS *aux=cab;
        while(aux->sig!=cab)//avanza el apuntador al final
            aux = aux->sig;
        aux->sig=new ListaCS;//crear un nuevo nodo
        aux=aux->sig;//avanzo el apuntador ya esta enlazado su parteanterior
        aux->dato = dato;//introduzco el dato
        aux->sig=cab;//enlazo el final de la lista con la cabeza siguientdo la estructura de la Listas Circulares
    }
    void crearLista(ListaCS *&cab){
        int dato=666;
        while(dato>0){
            cout<<"Dato: ";
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
    void mostrarLista(ListaCS *cab){
        ListaCS *aux=cab;
        while (aux->sig!=cab){
            cout<<"Dato: "<<aux->dato<<endl;
            aux= aux->sig;
        }
        cout<<"Dato: "<<aux->dato<<endl;
        system("pause");
    }
    int nodos(ListaCS *cab){
        ListaCS *aux=cab;
        int i=1;
        while(aux->sig!=cab){
            i++;
            aux=aux->sig;
        }
        return i;
    }
    void invertirL(ListaCS *&cab){
        ListaCS *aux=cab,*aux2=cab,*aux3=cab;
        int nNodos,dato,j=0;
        nNodos=nodos(cab);
        while(aux->sig!=cab){
            aux=aux->sig;

        }
        cout<<aux->dato<<endl;
        dato=aux->dato;
        for(int i=1;i<nNodos;i++){
            while(aux->sig->dato!=dato){
                aux=aux->sig;
            }
            cout<<aux->dato<<endl;
            dato=aux->dato;
        }
        system("pause");
    }

};
// INSERTE EL METODO DEL PROGRAMA
void letrero(){
	cout<<"*---------------------------------------*"<<endl;
	cout<<"*---------------Bienvenido--------------*"<<endl;
	cout<<"*---------------------------------------*"<<endl;
	cout<<"\nDescripcion del programa:"<<endl;
	cout<<"Este programa tiene como fin, mostrar la lista invertida "<<endl;//Escriba la descripcion aqui
}
void finDelPrograma(){
	cout<<"*---------------------------------------*"<<endl;
	cout<<"*-----------Fin del programa------------*"<<endl;
	cout<<"*---------------------------------------*"<<endl;
}
int menu(int opt){
	cout<<"Escoja una opcion\n 1)Lista invertida \n 2)Mostrar Lista\n 3)Salir del programa\n->";
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
			objeto.invertirL(cab);
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