#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
using namespace std;
class SistemaInfomracionLibros{
    private:
        char tituloLibro[50],autor[30],editorial[50];
        int numPaginas,anoEdit,isbn,numEdit,estado;
    public:
        SistemaInfomracionLibros(){
            strcpy(tituloLibro,"Desconocido");
            strcpy(autor,"Desconocido");
            strcpy(editorial,"Desconocida");
            numPaginas=0;
            anoEdit=0;
            isbn=0;
            numEdit=0;
            estado=0;
            
        }
        ~SistemaInfomracionLibros(){
        	cout<<"Ejecuntando destructor"<<endl;
		}
        void setTituloLibro(char aux[50]){
            strcpy(tituloLibro,aux);
            cout<<"Registrado..."<<endl;
        }
        void setAutor(char aux[30]){
            strcpy(autor,aux);
            cout<<"Registrado..."<<endl;
        }
        void setEditoria(char aux[50]){
            strcpy(editorial,aux);
            cout<<"Registrado..."<<endl;
        }
        void setNumeroPaginas(int aux){
            numPaginas=aux;
            cout<<"Registrado..."<<endl;
        }
        void setAnoEdicion(int aux){
            anoEdit=aux;
            cout<<"Registrado..."<<endl;
        }
        void setISBN(int aux){
            isbn=aux;
            cout<<"Registrado..."<<endl;
        }
        void setNumeroEdicion(int aux){
            numEdit=aux;
            cout<<"Registrado..."<<endl;
        }
        void setEstado(int aux){
            estado=aux;
            cout<<"Registrado..."<<endl;
        }
        void getTituloLibro(){
            cout<<"--------------------------"<<endl;
            cout<<"Titulo: "<<tituloLibro<<endl;
            cout<<"--------------------------"<<endl;            
        }
        void getAutor(){
            cout<<"--------------------------"<<endl;
            cout<<"Autor: "<<autor<<endl;
            cout<<"--------------------------"<<endl;
        }
        void getEditoria(){
            cout<<"--------------------------"<<endl;
            cout<<"Editorial: "<<editorial<<endl;
            cout<<"--------------------------"<<endl;
        }
        void getNumeroPaginas(){
            cout<<"--------------------------"<<endl;
            cout<<"Numero de paginas: "<<numPaginas<<endl;
            cout<<"--------------------------"<<endl;
        }
        void getAnoEdicion(){
            cout<<"--------------------------"<<endl;
            cout<<"Año de edicion: "<<anoEdit<<endl;
            cout<<"--------------------------"<<endl;
        }
        void getISBN(){
            cout<<"--------------------------"<<endl;
            cout<<"ISBN: "<<isbn<<endl;
            cout<<"--------------------------"<<endl;
        }
        void getNumeroEdicion(){
            cout<<"--------------------------"<<endl;
            cout<<"Numero de edicion: "<<numEdit<<endl;
            cout<<"--------------------------"<<endl;
        }
        void getEstado(){
        	char Estado[12];
            if(estado=1){
                strcpy(Estado,"Existente");
            }else{
                strcpy(Estado,"Inexistente");
            }
            cout<<"--------------------------"<<endl;
            cout<<"Estado: "<<Estado<<endl;
            cout<<"--------------------------"<<endl;
        }
        void mostrarTodo(){
            getTituloLibro();
            getAutor();
            getEditoria();
            getNumeroPaginas();
            getAnoEdicion();
            getISBN();
            getNumeroEdicion();
            getEstado();
        }
        int darId(){
            int aux=isbn;
            return aux;
        }
        char darTitulo(){
            char titulo[50];
            strcpy(titulo,tituloLibro);
            return *titulo;
        }
};
letrero(){
cout<<"--------------------------"<<endl;
cout<<"--------Bienvenido--------"<<endl;
cout<<"--------------------------"<<endl;
}
menu(){
cout<<"--------------------------"<<endl;
cout<<"Por favor escoja una opcion"<<endl;
cout<<"--------------------------"<<endl;
cout<<"1)"<<"Registrar Libro"<<endl;
cout<<"2)"<<"Actualizar datos de un libro"<<endl;
cout<<"3)"<<"Consultar"<<endl;
cout<<"4)"<<"Libros existentes actualmente"<<endl;
cout<<"5)"<<"Mostrar todo"<<endl;
cout<<"6)"<<"Salir"<<endl;
cout<<"--------------------------"<<endl;
}
menuActualizarDatos(){
cout<<"--------------------------"<<endl;
cout<<"Por favor escoja una opcion"<<endl;
cout<<"--------------------------"<<endl;
cout<<"1)"<<"Actualizar titulo del libro"<<endl;
cout<<"2)"<<"Actualizar autor"<<endl;
cout<<"3)"<<"Actualizar editorial"<<endl;
cout<<"4)"<<"Actualizar numero de paginas"<<endl;
cout<<"5)"<<"Actualizar numero de edicion"<<endl;
cout<<"6)"<<"Actualizar estado"<<endl;
cout<<"7)"<<"Actualizar año de edicion"<<endl;
cout<<"8)"<<"Salir"<<endl;
cout<<"--------------------------"<<endl;
}
menuConsultar(){
    cout<<"--------------------------"<<endl;
    cout<<"Por favor escoja una opcion"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"1)"<<"Consultar por nombre del libro"<<endl;
    cout<<"2)"<<"Consultar por ISBN"<<endl;
    cout<<"3)"<<"Salir"<<endl;
    cout<<"--------------------------"<<endl;
}
fin(){
cout<<"--------------------------"<<endl;
cout<<"-----Fin del programa-----"<<endl;
cout<<"--------------------------"<<endl;
}
main(){
    setlocale(LC_ALL, "");
    SistemaInfomracionLibros libro[7];
    int opt;
    char tituloLibro[50],autor[30],editorial[50];
    int numPaginas,anoEdit,isbn,numEdit,estado;
    do{
        menu();
        cin>>opt;
        switch(opt){
        case 1:
                int idLibro;
                cout<<"--------------------------"<<endl;
                cout<<"Digite del 1 al 7\n En que seccion desea guardar el libro"<<endl;
                cout<<"--------------------------"<<endl;
                cin>>idLibro;
                int aux;
				aux=libro[idLibro-1].darId();
                if(aux == 0){
                    cout<<"--------------------------"<<endl;
                    cout<<"Escriba el nombre del libro"<<endl;
                    cin.getline(tituloLibro,50,'\n');
                    libro[idLibro-1].setTituloLibro(tituloLibro);
                    cout<<"--------------------------"<<endl;
                    cout<<"Escriba el nombre del autor del libro"<<endl;
                    cin.getline(autor,30,'\n');
                    libro[idLibro-1].setAutor(autor);
                    cout<<"--------------------------"<<endl;
                    cout<<"Escriba el nombre de la editorial del libro"<<endl;
                    cin.getline(editorial,50,'\n');
                    libro[idLibro-1].setEditoria(editorial);
                    cout<<"--------------------------"<<endl;
                    cout<<"Escriba el numero de paginas del libro"<<endl;
                    cin>>numPaginas;
                    libro[idLibro-1].setNumeroPaginas(numPaginas);
                    cout<<"--------------------------"<<endl;
                    cout<<"Escriba el año de edicion del libro"<<endl;
                    cin>>anoEdit;
                    libro[idLibro-1].setAnoEdicion(anoEdit);
                    cout<<"--------------------------"<<endl;
                    cout<<"Escriba el ISBN \n(codigo identificacion unico del libro)"<<endl;
                    cin>>isbn;
                    libro[idLibro-1].setISBN(isbn);
                    cout<<"--------------------------"<<endl;
                    cout<<"Escriba el numero de edicion del libro"<<endl;
                    cin>>numEdit;
                    libro[idLibro-1].setNumeroEdicion(numEdit);
                    cout<<"--------------------------"<<endl;
                    cout<<"Escriba el estado actual del libro\n[1 existente, 0 inexistente]"<<endl;
                    cin>>estado;
                    libro[idLibro-1].setEstado(estado);
                }else{
                    cout<<"--------------------------"<<endl;
                    cout<<"Esta seccion ya se encuentra ocupada\npor favor escoja otra\nGracias"<<endl;
                    cout<<"--------------------------"<<endl;
                }
            break;
        case 2:
                cout<<"--------------------------"<<endl;
                cout<<"Digite del 1 al 7\n El libro que desea seleccionar"<<endl;
                cout<<"--------------------------"<<endl;
                cin>>idLibro;
				aux=libro[idLibro-1].darId();
                if(aux!=0){
                    do{
                        menuActualizarDatos();
                        cin>>opt;
                        switch (opt){
                            case 1:                            
                            cout<<"--------------------------"<<endl;
                            cout<<"Escriba el nombre del libro"<<endl;
                            cin.getline(tituloLibro,50,'\n');
                            libro[idLibro-1].setTituloLibro(tituloLibro);
                                break;
                            case 2:
                            cout<<"--------------------------"<<endl;
                            cout<<"Escriba el nombre del autor del libro"<<endl;
                            cin.getline(autor,30,'\n');
                            libro[idLibro-1].setAutor(autor);
                                break;
                            case 3:
                            cout<<"--------------------------"<<endl;
                            cout<<"Escriba el nombre de la editorial del libro"<<endl;
                            cin.getline(editorial,50,'\n');
                            libro[idLibro-1].setEditoria(editorial);
                                break;
                            case 4:
                            cout<<"--------------------------"<<endl;
                            cout<<"Escriba el numero de paginas del libro"<<endl;
                            cin>>numPaginas;
                            libro[idLibro-1].setNumeroPaginas(numPaginas);
                                break;
                            case 5:
                            cout<<"--------------------------"<<endl;
                            cout<<"Escriba el año de edicion del libro"<<endl;
                            cin>>anoEdit;
                            libro[idLibro-1].setAnoEdicion(anoEdit);
                                break;
                            case 6:
                            cout<<"--------------------------"<<endl;
                            cout<<"Escriba el numero de edicion del libro"<<endl;
                            cin>>numEdit;
                            libro[idLibro-1].setNumeroEdicion(numEdit);
                                break;
                            case 7:
                              cout<<"--------------------------"<<endl;
                            cout<<"Escriba el estado actual del libro\n[1 existente, 0 inexistente]"<<endl;
                            cin>>estado;
                            libro[idLibro-1].setEstado(estado);
                                break;
                            case 8:
                                break;
                        default:
                            break;
                        }
                    }while(opt!=8);
                }else{
                    cout<<"--------------------------"<<endl;
                    cout<<"El libro no esta registrado\npor favor registre el libro\nGracias"<<endl;
                    cout<<"--------------------------"<<endl;
                } 
            break;
        case 3:
               
                do{
                    menuConsultar();
                    cin>>opt;
                    switch (opt)
                    {
                    case 1:
                        cout<<"--------------------------"<<endl;
                        cout<<"Escriba el nombre que desea buscar"<<endl;
                        cout<<"--------------------------"<<endl;
                        cin.getline(tituloLibro,50,'\n');
                        for(int i=0;i<7;i++){
                            char dato[50];
    
                            if(dato==tituloLibro){
                                libro[i].mostrarTodo();
                            }else{
                            }
                        }
                        break;
                    case 2:
                        
                        break;
                    case 3:
                        
                        break;
                    
                    default:
                        break;
                    }
                }while(opt!=3);
            break;	
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        
        default:
            break;
        }
    }while(opt!=6);
    fin();
}