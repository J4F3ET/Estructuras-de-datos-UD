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
	int pesoNodo(ArbolBin *raiz){//FALTA NO TERMINADO
		int peso=0;
		if(raiz){
			pesoNodo(raiz->izq);
			pesoNodo(raiz->der);
			peso++;
		}
		return peso;
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
	// MUESTRE EL PESO DE LOS NODOS
	cout << "[6].Mostrar peso del nodo" << endl; 
	// calcular la altura del arbol
	cout << "[7].Altura del arbol" << endl; 
	// determinar si entre dos nodos hay camino
	cout << "[8].Existe camino entre los nodos" << endl; 
	// determine la longitud entre dos nodos
	cout << "[9].Cual es la longitud del nodo" << endl;
	// calcular longitud entre dos nodos debe de existir camino)
	cout << "[10].Cual es la longitud entre dos nodos" << endl;
	// buscar nodo de un arbol y calcular el nivel------------------------------------Listo
	cout << "[11].Buscar y mostrar nivel" << endl;
	cout << "[12].Mostrar Arbol" << endl;
	cout << "[13].Salir" << endl;
}
int main(){
	ArbolBin *raiz = NULL, obj_arbol,*aux;
	obj_arbol.crearArbol(raiz);
	int opt,dato;
	do{
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

			dato=obj_arbol.pesoNodo(raiz);
			system("pause");
			break;
		case 7: // ALTURA DEL ARBOL
			cout<<"SIN PROGRAMAR"<< endl;//TODAVIA NO ESTA LA OPCION
			system("pause");
			break;
		case 8: // DETERMINAR CAMINO ENTRE NODOS
			cout<<"SIN PROGRAMAR"<< endl;//TODAVIA NO ESTA LA OPCION
			system("pause");
			break;
		case 9: // DETERMINE LA LONGITUD DEL NODO
			cout<<"SIN PROGRAMAR"<< endl;//TODAVIA NO ESTA LA OPCION
			system("pause");
			break;
		case 10: // DETERMINE LA LONGITUD ENTRE NODOS
			cout<<"SIN PROGRAMAR"<< endl;//TODAVIA NO ESTA LA OPCION
			system("pause");
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
	} while (opt != 8);
	return 0;
}
