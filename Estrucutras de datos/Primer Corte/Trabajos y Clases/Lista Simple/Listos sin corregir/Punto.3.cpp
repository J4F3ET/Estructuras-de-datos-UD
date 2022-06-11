#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;
int especial=0,numericos=0,alfabeticos=0,longitud=0;
class ListaSimple{
    char dato[100];
    ListaSimple *sig;
    public:
        // CABEZA DE CUALQUIER LISTA
        void crearCab(ListaSimple *&cab,char dato[]){
            cab = new ListaSimple;
            strcpy(cab->dato,dato);
            cab->sig=NULL;
        }
        void crearNodo(ListaSimple *&cab, char dato[] ){
            ListaSimple *aux=cab;
            while(aux->sig){//Si existe auxiliar en su parte siguiente entonces 
                // movera el auxliar a su siguiente nodo
                aux=aux->sig;
            }
            // aux debe estar apuntando a null gracias al WHILE por lo tanto se crea un nuevo nodo 
            // y se mueve aux a su parte siguiente
            aux -> sig = new ListaSimple;
	        aux=aux->sig;
	        strcpy(aux->dato,dato);
	        aux->sig=NULL; 
        }
        void crearLista(ListaSimple *&cab){
            char dato[100] ={'a'};
            cout<<"\nEscriba Porfavor\nInicio"<<endl;
	        while (dato[0] !='0'){
                cin.getline(dato,100,'\n');
                longitud=strlen(dato);
                if(dato[0]!='0'){
                    for(int i=0;i<longitud;i++){
                        if(isalpha(dato[i])){
                            alfabeticos++;
                            if(dato[i]==-15439){
                                dato[i]='Ñ';
                            }
                            if(dato[i]==-15471){
                                dato[i]='ñ';
                            }
                            if(dato[i]>='a'&&dato[i]<='z'){
                                dato[i]=dato[i]-32;
                            }else{
                                if(dato[i]>='A'&&dato[i]<='Z'){
                                    dato[i]=dato[i]+32;
                                }
                            }
                        }    
                        if(isdigit(dato[i])){
                                numericos++;
                        }
                        if(isalpha(dato[i])==false && isdigit(dato[i])==false){// Filtro especiale
                                especial++;
                        }
                    }
                }
                if(dato[0] !='0'){
                    if(!cab){
                        crearCab(cab,dato);
                    }else{
                        crearNodo(cab,dato);
                    }
                }

            }

            cout<<"Fin"<<endl;
        }
       void mostrarLista(ListaSimple *cab){
	        ListaSimple *aux=cab;
            cout<<"*------------------*"<<endl;
            cout<<" Inicio de la lista"<<endl;
            cout<<"*------------------*"<<endl;
	        while(aux){
		    cout<<aux->dato<<endl;
		    aux=aux->sig;
	        }
            cout<<"*------------------*"<<endl;
            cout<<"  Fin de la lista"<<endl;
            cout<<"*------------------*"<<endl;
        }
};
void letrero(){
    cout<<"*---------------------------------------*"<<endl;
    cout<<"*---------------Bienvenido--------------*"<<endl;
    cout<<"*---------------------------------------*"<<endl;
    cout<<"\nPara indicar el final de la lista escriba el numero 0"<<endl;
}
void contador(){
    cout<<"----------------------------------------------------------"<<"\n";
            cout<<"La cantidad de caracteres Afabeticos en la lista son -> "<<alfabeticos<<"\n";
            cout<<"----------------------------------------------------------"<<"\n";
            cout<<"La cantidad de caracteres Numericos en la lista son  -> "<<numericos<<"\n";
            cout<<"----------------------------------------------------------"<<"\n";
            cout<<"La cantidad de caracteres Especiales en la lista son -> "<<especial<<"\n";
            cout<<"----------------------------------------------------------"<<"\n";
}
int main()
{
    letrero();
    int especial;
    ListaSimple lista,*cab=NULL;
    lista.crearLista(cab);
    // contador();
    lista.mostrarLista(cab);
    return 0;
}
