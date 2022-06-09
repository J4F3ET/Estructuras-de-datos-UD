// ListaD DOBLEMENTE ENLAZADA
#include <iostream>
#include <stdlib.h>
#include <cctype>
using namespace std;
int longitud;
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
            cout<<"Querido usuario la palabra\n";
            while(dato!='0'){
                cin>>dato;
                if(dato!='0'){
                    longitud++;
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
        void palidroma(ListaD *&cab){
            ListaD *aux=cab;
            char pal[longitud],palInv[longitud];
            int i=0;
            while(aux->sig){
                pal[i]=aux->dato;
                aux=aux->sig;
                if(aux->sig==NULL){
                	i++;
                	pal[i]=aux->dato;
				}
                i++;
            }
            i=0;
            cout<<aux->dato<<endl;
            while(aux){
                palInv[i]=aux->dato;
                aux=aux->ant;
                i++;
            }
            string palabra=pal,palabraInversa=palInv;
            if(palabra==palabraInversa){
                cout<<"Palabra palindroma detectada -> "<<palabra<<endl;
            }else{
                cout<<"Palabra palindroma no detectada -> "<<palabra<<endl;
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
    objeto.palidroma(cab);
    objeto.mostrar(cab);
    // objeto.mostraranterior(cab);
}

