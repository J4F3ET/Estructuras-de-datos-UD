#include <iostream>
#include <stdlib.h>
using namespace std;
class Cola{
    int dato;
    Cola *sig;
    public:
        void iniciarCola(Cola *&cab,Cola *&cab2,int orden){
            if(orden==1){
                cab=new Cola; 
                cab->dato=-1;
                cab->sig=cab2;
            }else{
                cab2=new Cola;
                cab2->dato=-2;
                cab2->sig=NULL;
            }
        }
        void agregarElemento(Cola *&cab, int dato,Cola *&cab2,int orden){
            Cola *aux=cab,*aux2=cab2;
            if(orden==1){
                while(aux->sig!=cab2)//aux->sig!=NULL
                    aux=aux->sig;
                aux->sig=NULL;
                aux->sig=new Cola;
                aux->sig->dato=dato;
                aux->sig->sig=cab2;
            }else{
                while(aux2->sig)//aux2->sig!=NULL
                    aux2=aux2->sig;
                aux2->sig=new Cola;
	                aux2->sig->dato=dato;
                aux2->sig->sig=NULL;
            }
        }
        void mostrarCola(Cola *cab,Cola *cab2){
            Cola *aux=cab->sig,*aux2=cab2->sig;
            cout<<"------------------------------------------"<<endl;
            while(aux!=cab2){
                cout<<"Dato = "<<aux->dato<<endl;
                aux=aux->sig;
            }
            cout<<"------------------------------------------"<<endl;
            while(aux2){
                cout<<"Dato = "<<aux2->dato<<endl;
                aux2=aux2->sig;
            }
        }     
        bool colaVacia(Cola *cab){
            if(cab->sig==NULL||cab->sig->dato==-2)//cab->sig==NULL
                return true;
            else
                return false;
        }
        int retirarElemento(Cola *&cab){
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
};
void letrero(){
	cout<<"*---------------------------------------*"<<endl;
	cout<<"*---------------Bienvenido--------------*"<<endl;
	cout<<"*---------------------------------------*"<<endl;
}
void finDelPrograma(){
	cout<<"*---------------------------------------*"<<endl;
	cout<<"*-----------Fin del programa------------*"<<endl;
	cout<<"*---------------------------------------*"<<endl;
}
int menu(int opt){
	cout<<"Escoja una opcion\n 1)Agregar dato\n 2)Mostrar Cola\n 3)Retirar elemento\n 4)Salir"<<endl;
    cout<<"*---------------------------------------*"<<endl;
	cin>>opt;
	return opt;
}
int main(){
    Cola objeto,*cab=NULL,*cab2=NULL;
    int aux,opt,orden=1,ordenE=1;
    objeto.iniciarCola(cab,cab2,2);
    objeto.iniciarCola(cab,cab2,1);
    do{
		system("cls");
        letrero();
		opt=menu(opt);
		switch (opt)
		{
		case 1:
			system("cls");
            cout<<"El dato se registrara en la cola "<<orden<<endl;
            cout<<"Ingrese el dato para la cola"<<endl;
            cin>>aux;
            if(orden==1){
                objeto.agregarElemento(cab,aux,cab2,orden);
                orden=2;
            }else{
                objeto.agregarElemento(cab,aux,cab2,orden);
                orden=1;
            }
			break;
		case 2:
            system("cls");
            objeto.mostrarCola(cab,cab2);
            cout<<"--------------------------"<<endl;
            system("pause");
			break;
		case 3:
            if(ordenE==1){
                objeto.retirarElemento(cab);
                ordenE=2;
            }else{
                objeto.retirarElemento(cab2);
                ordenE=1;
            }
			break;
		case 4:// FIN DEL PROGRAMA
			break;
		default:
			cout<<"Opcion incorrecta\nPor favor intentelo denuevo."<<endl;
			opt=5;
			system("pause");
			break;
		}
	}while(opt!=4);
    finDelPrograma();
    return 0;
}
