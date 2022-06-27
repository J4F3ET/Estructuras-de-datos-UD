// ListaD DOBLEMENTE ENLAZADA
#include <iostream>
#include <stdlib.h>
#include <cctype>
using namespace std;
int especial=0,numericos=0,alfabeticos=0,longitud=0;
class ListaD{
    char dato;
    ListaD *sig,*ant;
    public:
        void crearCab(ListaD *&cab, char dato){
            cab=new ListaD;
            cab->dato=dato;
            cab->sig=cab->ant=NULL;
        }
        void agregarNodo(ListaD *&cab,char dato){
            ListaD *aux=cab;
            while(aux->sig){ //Equivale a while(aux->sig!=NULL){}
                aux=aux->sig;    
            }
            // CREA NODO
            aux->sig=new ListaD;
            // UBICA ANT APUNTANDO AL NODO ANTERIOR DEL NODO ACTUAL
            aux->sig->ant=aux;
            // HACE ABANZAR AL AUXILIAR AL NODO CREADO
            aux=aux->sig;
            // charRODUCE EL DATO
            aux->dato=dato;
            // AUXILIAR EN SU PARTE SIGUIENTE VA AQUEDAR APUNTANDO A NULO
            aux->sig=NULL;
        }
        void crearListaD(ListaD *&cab){
            char dato='a';
            cout<<"Querido usuario la palabra\n";
            while(dato!='0'){
                cin>>dato;
                if(dato!='0'){
                    longitud++;
                    if(!cab){
                        crearCab(cab,dato);
                    }else{
                        agregarNodo(cab,dato);
                    }
                }

            }

        }
        void mostrar(ListaD *cab){
            ListaD *aux=cab;
            while(aux){
                cout<<"Dato: "<<aux->dato<<endl;
                aux=aux->sig;
            }
        }
        void mostraranterior(ListaD *cab){
            ListaD *aux=cab;
            while(aux->sig){
                aux=aux->sig;
            }
//            recorre al auxiliar de atras a adelante al final aux nunca es nullo por lotanto llega asta la cabeza 
            while(aux!=NULL){
                cout<<"Dato: "<<aux->dato<<endl;
                aux=aux->ant;
            }
        }
        void detector(ListaD *cab){
            ListaD *aux=cab;
            while(aux){
                aux->dato;
                switch (aux->dato)
                    {
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                    case 'A':
                    case 'E':
                    case 'I':
                    case 'O':
                    case 'U':
                        especial++;
                        break;
                    default:
                        break;
                    }
                switch (aux->dato)
                {
                case 'b':
                case 'c':
                case 'd':
                case 'f':
                case 'g':
                case 'h':
                case 'j':
                case 'k':
                case 'l':
                case 'm':
                case 'n':
                case 'ñ':
                case 'p':
                case 'q':
                case 'r':
                case 's':
                case 't':
                case 'v':
                case 'x':
                case 'z':
                case 'w':
                case 'y':
                case 'B':
                case 'C':
                case 'D':
                case 'F':
                case 'G':
                case 'H':
                case 'J':
                case 'K':
                case 'L':
                case 'M':
                case 'N':
                case 'Ñ':
                case 'P':
                case 'Q':
                case 'R':
                case 'S':
                case 'T':
                case 'V':
                case 'X':
                case 'Z':
                case 'W':
                case 'Y':
                    numericos++;
                    break;
                default:
                    break;
                }
                aux=aux->sig;
            }
        }
};
void letrero(){
    cout<<"*---------------------------------------*"<<endl;
    cout<<"*---------------Bienvenido--------------*"<<endl;
    cout<<"*---------------------------------------*"<<endl;
}
int main(){
    letrero();
    ListaD *cab=NULL,objeto;
    objeto.crearListaD(cab);
    objeto.detector(cab);
    objeto.mostrar(cab);
    cout<<"La lista contiene "<<numericos<<" CONSONANTES y "<<especial<<" VOCALES"<<endl;
    // objeto.mostraranterior(cab);
}

