// LISTAS DOBLEMENTE ENLAZADA
#include <iostream>
#include <stdlib.h>
#include <cctype>
using namespace std;
class ListaD{
    char dato;
    ListaD *sig,*ant;
    public:
        void crearCab(ListaD *&cab, char dato){
            cab=new ListaD;
            cab->dato=dato;
            cab->sig=cab->ant=NULL;
        }
        void agregarNodo(ListaD *&cab,char dato){
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
        void crearListaD(ListaD *&cab){
            char dato='a';
            cout<<"Querido usuario introduzca los datos\n";
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
        void mostrar(ListaD *cab){
            ListaD *aux=cab;
            while(aux){
                cout<<"Dato: "<<aux->dato<<endl;
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
        void cambiarMayusAMinus(ListaD *&cab){
            ListaD *aux=cab;
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
    objeto.cambiarMayusAMinus(cab);
    objeto.mostrar(cab);
    // objeto.mostraranterior(cab);
}

