#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
int cantidadL1=1,cantidadL2=1;
class ListaCD{
private:
    int dato;
    ListaCD *sig,*ant;
public:
    void crearCab(ListaCD *&cab,int dato){
        cab = new ListaCD;
        cab->dato = dato;
        cab->sig=cab->ant=cab;
    }
    void agregarNodo(ListaCD *&cab,int dato){
        ListaCD *aux=cab;
        while(aux->sig!=cab)//avanza el apuntador al final
            aux = aux->sig;
        aux->sig=new ListaCD;//crear un nuevo nodo
        aux->sig->ant=aux;//antes de avanzar el apuntador va enlazar la parte sig del nuevo nodo a la parte ant con aux que se encuentra todavia en el nodo anterior al nuevo
        aux=aux->sig;//avanzo el apuntador ya esta enlazado su parteanterior
        aux->dato = dato;//introduzco el dato
        aux->sig=cab;//enlazo el final de la lista con la cabeza siguientdo la estructura de la Listas Circulares
        cab->ant=aux;//enlazo la cabeza con el ultimo nodo
    }
    void crearLista(ListaCD *&cab){
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
    void mostrarLista(ListaCD *cab){
        ListaCD *aux=cab;
        while (aux->sig!=cab){
            cout<<"Dato: "<<aux->dato<<endl;
            aux= aux->sig;
        }
        cout<<"Dato: "<<aux->dato<<endl;
        system("pause");
    }
     void sumaListas(ListaCD *cab,ListaCD *cab2,ListaCD *&cab3){
        ListaCD *aux=cab,*aux2=cab2,*aux3=cab3;
        int dato=1;
        while(aux->sig!=cab){
            if(!cab3){
                    crearCab(cab3,dato=aux->dato+aux2->dato);
                }else{
                    agregarNodo(cab3,dato=aux->dato+aux2->dato);
                }
            aux=aux->sig;
            aux2=aux2->sig;
        }
        agregarNodo(cab3,dato=aux->dato+aux2->dato);
    }
    void static contarNodos(ListaCD *cab,ListaCD *cab2,int &cantidadL1, int &cantidadL2){
        ListaCD *aux=cab,*aux2=cab2;
        while(aux->sig!=cab){
            aux=aux->sig;
            cantidadL1++;
        }
        while(aux2->sig!=cab2){
            aux2=aux2->sig;
            cantidadL2++;
        }
    }

};
// INSERTE EL METODO DEL PROGRAMA
void letrero(){
	cout<<"*---------------------------------------*"<<endl;
	cout<<"*---------------Bienvenido--------------*"<<endl;
	cout<<"*---------------------------------------*"<<endl;
	cout<<"\nDescripcion del programa:"<<endl;
	cout<<"Este programa tiene como fin de sumar las dos listas"<<endl;//Escriba la descripcion aqui
}
void finDelPrograma(){
	cout<<"*---------------------------------------*"<<endl;
	cout<<"*-----------Fin del programa------------*"<<endl;
	cout<<"*---------------------------------------*"<<endl;
}
int menu(int opt){
	cout<<"Escoja una opcion\n 1)Suma de la dos listas \n 2)Mostrar Lista\n 3)Salir del programa\n->";
	cin>>opt;
	return opt;
}
int main(){
letrero();
    setlocale(LC_ALL, "");
	ListaCD objeto,*cab=NULL,*cab2=NULL,*cab3=NULL;
	int opt,aux;
    cout<<"*--------*"<<endl;
    cout<<" Lista 1"<<endl;
    cout<<"*--------*"<<endl;
	objeto.crearLista(cab);
    cout<<"*--------*"<<endl;
    cout<<" Lista 2"<<endl;
    cout<<"*--------*"<<endl;
    objeto.crearLista(cab2);
// SECCION DE APLICACION
	do{
		system("cls");
		opt=menu(opt);
		switch (opt)
		{
		case 1:
			// FUNCION DEL PROGRAMA
			cout<<"*-------------*"<<endl;
            cout<<"  Resultado"<<endl;
            cout<<"*-------------*"<<endl;
            ListaCD::contarNodos(cab,cab2,cantidadL1,cantidadL2);
            objeto.sumaListas(cab,cab2,cab3);
            objeto.mostrarLista(cab3);
			break;
		case 2:
			// MOSTRAR LISTA
			cout<<"Que lista quiere ver 1 o 2"<<endl;
            cin>>aux;
            if(aux==1){
                objeto.mostrarLista(cab);
            }else{
                if(aux==2){
                    objeto.mostrarLista(cab2);
                }else{
                    cout<<"Lista 3"<<endl;
                    objeto.mostrarLista(cab3);
                }
            }
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