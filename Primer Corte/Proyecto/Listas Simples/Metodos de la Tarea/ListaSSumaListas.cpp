#include <iostream>
using namespace std;
int cantidadL1,cantidadL2;
class ListaSimple{
    int dato;
    ListaSimple *sig;
    public:
        // CABEZA DE CUALQUIER LISTA
        void crearCab(ListaSimple *&cab,int dato){
            cab = new ListaSimple;
            cab->dato=dato;
            cab->sig=NULL;
        }
        void crearNodo(ListaSimple *&cab, int dato){
            ListaSimple *aux=cab;
            while(aux->sig){//Si existe auxiliar en su parte siguiente entonces 
                // movera el auxliar a su siguiente nodo
                aux=aux->sig;
            }
            // aux debe estar apuntando a null gracias al WHILE por lo tanto se crea un nuevo nodo 
            // y se mueve aux a su parte siguiente
            aux -> sig = new ListaSimple;
	        aux=aux->sig;
	        aux-> dato=dato;
	        aux->sig=NULL; 
        }
        void crearLista(ListaSimple *&cab){
            int dato = 666;
	        while (dato>0){
                cout<<"Dato -> ";
                cin>>dato;
                if(dato>0){
                    if(!cab){
                        crearCab(cab,dato);
                    }else{
                        crearNodo(cab,dato);
                    }
                }
	        }
        }
        void mostrarLista(ListaSimple *cab){
	        ListaSimple *aux=cab;
	        while(aux){
		    cout<<"Dato = "<<aux->dato<<endl;
		    aux=aux->sig;
	        }
        }
        void sumaListas(ListaSimple *cab,ListaSimple *cab2,ListaSimple *&cab3){
            ListaSimple *aux=cab,*aux2=cab2,*aux3=cab3;
            int dato=1;
            while(aux){
                if(!cab3){
                        crearCab(cab3,dato=aux->dato+aux2->dato);
                    }else{
                        crearNodo(cab3,dato=aux->dato+aux2->dato);
                    }
                aux=aux->sig;
                aux2=aux2->sig;
            }
        }
        void static contarNodos(ListaSimple *cab,ListaSimple *cab2,int &cantidadL1, int &cantidadL2){
            ListaSimple *aux=cab,*aux2=cab2;
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
	ListaSimple lista1,lista2,lista3,*cab=NULL,*cab2=NULL,*cab3=NULL;
    cout<<"*--------*"<<endl;
    cout<<" Lista 1"<<endl;
    cout<<"*--------*"<<endl;
	lista1.crearLista(cab);
    cout<<"*--------*"<<endl;
    cout<<" Lista 2"<<endl;
    cout<<"*--------*"<<endl;
    lista2.crearLista(cab2);
	cout<<"*-------------*"<<endl;
    cout<<"  Resultado"<<endl;
    cout<<"*-------------*"<<endl;
    ListaSimple::contarNodos(cab,cab2,cantidadL1,cantidadL2);
    cout<<"Cantidad de nodos\n"<<"Lista 1 ->"<<cantidadL1<<endl<<"Lista 2 ->"<<cantidadL2<<endl;
    if(cantidadL1==cantidadL2){
        lista3.sumaListas(cab,cab2,cab3);
        lista3.mostrarLista(cab3);
    }else{
        cout<<"La cantidad de numeros digitas no concuerdan entre listas\nes imposible sumar las dos listas\nGracias por su atencion";
        return 0;
    }
}