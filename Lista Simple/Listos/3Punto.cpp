#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;
class ListaS{
	char dato;
	ListaS *sig;
	public:
		void crearCab(ListaS *&, char);
		void agregarNodo(ListaS *&,char);
		void mostrar(ListaS *);
		void crearL(ListaS *&);
        void cambiarMayusAMinus(ListaS *&);
};
void ListaS::crearCab(ListaS *&cab, char dato){
	cab = new ListaS;
	cab -> dato=dato;
	cab -> sig = NULL;
}
void ListaS::agregarNodo(ListaS *&cab, char dato){
	ListaS *aux = cab;
	while(aux->sig){
		aux=aux->sig;
	}
	aux -> sig = new ListaS;
	aux=aux->sig;
	aux-> dato=dato;
	aux->sig=NULL; 
}
void ListaS::crearL(ListaS *&cab){
	char dato = 'a';
	while (dato!='0'){
		cout<<"Caracter -> ";
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
void ListaS::mostrar(ListaS *cab){
	ListaS*aux=cab;
	while(aux){
		cout<<"Dato = "<<aux->dato<<endl;
		aux=aux->sig;
	}
}
void ListaS::cambiarMayusAMinus(ListaS *&cab){
    ListaS *aux=cab;
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
int main(){
	ListaS objeto, *cab=NULL;
	objeto.crearL(cab);
    objeto.cambiarMayusAMinus(cab);
    objeto.mostrar(cab);

}