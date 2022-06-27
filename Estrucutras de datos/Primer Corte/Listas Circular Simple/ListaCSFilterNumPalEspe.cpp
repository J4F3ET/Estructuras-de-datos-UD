#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <cctype>
using namespace std;
int numericos, alfabeticos,especiales;
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
    void filterCaracterLista(ListaCS *cab){
        ListaCS *aux=cab;
        while(aux->sig!=cab){
            // Filtro alfabetico
            if(isalpha(aux->dato)){
                alfabeticos++;
            }else{
                // filtro numerico
                if(isdigit(aux->dato)){
                    numericos++;
                }else{
                    // si no es alfabetico ni numerico es especial
                    especiales++;
                }
            }
            aux=aux->sig;
        }
        if(isalpha(aux->dato)){
                alfabeticos++;
            }else{
                // filtro numerico
                if(isdigit(aux->dato)){
                    numericos++;
                }else{
                    // si no es alfabetico ni numerico es especial
                    especiales++;
                }
            }
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
	cout<<"Escoja una opcion\n 1)Caracteres alfabeticos, numericos y especiales de la lista \n 2)Mostrar Lista\n 3)Salir del programa\n->";
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
			objeto.filterCaracterLista(cab);
            cout<<"Los datos:\n\tAlfabeticos: "<<alfabeticos<<"\n\tNumericos: "<<numericos<<"\n\tCaracteres especiales: "<<especiales<<endl;
			system("pause");
            alfabeticos=numericos=especiales=0;
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