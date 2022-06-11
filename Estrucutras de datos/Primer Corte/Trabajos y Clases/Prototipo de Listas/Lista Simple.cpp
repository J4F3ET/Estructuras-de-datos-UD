#include <iostream>
using namespace std;

class ListaS{
	int dato;
	ListaS *sig;
	public:
		void crearCab(ListaS *&, int);
		void agregarNodo(ListaS *&,int);
		void mostrar(ListaS *);
		void crearL(ListaS *&);
		int buscarL(ListaS *,int);
		int sumaL(ListaS *);
		void numParL(ListaS *);
		void invertirL(ListaS *&);
		int numMayor(ListaS *);
		int numMenor(ListaS *,int);
		
};
void ListaS::crearCab(ListaS *&cab, int dato){
	cab = new ListaS;
	cab -> dato=dato;
	cab -> sig = NULL;
}
void ListaS::agregarNodo(ListaS *&cab, int dato){
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
	int dato = 666;
	while (dato>0){
		cout<<"Numero=";
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
void ListaS::mostrar(ListaS *cab){
	ListaS*aux=cab;
	while(aux){
		cout<<"Dato = "<<aux->dato<<endl;
		aux=aux->sig;
	}
}
int ListaS::buscarL(ListaS *cab,int dato2){
	ListaS*aux=cab;
	while(aux){
		int aver = aux->dato;
		if(aver == dato2){
			cout<<"Dato = "<<aux->dato<<endl;
			return 0;
		}
		aux=aux->sig;
		
	}
	cout<<"No existe dato";
	return 1;
}
int ListaS::sumaL(ListaS *cab){
		ListaS*aux=cab;
		int suma=0;
		while(aux){
			suma=suma+aux->dato;
			aux=aux->sig;
		}
		return suma;
}
void ListaS::numParL(ListaS *cab){
	ListaS *aux=cab;
	while(aux){
		if(aux->dato%2==0){
			cout<<"Dato par -> "<<aux->dato<<endl;
		}
		aux=aux->sig;
	}
}
void ListaS::invertirL(ListaS *&cab){//FALTA 
	ListaS *aux=cab,*aux1=cab,*aux2=cab;
	int cat_nodos,n,aux_inv,guardado,i=0;
	aux=aux->sig;
	while(aux1){
			aux1=aux1->sig;
			cat_nodos++;
	}
	n=cat_nodos/2;
	while(i<=n){
		aux2=aux2->sig;
	}
	for(aux2;aux2==aux1;aux2){
		guardado=aux->dato;
		aux->dato=aux1->dato;
		aux1->dato=guardado;
	}
}
int ListaS::numMayor(ListaS *cab){
	ListaS *aux=cab;
	int num_mayor=0;
	while(aux){
		if(aux->dato>num_mayor){
			num_mayor=aux->dato;
		}
		aux=aux->sig;
	}
	return num_mayor;
}
int ListaS::numMenor(ListaS *cab,int num_mayor){
	ListaS *aux=cab;
	int num_menor=num_mayor;
	while(aux){
		if(aux->dato<num_menor){
			num_menor=aux->dato;
		}
		aux=aux->sig;
	}
	return num_menor;
}
int main(){
	ListaS objeto, *cab=NULL;
	objeto.crearL(cab);
	cout<<"Que quiere hacer \n 1)Buscar Dato de la lista \n 2)Mostrar Lista\n 3)Sumar los elementos de la lista\n 4)Mostrar solo elemntos pares de la lista\n 5)Invertir lista\n 6)Encontrar el numero mayor\n 7)Encontrar el numero menor\n->";
	int dato1;
	cin>>dato1;
	switch(dato1){
		case (1):
			cout<<"Que numero desea buscar";
			int dato2;
			cin>>dato2;
			dato2=objeto.buscarL(cab,dato2);
			break;
		case (2):
			objeto.mostrar(cab);
			break;
		case(3):
			int suma;
			suma=objeto.sumaL(cab);
			cout<<"La suma es -> "<<suma; 	
			break;
		case(4):
			objeto.numParL(cab);
			break;
		case(5):
			objeto.invertirL(cab);
			objeto.mostrar(cab);
			break;
		case(6):
			int num_mayor;
			num_mayor=objeto.numMayor(cab);
			cout<<"El numero mayor es -> "<<num_mayor;
			break;
		case(7):
			int num_menor;
			num_mayor=objeto.numMayor(cab);
			num_menor=objeto.numMenor(cab,num_mayor);
			cout<<"El numero menor es -> "<<num_menor;
			break;
	default:
		cout<<"Opcion incorrecta";
		break;
	}

	
	
}
