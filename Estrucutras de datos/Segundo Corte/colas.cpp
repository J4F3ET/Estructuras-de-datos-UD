#include <iostream>
#include <stdlib.h>
using namespace std;
class Cola{
    int dato;
    Cola *sig;
    public:
        void iniciarCola(Cola *&cab){
            cab=new Cola;
            cab->dato=-1;
            cab->sig=NULL;
        }
        void agregarElemtento(Cola *&cab, int dato){
            Cola *aux=cab;
            while(aux->sig)//aux->sig!=NULL
                aux=aux->sig;
            aux->sig=new Cola;
            aux->sig->dato=dato;
            aux->sig->sig=NULL;
        }
        bool colaVacia(Cola *cab){
            if(!cab->sig)//cab->sig==NULL
                return true;
            else
                return false;
        }
        int retirarElemtento(Cola *&cab){
            Cola *aux=cab->sig;
            if(colaVacia(cab)==true){
                cout<<"La cola esta vacia..."<<endl;
                system("pause");
                return 0;
            }else{
                cab->sig=aux->sig;
                cout<<"Dato eliminado con exito..."<<endl;
                delete aux;
                system("pause");
            }
        }
        void mostrarCola(Cola *cab){
            Cola *aux=cab->sig;
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
	cout<<"Escoja una opcion\n 1)Mostrar Cola\n 2)Eliminar datos\n 3)Salir del programa\n->";
	cin>>opt;
	return opt;
}
main(){
    Cola objeto,*cab=NULL;
    int opt;
    objeto.iniciarCola(cab);
    do{
		system("cls");
		opt=menu(opt);
		switch (opt)
		{
		case 1:
			
			break;
		case 2:
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
    objeto.agregarElemtento(cab,1);
    objeto.agregarElemtento(cab,2);
    objeto.agregarElemtento(cab,3);
    objeto.agregarElemtento(cab,4);
    objeto.agregarElemtento(cab,5);
    objeto.mostrarCola(cab);
    objeto.retirarElemtento(cab);
    objeto.retirarElemtento(cab);
    objeto.retirarElemtento(cab);
    objeto.retirarElemtento(cab);
    objeto.retirarElemtento(cab);
    objeto.retirarElemtento(cab);
    objeto.mostrarCola(cab);
}