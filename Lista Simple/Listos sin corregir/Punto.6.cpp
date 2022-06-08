#include <iostream>
#include <string.h>
#include <cctype>
#include <algorithm>
using namespace std;
int especial=0,numericos=0,alfabeticos=0,longitud=0;
class ListaSimple{
    char dato[100];
    ListaSimple *sig;
    public:
        // CABEZA DE CUALQUIER LISTA
        void crearCab(ListaSimple *&cab,char dato[]){
            cab = new ListaSimple;
            strcpy(cab->dato,dato);
            cab->sig=NULL;
        }
        void crearNodo(ListaSimple *&cab, char dato[] ){
            ListaSimple *aux=cab;
            while(aux->sig){//Si existe auxiliar en su parte siguiente entonces 
                // movera el auxliar a su siguiente nodo
                aux=aux->sig;
            }
            // aux debe estar apuntando a null gracias al WHILE por lo tanto se crea un nuevo nodo 
            // y se mueve aux a su parte siguiente
            aux -> sig = new ListaSimple;
	        aux=aux->sig;
	        strcpy(aux->dato,dato);
	        aux->sig=NULL; 
        }
        void crearLista(ListaSimple *&cab){
            char dato[100] ={'a'};
            cout<<"\nEscriba Porfavor\nInicio"<<endl;
	        while (dato[0] !='0'){
                cin>>dato;
                longitud=strlen(dato);
                if(dato[0]!='0'){
                    numericos++;
                }
                if(dato[0] !='0'){
                    if(!cab){
                        crearCab(cab,dato);
                    }else{
                        crearNodo(cab,dato);
                    }
                }
            }
            cout<<"Fin"<<endl;
        }
       void mostrarLista(ListaSimple *cab){
	        ListaSimple *aux=cab;
            cout<<"*------------------*"<<endl;
            cout<<" Inicio de la lista"<<endl;
            cout<<"*------------------*"<<endl;
	        while(aux){
		    cout<<aux->dato<<endl;
		    aux=aux->sig;
	        }
            cout<<"*------------------*"<<endl;
            cout<<"  Fin de la lista"<<endl;
            cout<<"*------------------*"<<endl;
        }
};
void letrero(){
    cout<<"*---------------------------------------*"<<endl;
    cout<<"*---------------Bienvenido--------------*"<<endl;
    cout<<"*---------------------------------------*"<<endl;
    cout<<"\nCuantas palabras contiene la lista"<<endl;
}
int main()
{
    letrero();
    int especial;
    ListaSimple lista,*cab=NULL;
    lista.crearLista(cab);
    lista.mostrarLista(cab);
    cout<<"La lista contiene ->"<<numericos<<" palabras"<<endl;
    return 0;
}
