#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;
int longitud;
class ListaS{
	char dato;
	ListaS *sig;
	public:
		void crearCab(ListaS *&, char);
		void agregarNodo(ListaS *&,char);
		void mostrar(ListaS *);
		void crearL(ListaS *&);
		void cambiarMayusAMinus(ListaS *&);
		void palidroma(ListaS *&);

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
	cout<<"Escriba la palabra y despues digite 0 "<<endl;
	while (dato!='0'){
		cin>>dato;
		if(dato!='0'){
			if(!cab){
				crearCab(cab,dato);
			}else{
				agregarNodo(cab,dato);
			}
			longitud++;
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
void ListaS::palidroma(ListaS *&cab){
	ListaS *aux=cab;
	char pal[longitud],palInv[longitud];
	int i=0;
	while(aux){
		pal[i]=aux->dato;
		palInv[i]=aux->dato;
		aux=aux->sig;
		i++;
	}
	for(int i=0;i<longitud/2;i++){
			char aux1[1];
			aux1[0]=palInv[i];
			palInv[i]=palInv[longitud-i-1];
			palInv[longitud-i-1]=aux1[0];
	}
	string palabra=pal,palabraInversa=palInv;
	if(palabra==palabraInversa){
		cout<<"Palabra palindroma detectada -> "<<palabra<<endl;
	}else{
		cout<<"Palabra palindroma no detectada -> "<<palabra<<endl;
	}
}
void letrero(){
	cout<<"*---------------------------------------*"<<endl;
	cout<<"*---------------Bienvenido--------------*"<<endl;
	cout<<"*---------------------------------------*"<<endl;
	cout<<"\n Detector de palabra palindroma"<<endl;
}
int main(){
	ListaS objeto, *cab=NULL;
	letrero();
	objeto.crearL(cab);
	objeto.mostrar(cab);
	objeto.palidroma(cab);
	return 0;
}