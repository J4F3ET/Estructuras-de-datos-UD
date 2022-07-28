#include <iostream>
#include <stdlib.h>
using namespace std;
class ArbolBin;
class Pila;
class Pila{
	ArbolBin *dato;
	Pila *sig;

public:
	void iniciarPila(Pila *&cab)
	{
		cab = new Pila;
		cab->dato = NULL;
		cab->sig = NULL;
	}
	bool pilaVacia(Pila *cab)
	{
		if (!cab->sig)
			return true;
		else
			return false;
	}
	void agregarPila(Pila *&cab, ArbolBin *dato)
	{
		Pila *aux = cab;
		while (aux->sig)
			aux = aux->sig;
		aux->sig = new Pila;
		aux->sig->sig = NULL;
		aux->sig->dato = dato;
	}
	ArbolBin *retirarPila(Pila *&cab){
		Pila *aux = cab, *aux1;
		ArbolBin *dir_dato;
		aux1 = aux;
		if (!pilaVacia(aux))
		{
			while (aux->sig)
			{
				aux1 = aux;
				aux = aux->sig;
			}
			aux1->sig = NULL;
			dir_dato = aux->dato;
			delete aux;
			return dir_dato;
		}
		else
			cout << "Pila vacia ...." << endl;
	}
};
class ArbolBin{
	int dato;
	ArbolBin *izq, *der,*as;

public:
	void crearRaiz(ArbolBin *&raiz, int dato){
		raiz = new ArbolBin;
		raiz->dato = dato;
		raiz->izq = NULL;
		raiz->der = NULL;
		raiz->as= NULL;
	}
	void agregarIzq(ArbolBin *&temp,int dato){
		ArbolBin *nuevo;
		nuevo = new ArbolBin;
		nuevo->dato = dato;
		nuevo->izq = NULL;
		nuevo->der = NULL;
		nuevo->as = temp;
		temp->izq = nuevo;
	}
	void agregarDer(ArbolBin *&temp, int dato){
		ArbolBin *nuevo;
		nuevo = new ArbolBin;
		nuevo->dato = dato;
		nuevo->izq = NULL;
		nuevo->der = NULL;
		nuevo->as = temp;
		temp->der = nuevo;
	}
	void crearArbol(ArbolBin *&raiz){
		ArbolBin *temp1, *temp2;
		int dato = 666;
		while (dato != -1)
		{
			cout << "Dato > ";
			cin >> dato;
			if (dato != -1){
				if (!raiz){
					crearRaiz(raiz, dato);
				}else{
					temp1 = temp2 = raiz;
					while (temp2 && temp1->dato != dato){
						temp1 = temp2;
						if (dato < temp1->dato)
							temp2 = temp2->izq;
						else
							temp2 = temp2->der;
					}
					if (temp1->dato == dato){
						cout << "Numero repetido" << endl;
					}else{
						if (dato < temp1->dato)
							agregarIzq(temp1, dato);
						else
							agregarDer(temp1, dato);
					}
				}
			}
		}
	}
	void inorden(ArbolBin *raiz){
		Pila *aux, obj_pila;
		ArbolBin *temp = raiz;
		cout << "Arbol Binario ....." << endl;
		obj_pila.iniciarPila(aux);
		while (temp)
		{
			obj_pila.agregarPila(aux, temp);
			temp = temp->izq;
		}
		while (!obj_pila.pilaVacia(aux))
		{
			temp = obj_pila.retirarPila(aux);
			cout << "Dato = " << temp->dato << endl;
			temp = temp->der;
			while (temp)
			{
				obj_pila.agregarPila(aux, temp);
				temp = temp->izq;
			}
		}
	}
	void mostrarArbol(ArbolBin *raiz, int contador){
		if (raiz != NULL)
		{
			mostrarArbol(raiz->der, contador + 1);
			for (int i = 0; i < contador; i++)
			{
				cout << "  ";
			}
			cout << raiz->dato << endl;
			mostrarArbol(raiz->izq, contador + 1);
		}
	}
	void preOrden(ArbolBin *raiz){
		if(raiz){
			cout<<raiz->dato<<"-";
			preOrden(raiz->izq);
			preOrden(raiz->der);
		}
	}
	void posOrden(ArbolBin *raiz){
		if(raiz){
			posOrden(raiz->izq);
			posOrden(raiz->der);
			cout <<raiz->dato<<"-";
		}
	}
	ArbolBin *buscar(ArbolBin *raiz,int dato){
		Pila *aux, obj_pila;
		ArbolBin *temp = raiz;
		obj_pila.iniciarPila(aux);
		while(temp){
			obj_pila.agregarPila(aux,temp);
			temp=temp->izq;
		}
		while(!obj_pila.pilaVacia(aux)){
			temp = obj_pila.retirarPila(aux);
			if(temp->dato==dato)
				return temp;
			temp = temp->der;
			while (temp){
				obj_pila.agregarPila(aux, temp);
				temp = temp->izq;
			}
		}
		temp=NULL;
		return temp;
	}
	int calcularNivel(ArbolBin *raiz){
		int nivel=0;
		if(raiz->izq&&raiz->izq->der!=raiz)
			nivel++;	
		if(raiz->der&&raiz->der->izq!=raiz)
			nivel++;
		return nivel;
	}
	void nodosEspeciales(ArbolBin *raiz,int ord){
		Pila *aux, obj_pila;
		ArbolBin *temp = raiz;
		cout << "Arbol Binario ....." << endl;
		obj_pila.iniciarPila(aux);
		while (temp){
			obj_pila.agregarPila(aux, temp);
			temp = temp->izq;
		}
		while (!obj_pila.pilaVacia(aux)){
			temp = obj_pila.retirarPila(aux);
			if(ord==0){
				if(calcularNivel(temp)==ord){
					cout<<"Nodo Hoja > "<<temp->dato<<endl;
				}
			}else{
				if(calcularNivel(temp)!=0){
					cout<<"Nodo No Terminal > "<<temp->dato<<endl;
				}
			}
			temp = temp->der;
			while (temp)
			{
				obj_pila.agregarPila(aux, temp);
				temp = temp->izq;
			}
		}
	}
	bool camino(ArbolBin *raiz,int de1,int hasta2){
		bool r=false;
		ArbolBin *aux;
		aux=buscar(raiz,de1);
		if(aux){
			while(aux->as){
				if(aux->as->dato==hasta2)
					r=true;
				aux=aux->as;
			}
		}
		if((de1==raiz->dato||hasta2==raiz->dato)&&(buscar(raiz,de1))&&(buscar(raiz,hasta2)))
			r=true;
		return r;
	}
	int pesoNodo(ArbolBin *raiz,int dato){
		int peso=-1;
		ArbolBin *temp;
		temp=buscar(raiz,dato);
		if(temp){
			Pila *aux, obj_pila;
			obj_pila.iniciarPila(aux);
			while (temp)
			{
				obj_pila.agregarPila(aux, temp);
				temp = temp->izq;
			}
			while (!obj_pila.pilaVacia(aux))
			{
				temp = obj_pila.retirarPila(aux);
				peso++;
				temp = temp->der;
				while (temp)
				{
					obj_pila.agregarPila(aux, temp);
					temp = temp->izq;
				}
			}
		}else{
			cout<<"Nodo no encontrado"<<endl;
		}
		return peso;
	}
	int alturaNodo(ArbolBin *raiz){
		int altura=0,x=-1,y=-1;
		if(calcularNivel(raiz)!=0){
			if(raiz->der!=NULL)
				x=alturaNodo(raiz->der);
			if(raiz->izq!=NULL)
				y=alturaNodo(raiz->izq);
		}	
		return 1+max(x,y);
	}
	int getClave(ArbolBin *raiz){
		return raiz->dato;
	}
	int longitud(ArbolBin *raiz,int de1,int hasta2,int r){
		ArbolBin *aux;
		aux=buscar(raiz,de1);
		if(aux){
			if(aux->dato!=raiz->dato){
				while(aux->as){
					r++;
					aux=aux->as;
				}
			}else{
				r=longitud(raiz,hasta2,de1,r);
			}
		}else
			cout<<"Nodo no encontrado..."<<endl;
		return r;
	}
};
void menu(){
	cout << "Menu de opciones" << endl;
	cout << "[1].Mostrar Inorden" << endl;//IZQ - RAIZ - DER--------------Listo
	cout << "[2].Mostrar Preorden" << endl;//IZQ - DER - RAIZ--------------Listo
	cout << "[3].Mostrar Posorden" << endl;//RAIZ - IZQ - DER--------------Listo
	// UN PROGRAMA QUE MUESTRE LOS NODOS NO TERMINALES  ------------------------------Listo
	cout << "[4].Mostrar nodos no terminales" << endl; 
	// MUESTRE LOS NODOS HOJAS--------------------------------------------------------Listo
	cout << "[5].Mostrar nodos terminales" << endl; 
	// MUESTRE EL PESO DE LOS NODOS---------------------------------------------------Listo
	cout << "[6].Mostrar peso del nodo" << endl; 
	// calcular la altura del arbol---------------------------------------------------Listo
	cout << "[7].Altura del arbol" << endl; 
	// determinar si entre dos nodos hay camino---------------------------------------Listo
	cout << "[8].Existe camino entre los nodos" << endl; 
	// determine la longitud entre dos nodos
	cout << "[9].Cual es la longitud del nodo" << endl;
	// calcular longitud entre dos nodos debe de existir camino)-----------------------Listo
	cout << "[10].Cual es la longitud entre dos nodos" << endl;
	// buscar nodo de un arbol y calcular el nivel------------------------------------Listo
	cout << "[11].Buscar y mostrar nivel" << endl;
	cout << "[12].Mostrar Arbol" << endl;
	cout << "[13].Salir" << endl;
}
int main(){
	ArbolBin *raiz = NULL, obj_arbol,*aux;
	cout<<"8-3-1-6-4-7-10-14-13"<<endl;
	obj_arbol.crearArbol(raiz);
	int opt,dato;
	do{
		fflush;
		system("cls");
		menu();
		cin >> opt;
		switch (opt){
		case 1: // MOSTRAR INORDEN
			obj_arbol.inorden(raiz);
			system("pause");
			break;
		case 2: // MOSTRAR PREORDEN
			obj_arbol.preOrden(raiz);
			system("pause");
			break;
		case 3: // MOSTRAR POSORDEN
			obj_arbol.posOrden(raiz);
			system("pause");
			break;
		case 4: // MOSTRAR NODOS NO TERMINALES EN INORDEN
			obj_arbol.nodosEspeciales(raiz,1);
			system("pause");
			break;
		case 5: // MOSTRAR NODOS TERMINALES
			obj_arbol.nodosEspeciales(raiz,0);
			system("pause");
			break;
		case 6: // MOSTRAR PESO DEL NODO
			cout<<"Escriba el nodo"<< endl;
			cin>>dato;
			dato=obj_arbol.pesoNodo(raiz,dato);
			cout<<"El peso del nodo es > "<<dato<< endl;
			system("pause");
			break;
		case 7: // ALTURA DEL ARBOL
			dato=obj_arbol.alturaNodo(raiz);
			cout<<"Altura >"<<dato<<endl;
			system("pause");
			break;
		case 8: // DETERMINAR CAMINO ENTRE NODOS
			cout<<"Escriba el nodo desde"<< endl;
			cin>>dato;
			cout<<"Escriba el nodo hasta"<< endl;
			cin>>opt;
			if(obj_arbol.camino(raiz,dato,opt)==true)
				cout<<"Existe camino"<<endl;
			else
				cout<<"No existe camino"<<endl;
			system("pause");
			opt=8;
			break;
		case 9: // DETERMINE LA LONGITUD DEL NODO
			dato=obj_arbol.getClave(raiz);
			cout<<"Escriba el nodo >";
			cin>>opt;
			if(opt!=dato){
				dato=obj_arbol.longitud(raiz,opt,dato,0);
				if(dato!=0)
					cout<<"La longitud es >"<<dato<<endl;
			}else
				cout <<"Longitud de la raiz es 0"<<endl;
			system("pause");
			opt=9;
			break;
		case 10: // DETERMINE LA LONGITUD ENTRE NODOS
			cout<<"Escriba el nodo desde"<< endl;
			cin>>dato;
			cout<<"Escriba el nodo hasta"<< endl;
			cin>>opt;
			if(obj_arbol.camino(raiz,dato,opt)==true){
				dato=obj_arbol.longitud(raiz,dato,opt,0);
				cout<<"La longitud es >"<<dato<<endl;
			}else
				cout<<"No existe camino"<<endl;
			system("pause");
			opt=10;
			break;
		case 11://BUSCAR Y MOSTRAR EL NIVEL
			cout<<"Digite el dato que quiere buscar > ";
			cin>>dato;
			aux=obj_arbol.buscar(raiz,dato);
			if(aux){
				dato=obj_arbol.calcularNivel(aux);
				cout<<"**Nodo encontrado**\nNivel del nodo >"<<dato<<endl;
			}else{
				cout<<"No se encontro el dato en el arbol"<<endl;
			}
			system("pause");
			dato=0;
			break;
		case 12: //MOSTRAR ARBOL
			obj_arbol.mostrarArbol(raiz, 0);
			system("pause");
			break;
		case 13: //SALIR DEL PROGRAMA
			break;
		default: // ERROR EN OPCION
			cout << "Intentelo denuevo" << endl;
			system("pause");
			break;
		}
	} while (opt != 13);
	return 0;
}
