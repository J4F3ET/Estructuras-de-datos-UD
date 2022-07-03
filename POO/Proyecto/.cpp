#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Persona{
    private:
        string nombre;
        int genero,identidad;
    public:
        Persona(string nom,int gen,int ident);
        Persona();
        ~Persona();
        void setNom(string nom);
        void setGen(int aux);
        void setIdent(int aux);
        string getNom();
        int getGen();
        int getIdent();
};
Persona::Persona(){
    nombre="DESCONOCIDO";
    genero=identidad=0;
}
Persona::Persona(string nom,int gen,int ident){
    nombre=nom;
    genero=gen;
    identidad=ident;
}
Persona::~Persona(){}
void Persona :: setNom(string nom){
    nombre=nom;
}
void Persona :: setGen(int aux){
    genero=aux;
}
void Persona :: setIdent(int aux){
    identidad=aux;
}
string Persona :: getNom(){
    return nombre;
}
int Persona :: getGen(){
    return genero;
}
int Persona :: getIdent(){
    return identidad;
}
class Clientes:public Persona{
    private:
        string origen,producto;//nacionalidad
        int estrato;
    public:
        Clientes();
        Clientes(string nom,int gen,int ident,string orig,string proc,int est);
        ~Clientes();
        void setOrigen(string aux);
        void setProducto(string aux);
        void setEstrato(int aux);
        string getOrigen();
        string getProducto();
        int getEstrato();
};
Clientes::Clientes(){
    origen="DESCONOCIDO";
    producto="DESCONOCIDO";
    estrato=0;
}
Clientes::Clientes(string nom,int gen,int ident,string orig,string proc,int est):Persona(nom,gen,ident){
    origen=orig;
    producto=proc;
    estrato=est;
}
Clientes::~Clientes(){}
void Clientes:: setOrigen(string aux){
    origen=aux;
}
void Clientes:: setProducto(string aux){
    producto=aux;
}
void Clientes:: setEstrato(int aux){
    estrato=aux;
}
string Clientes:: getOrigen(){
    return origen;
}
string Clientes:: getProducto(){
    return producto;
}
int Clientes:: getEstrato(){
    return estrato;
}
class Proveedor:public Persona{
    private:
        string nomEmpresa;
        int nit;
    public:
        Proveedor();
        Proveedor(string nom,int gen,int ident,int id,string nomEmp);
        ~Proveedor();
        void setNomEmpresa(string aux);
        void setNit(int aux);
        string getNombreEmpresa();
        int getNit();
};
Proveedor::Proveedor(){
    nomEmpresa="DESCONOCIDO";
    nit=0;
}
Proveedor::Proveedor(string nom,int gen,int ident,int id,string nomEmp):Persona(nom,gen,ident){
    nomEmpresa=nomEmp;
    nit=id;
}
Proveedor::~Proveedor(){
}
void Proveedor:: setNomEmpresa(string aux){
    nomEmpresa=aux;
}
void Proveedor:: setNit(int aux){
    nit=aux;
}
string Proveedor:: getNombreEmpresa(){
    return nomEmpresa;
}
int Proveedor:: getNit(){
    return nit;
}
class Frecuentes:public Clientes{
    private:
        int numCompras;
    public:
        Frecuentes();
        ~Frecuentes();
        void setNumCompras(int aux);
        int getNumCompras();
};
Frecuentes::Frecuentes(){
    numCompras=0;
}
Frecuentes::~Frecuentes(){}
void Frecuentes:: setNumCompras(int aux){
    numCompras=aux;
}
int  Frecuentes::getNumCompras(){
    return numCompras;
}
class Constante: public Proveedor{
private:
    string productoConst;
    int cantidad;
public:
    Constante();
    ~Constante();
    void setProductoConst(string aux);
    void setcantidad(int aux);
    string getProductoConst();
    int getcantidad();
    friend int getCoutCantProducts_Const(Constante proveedor[4]);
};
Constante::Constante(){
    productoConst="DESCONOCIDO";
    cantidad=0;
}
Constante::~Constante(){}
void Constante:: setProductoConst(string aux){
    productoConst=aux;
}
void Constante:: setcantidad(int aux){
    cantidad=aux;
}
string Constante:: getProductoConst(){
    return productoConst;
}
int Constante:: getcantidad(){
    return cantidad;
}
class Ocacional: public Proveedor{
private:
    string productoOca,fecha;
public:
    Ocacional();
    ~Ocacional();
    void setFecha(string aux);
    void setProductoOca(string aux);
    string getProductoOca();
    string getFecha();
    friend int getCoutCantProducts_Oca(Ocacional proveedor[1]);
};
Ocacional::Ocacional(){
    productoOca="DESCONOCIDO";
    fecha="00/00/0000";
}
Ocacional::~Ocacional(){}
void Ocacional:: setFecha(string aux){
    fecha=aux;
}
void Ocacional:: setProductoOca(string aux){
    productoOca=aux;
}
string Ocacional:: getProductoOca(){
    return productoOca;
}
string Ocacional:: getFecha(){
    return fecha;
}
class Menus{
	public:
        void letrero();
        void fin();
		void menu();
		void menuPersona();
		void menuPersonaProveedor();
		void existenciaProductos();
};
void Menus::menu(){
    cout<<"1. Registrar persona \n2. Editar persona \n3. Existencia de productos\n4. Salir"<<endl;
}
void Menus::menuPersona(){
    cout<<"Persona tipo\n1. Cliente\n2. Proveedor\n3. Salir"<<endl; 
}
void Menus::menuPersonaProveedor(){
    cout<<"Tipo de proveedor\n1. Constante\n2. Ocacional\n3. Salir"<<endl;
}
void Menus::existenciaProductos(){
    cout<<"Tipo de proveedor\n1. Constante\n2. Ocacional\n3. Todas las existencias\n4. Salir"<<endl;
}
void Menus::letrero(){
    cout<<"---------------------------------------"<<endl;
	cout<<"---------------Bienvenido--------------"<<endl;
	cout<<"---------------------------------------"<<endl;
}
void Menus::fin(){
	cout<<"---------------------------------------"<<endl;
	cout<<"-----------Fin del programa------------"<<endl;
	cout<<"---------------------------------------"<<endl;
}
int getCoutCantProducts_Const(Constante proveedor[4]){
}
int getCoutCantProducts_Oca(Ocacional proveedor[1]){
}
int c=2,pO=2,pC=2;
int main(){
    Frecuentes cliente[c];
    Ocacional proveedorOca[pO];
    Constante proveedorConst[pC];
    int opt,aux;
    Menus menu;
    menu.letrero();
    do{
        menu.menu();
        cin>>opt;
        switch(opt){
            case 1://Registrar persona
                system("cls");
                menu.menuPersona();
                cin>>opt;
                do{
                switch (opt){
                    case 1://Registrar persona Cliente
                        for(int i=0;i<c-1;i++){
                            aux=cliente[i].getNumCompras();
                            if(aux!=0){//El espacio del vector cliente esta vacio por lo tanto se puede registrar un cliente
                                
                            }
                        }
                        system("cls");
                        break;
                    case 2://Registrar persona Proveedor
                        system("cls");
                        break;
                    case 3://Salir del menu
                        system("cls");
                        break;
                    default:
                            system("cls");
                        break;
                }  
                } while (opt!=3);
                break;
            case 2://Editar persona
                system("cls");
                break;
            case 3://Existencia de productos
                system("cls");
                break;
            case 4://Salir
                    //Salir------------------------------------------ FIN DEL PROGRAMA
                break;
            default:
                system("cls");
                break;
        }
    } while (opt!=4);
    menu.fin();
    return 0;
}
