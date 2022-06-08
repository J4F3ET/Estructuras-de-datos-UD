#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;
int numericos, alfabeticos,especiales;
class ListaS{
	char dato;
	ListaS *sig;
	public:
		void crearCab(ListaS *&, char);
		void agregarNodo(ListaS *&,char);
		void mostrar(ListaS *);
		void crearL(ListaS *&);
        void filterCaracterLista(ListaS *);
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
void ListaS::filterCaracterLista(ListaS *cab){
    ListaS *aux=cab;
    while(aux){
        // Filtro alfabetico
        if(isalpha(aux->dato)){
            alfabeticos++;
        }else{
            // filtro numerico
            if(isdigit(aux->dato)){
                numericos++;
            }else{
                // si no es alfabetico ni numerico es especial
                especiales++;
            }
        }

    }
}
void resultados(){
    cout<<"La cantidad de caracteres alfabeticos es de ->"<<alfabeticos<<endl;
    cout<<"La cantidad de caracteres numericos es de ->"<<numericos<<endl;
    cout<<"La cantidad de caracteres especiales es de ->"<<especiales<<endl;
}
void letrero(){
    cout<<"*---------------------------------------*"<<endl;
    cout<<"*---------------Bienvenido--------------*"<<endl;
    cout<<"*---------------------------------------*"<<endl;
    cout<<"\nCuantas palabras contiene la lista"<<endl;
}
int main(){
	letrero();
	ListaS objeto, *cab=NULL;
	objeto.crearL(cab);
    objeto.filterCaracterLista(cab);
    objeto.mostrar(cab);

}
