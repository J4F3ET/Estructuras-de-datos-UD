#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
class ListaCD{
private:
    char dato;
    ListaCD *sig,*ant;
public:
    void crearCab(ListaCD *&cab,char dato){
        cab = new ListaCD;
        cab->dato = dato;
        cab->sig=cab->ant=cab;
    }
    void agregarNodo(ListaCD *&cab,char dato){
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
    void mostrarLista(ListaCD *cab){
        ListaCD *aux=cab;
        while (aux->sig!=cab){
            cout<<"Dato: "<<aux->dato<<endl;
            aux= aux->sig;
        }
        cout<<"Dato: "<<aux->dato<<endl;
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
	ListaCD objeto, *cab=NULL;
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