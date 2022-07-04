#include <iostream>
#include <stdlib.h>
using namespace std;
class Pila{
    int dato;
    Pila *sig;
    public:
        void iniciarPila(Pila *&cab){
            cab=new Pila;
            cab->dato=-1;
            cab->sig=NULL;
        }
        void agregarElemtento(Pila *&cab, int dato){
            Pila *aux=cab;
            while(aux->sig)//aux->sig!=NULL
                aux=aux->sig;
            aux->sig=new Pila;
            aux->sig->dato=dato;
            aux->sig->sig=NULL;
        }
        bool pilaVacia(Pila *cab){
            if(!cab->sig)//cab->sig==NULL
                return true;
            else
                return false;
        }
        int retirarElemtento(Pila *&cab){
            Pila *aux=cab->sig,*aux2;
            if(pilaVacia(cab)==true){
                cout<<"La Pila esta vacia..."<<endl;
                system("pause");
                return 0;
            }else{
                while (aux->sig){//aux->sig!=NULL
                    aux2=aux;
                    aux=aux->sig;
                }
                aux2->sig=NULL;
                cout<<"Dato eliminado con exito..."<<endl;
                delete aux;
                system("pause");
            }
        }
        void mostrarPila(Pila *cab){
            Pila *aux=cab->sig;
            while(aux){//aux!=NULL
                cout<<"Dato = "<<aux->dato<<endl;
                aux=aux->sig;
            }
        }
            
};
void letrero(){
	cout<<"*---------------------------------------*"<<endl;
	cout<<"*---------------Bienvenido--------------*"<<endl;
	cout<<"*---------------------------------------*"<<endl;
	cout<<"\nDescripcion del programa:"<<endl;
	cout<<"Este programa tiene como fin, eliminar un dato de toda la lista "<<endl;//Escriba la descripcion aqui
}
void finDelPrograma(){
	cout<<"*---------------------------------------*"<<endl;
	cout<<"*-----------Fin del programa------------*"<<endl;
	cout<<"*---------------------------------------*"<<endl;
}
int menu(int opt){
	cout<<"Escoja una opcion\n 1)Mostrar Pila\n 2)Eliminar datos\n 3)Salir del programa\n->";
	cin>>opt;
	return opt;
}
main(){
    Pila objeto,*cab=NULL;
//    int opt;
    objeto.iniciarPila(cab);
//    do{
//		system("cls");
//		opt=menu(opt);
//		switch (opt)
//		{
//		case 1:
//			
//			break;
//		case 2:
//			break;
//		case 3:
//			// FIN DEL PROGRAMA
//			break;
//		default:
//			cout<<"Opcion incorrecta\nPor favor intentelo denuevo."<<endl;
//			opt=4;
//			system("pause");
//			break;
//		}
//	}while(opt!=3);
    objeto.agregarElemtento(cab,1);
    objeto.agregarElemtento(cab,2);
    objeto.agregarElemtento(cab,3);
    objeto.agregarElemtento(cab,4);
    objeto.agregarElemtento(cab,5);
    objeto.mostrarPila(cab);
    objeto.retirarElemtento(cab);
    objeto.retirarElemtento(cab);
    objeto.retirarElemtento(cab);

    objeto.mostrarPila(cab);
}
