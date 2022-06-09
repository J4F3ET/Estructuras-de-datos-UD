// LISTAS DOBLEMENTE ENLAZADA
#include <iostream>
#include <stdlib.h>
using namespace std;
int cantidadL1,cantidadL2;
class ListaD{
    int dato;
    ListaD *sig,*ant;
    public:
        void crearCab(ListaD *&cab, int dato){
            cab=new ListaD;
            cab->dato=dato;
            cab->sig=cab->ant=NULL;
        }
        void agregarNodo(ListaD *&cab,int dato){
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
            // INTRODUCE EL DATO
            aux->dato=dato;
            // AUXILIAR EN SU PARTE SIGUIENTE VA AQUEDAR APUNTANDO A NULO
            aux->sig=NULL;
        }
        void crearListaD(ListaD *&cab){
            int dato=666;
            cout<<"Querido usuario introduzca los datos\n";
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
        void sumaListas(ListaD *cab,ListaD *cab2,ListaD *&cab3){
            ListaD *aux=cab,*aux2=cab2,*aux3=cab3;
            int dato=1;
            while(aux){
                if(!cab3){
                        crearCab(cab3,dato=aux->dato+aux2->dato);
                    }else{
                        agregarNodo(cab3,dato=aux->dato+aux2->dato);
                    }
                aux=aux->sig;
                aux2=aux2->sig;
            }
        }
        void static contarNodos(ListaD *cab,ListaD *cab2,int &cantidadL1, int &cantidadL2){
            ListaD *aux=cab,*aux2=cab2;
            while(aux){
                aux=aux->sig;
                cantidadL1++;
            }
            while(aux2){
                aux2=aux2->sig;
                cantidadL2++;
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
	ListaD lista1,lista2,lista3,*cab=NULL,*cab2=NULL,*cab3=NULL;
    cout<<"*--------*"<<endl;
    cout<<" Lista 1"<<endl;
    cout<<"*--------*"<<endl;
	lista1.crearListaD(cab);
    cout<<"*--------*"<<endl;
    cout<<" Lista 2"<<endl;
    cout<<"*--------*"<<endl;
    lista2.crearListaD(cab2);
	cout<<"*-------------*"<<endl;
    cout<<"  Resultado"<<endl;
    cout<<"*-------------*"<<endl;
    ListaD::contarNodos(cab,cab2,cantidadL1,cantidadL2);
    cout<<"Cantidad de nodos\n"<<"Lista 1 ->"<<cantidadL1<<endl<<"Lista 2 ->"<<cantidadL2<<endl;
    if(cantidadL1==cantidadL2){
        lista3.sumaListas(cab,cab2,cab3);
        cout<<"*--------*"<<endl;
        cout<<" Lista 3"<<endl;
        cout<<"*--------*"<<endl;
        lista3.mostrar(cab3);
    }else{
        cout<<"La cantidad de numeros digitas no concuerdan entre listas\nes imposible sumar las dos listas\nGracias por su atencion";
        return 0;
    }
}