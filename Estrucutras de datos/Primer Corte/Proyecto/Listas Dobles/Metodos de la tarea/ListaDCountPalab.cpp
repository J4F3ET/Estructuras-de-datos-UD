// ListaD DOBLEMENTE ENLAZADA
#include <iostream>
#include <stdlib.h>
#include <cctype>
#include <string.h>
#include <cctype>
#include <algorithm>
using namespace std;
int especial=0,numericos=0,alfabeticos=0,longitud=0;
class ListaD{
    char dato[100];
    ListaD *sig,*ant;
    public:
        void crearCab(ListaD *&cab, char dato[]){
            cab=new ListaD;
            strcpy(cab->dato,dato);
            cab->sig=cab->ant=NULL;
        }
        void agregarNodo(ListaD *&cab,char dato[]){
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
            // charRODUCE EL DATO[100]
            strcpy(aux->dato,dato);
            // AUXILIAR EN SU PARTE SIGUIENTE VA AQUEDAR APUNTANDO A NULO
            aux->sig=NULL;
        }
        void crearListaD(ListaD *&cab){
            char dato[100]={'a'};
            cout<<"Querido usuario la palabra\n";
            while(dato[0]!='0'){
                cin>>dato;
                if(dato[0]!='0'){
                    numericos++;
                    if(!cab){
                        crearCab(cab,dato);
                    }else{
                        agregarNodo(cab,dato);
                    }
                }

            }

        }
        void mostrar(ListaD *cab){
            ListaD *aux=cab;
            while(aux){
                cout<<"Palabra: "<<aux->dato<<endl;
                aux=aux->sig;
            }
        }
        void mostraranterior(ListaD *cab){
            ListaD *aux=cab;
            while(aux->sig){
                aux=aux->sig;
            }
//            recorre al auxiliar de atras a adelante al final aux nunca es nullo por lotanto llega asta la cabeza 
            while(aux!=NULL){
                cout<<"Dato: "<<aux->dato<<endl;
                aux=aux->ant;
            }
        }
};
void letrero(){
    cout<<"*---------------------------------------*"<<endl;
    cout<<"*---------------Bienvenido--------------*"<<endl;
    cout<<"*---------------------------------------*"<<endl;
}
int main(){
    letrero();
    ListaD *cab=NULL,objeto;
    objeto.crearListaD(cab);
    objeto.mostrar(cab);
    cout<<"La lista contiene ->"<<numericos<<" palabras"<<endl;
    // objeto.mostraranterior(cab);
}