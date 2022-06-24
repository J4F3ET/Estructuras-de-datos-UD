#include <iostream>
#include <locale.h>
#include <stdlib.h>
using namespace std;
class ListaCD{
private:
    int dato;
    ListaCD *sig,*ant;
public:
    void crearCab(ListaCD *&cab,int dato){
        cab = new ListaCD;
        cab->dato = dato;
        cab->sig=cab->ant=cab;
    }
    void agregarNodo(ListaCD *&cab,int dato){
        ListaCD *aux=cab;
        while(aux->sig!=cab)//avanza el apuntador al final
            aux = aux->sig;
        aux->sig=new ListaCD;//crear un nuevo nodo
        aux->sig->ant=aux;//antes de avanzar el apuntador va enlazar la parte sig del nuevo nodo a la parte ant con aux que se encuentra todavia en el nodo anterior al nuevo
        aux=aux->sig;//avanzo el apuntador ya esta enlazado su parteanterior
        aux->dato = dato;//introduzco el dato
        aux->sig=cab;//enlazo el final de la lista con la cabeza siguientdo la estructura de la Listas Circulares
        cab->ant=aux;//enlazo la cabeza con el ultimo nodo
    }
    void crearLista(ListaCD *&cab){
        int dato=666;
        while(dato>0){
            cout<<"Dato: ";
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
    void mostrarLista(ListaCD *cab){
        ListaCD *aux=cab;
        while (aux->sig!=cab){
            cout<<"Dato: "<<aux->dato<<endl;
            aux= aux->sig;
        }
        cout<<"Dato: "<<aux->dato<<endl;
        system("pause");
    }
        int buscarDato(ListaCD *cab,int dato){
        int busqueda=0;
        ListaCD *aux=cab;
        while (aux->sig!=cab){
            if(aux->dato==dato)
                busqueda++;
            aux= aux->sig;
        }
        if (aux->dato==dato)
            busqueda++;
        return busqueda;
    }
    void eliminarDato(ListaCD *&cab,int dato){
        ListaCD *aux1,*aux;
        int busqueda;
        busqueda=buscarDato(cab,dato);
        if(busqueda!=0&&busqueda>0){//Si la busqueda tiene resultados entonces borrara
            for(int i=0;i<busqueda;i++){//Se van aborrar la cantidad de nodos hasta que no se encuentren
                aux1=aux=cab;//auxiliares en la cabeza
                while(aux->sig!=cab&&aux->dato!=dato){//Si el auxiliar se encuentra en un nodo donde no es el dato va seguir avanzando hasta tener el dato
                    aux1=aux;
                    aux= aux->sig;
                }
                if(aux->dato==dato&&aux!=cab){//Filtro, para confirmar que aux esta en el dato Y aux no es la cabeza
                    aux1->sig=aux->sig;//Enlazamos el auxliar anterior(aux1) a la parte siguiente del auxiliar actual(aux)
                    aux->sig->ant=aux1;//Enlazamos la parte ant de aux->sig al auxiliar aux1 para aislar aux y poder borrarlo
                }else{//En el caso de que el dato sea la cabeza o el ultimo nodo
                    if(aux->dato==dato&&aux==cab){//Si, dato esta en la cabeza Y aux esta en la cabeza
                        cab=aux->sig;//Moveos la cabeza
                        aux->ant->sig=cab;//Enlazamos el ultimo nodo a la nueva cabeza en sentido ->
                        cab->ant=aux->ant;//Enlazamos el ultimo nodo a la nueva cabeza en sentido <-
                    }else{
                        if (aux->sig==cab&&aux->dato==dato){//Si, el dato esta antes de la cabeza
                            aux1->sig=aux->sig;//Enlazamos el ante penultimo nodo con la cabeza  ->
                            aux->sig->ant=aux->ant;//Enlazamos la parte anterior del siguiente nodo de aux, lo enlazamos con la partte anterior de aux osea el penultimo nodo <-
                        }
                    }
                }
            }
            delete aux;
            cout<<"Dato: "<<dato<<" eliminado exitosamente."<<endl;
        }else{//La busqueda dio 0, etonces no existe el dato en la lista
            cout<<"Este dato no se encuentra en la lista"<<endl;
        }
        system("pause");
    }
};
// INSERTE EL METODO DEL PROGRAMA
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
	cout<<"Escoja una opcion\n 1)Eliminar dato \n 2)Mostrar Lista\n 3)Salir del programa\n->";
	cin>>opt;
	return opt;
}
int main(){
letrero();
    setlocale(LC_ALL, "");
	ListaCD objeto, *cab=NULL;
	objeto.crearLista(cab);
	int opt,aux;
// SECCION DE APLICACION
	do{
		system("cls");
		opt=menu(opt);
		switch (opt)
		{
		case 1:
			// FUNCION DEL PROGRAMA
			cout<<"Escriba el dato que desea eliminar\n ->";
            cin>>aux;
            objeto.eliminarDato(cab,aux);
            objeto.mostrarLista(cab);
			break;
		case 2:
			// MOSTRAR LISTA
			objeto.mostrarLista(cab);
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
// FIN DE SECCION DE APLICACION
    finDelPrograma();//FIN DEL PROGRAMA :V
}