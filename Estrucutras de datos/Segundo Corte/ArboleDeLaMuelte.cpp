// Ãrboles binarios (creaciÃ³n y recorrido en inorden)
#include <iostream>
#include <stdlib.h>
using namespace std;
class ArbolBin;
class Pila;
class Pila
{
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
	ArbolBin *retirarPila(Pila *&cab)
	{
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

class ArbolBin
{
	int dato;
	ArbolBin *izq, *der;

public:
	void crearRaiz(ArbolBin *&raiz, int dato)
	{
		raiz = new ArbolBin;
		raiz->dato = dato;
		raiz->izq = NULL;
		raiz->der = NULL;
	}
	void agregarIzq(ArbolBin *&temp, int dato)
	{
		ArbolBin *nuevo;
		nuevo = new ArbolBin;
		nuevo->dato = dato;
		nuevo->izq = NULL;
		nuevo->der = NULL;
		temp->izq = nuevo;
	}
	void agregarDer(ArbolBin *&temp, int dato)
	{
		ArbolBin *nuevo;
		nuevo = new ArbolBin;
		nuevo->dato = dato;
		nuevo->izq = NULL;
		nuevo->der = NULL;
		temp->der = nuevo;
	}
	void crearArbol(ArbolBin *&raiz)
	{
		ArbolBin *temp1, *temp2;
		int dato = 666;
		while (dato != -1)
		{
			cout << "Dato = ";
			cin >> dato;
			if (dato != -1)
			{
				if (!raiz)
				{
					crearRaiz(raiz, dato);
				}
				else
				{
					temp1 = temp2 = raiz;
					while (temp2 && temp1->dato != dato)
					{
						temp1 = temp2;
						if (dato < temp1->dato)
							temp2 = temp2->izq;
						else
							temp2 = temp2->der;
					}
					if (temp1->dato == dato)
					{
						cout << "Numero repetido" << endl;
					}
					else
					{
						if (dato < temp1->dato)
							agregarIzq(temp1, dato);
						else
							agregarDer(temp1, dato);
					}
				}
			}
		}
	}
	void inorden(ArbolBin *raiz)
	{
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
	bool nodoHoja(ArbolBin *raiz, ArbolBin *raiz2, int clave)
	{ // no funciona
		ArbolBin *temp = raiz, *temp2 = raiz2;
		bool r = false;
		if (clave > temp->dato)
		{ // dato es menor a clave
			cout << "Dato menor a clave  " << temp->dato << endl;
			if (!temp->izq && temp->der)
			{
				r = true;
				cout << "!temp->izq&&temp->der" << endl;
			}
			if (temp->izq == temp2 && !temp->der)
			{
				r = true;
				cout << "temp->izq==temp2&&!temp->der" << endl;
			}
			if (temp2->der == temp && !temp2)
				r = false;
		}
		else
		{ // dato es mayor a clave
			if (!temp->der && temp->izq)
				r = true;
			if (!temp->der && temp == temp2->der)
				r = true;
		}
		if (temp->der && temp->izq)
			r = false;
		system("pause");
		return r;
	}
	void noTerminales(ArbolBin *raiz)
	{
		Pila *aux, obj_pila;
		ArbolBin *temp = raiz, *temp2 = raiz;
		int clave = temp->dato;
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
			if (nodoHoja(temp, temp2, clave) == false)
				cout << "Dato = " << temp->dato << endl;
			temp2 = temp;
			temp = temp->der;
			while (temp)
			{
				obj_pila.agregarPila(aux, temp);
				temp = temp->izq;
			}
		}
	}
	void mostrarHojas(ArbolBin *raiz)
	{
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
	void mostrarArbol(ArbolBin *raiz, int contador)
	{
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
};
void menu()
{
	cout << "Menu de opciones" << endl;
	cout << "(1).Mostrar Inorden" << endl;	// LiSTO -> IZQ - RAIZ - DER
	cout << "(2).Mostrar ArbolBin" << endl; // FALTA -> IZQ - DER - RAIZ
	cout << "(3).Mostrar Preorden" << endl; // FALTA -> RAIZ - IZQ - DER
	// UN PROGRAMA QUE MUESTRE LOS NODOS NO TERMINALES
	// QUE TIENEN AL MENOS DE UN DESCENDIENTE
	cout << "(4).Mostrar nodos NO TERMINALES" << endl; // FALTA METODO EN (PRE POS IN)ORDEN
	// MUESTRE LOS NODOS HOJAS
	// MUESTRE EL PESO DE LOS NODOS
	// buscar nodo de un arbol y calcular el nivel
	// calcular la altura del arbol
	// determinar si entre dos nodos hay camino
	// determine la longitud entre dos nodos
	// calcular longitud entre dos nodos(debe de existir camino)
	cout << "(5).Salir" << endl;
}
int main()
{
	ArbolBin *raiz = NULL, obj_arbol;
	obj_arbol.crearArbol(raiz);
	int opt;
	do
	{
		system("cls");
		menu();
		cin >> opt;
		switch (opt)
		{
		case 1: // MOSTRAR INORDEN
			obj_arbol.inorden(raiz);
			system("pause");
			break;
		case 2: // MOSTRAR ArbolBin
			obj_arbol.mostrarArbol(raiz, 0);
			system("pause");
			break;

		case 3: // MOSTRAR PREORDEN
			break;

		case 4: // MOSTRAR NODOS NO TERMINALES EN INORDEN
			obj_arbol.noTerminales(raiz);
			system("pause");
			break;
		case 5: // SALIR DEL PROGRAMA
			break;
		default: // ERROR EN OPCION
			cout << "Intentelo denuevo" << endl;
			system("pause");
			break;
		}
	} while (opt != 5);
	return 0;
}
