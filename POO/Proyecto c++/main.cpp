#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"
#include "Clientes.h"
#include "Ocacional.h"
#include "Constante.h"
#include "Frecuentes.h"
#include "Proveedor.h"
#include "Menus.h"
#include "Persona.cpp"
#include "Clientes.cpp"
#include "Ocacional.cpp"
#include "Constante.cpp"
#include "Frecuentes.cpp"
#include "Proveedor.cpp"
#include "Menus.cpp"
using namespace std;
int c=2,pO=2,pC=2;
int getCoutCantProducts_Const(Constante proveedor[],int nit){
    int existencias=0,aux=0;
    if(nit==0){//Si el nit es 0 entonces buscara todas las existencias de los proveedores constantes
        for(int i=0;i<pC;i++){
            aux=proveedor[i].getCantidad();
            existencias=aux+existencias;
        }
    }else{
        for(int i=0;i<pC;i++){
            aux=proveedor[i].getNit();
            if(aux==nit){//Encontro el nit entonces retorna las existencias de ese poroveedor especifico
                existencias=proveedor[i].getCantidad();
            }else{
                existencias=-1;//Si retorna un -1 estonces no encontro el NIT
            }
        }
    }
    return existencias;
    
}
int getCoutCantProducts_Oca(Ocacional proveedor[]){

}
int main(){
    Frecuentes cliente[c];
    Ocacional proveedorOca[pO];
    Constante proveedorConst[pC];
    int opt,aux;
    bool registro=false;
    Menus menu;
    do{
        menu.letrero();
        menu.menu();
        cin>>opt;
        switch(opt){//menu principal general
            case 1://Registrar persona
                do{
                    system("cls");
                    menu.menuPersona();
                    cin>>opt;
                    switch (opt){//menu clase de personas clioente o proveedor
                        case 1://Registrar persona Cliente
                            system("cls");
                            for(int i=0;i<c;i++){
                                aux=cliente[i].getNumCompras();
                                if(aux==0){//El espacio del vector cliente esta vacio por lo tanto se puede registrar un cliente
                                    string nom,prod,org;
                                    int gen,id,estr,numCrop;
                                    menu.registro();
                                    cout<<"Nombre el cliente: ";
                                    cin>>nom;
                                    cin.ignore();
                                    cout<<"Genero del cliente\n1.Hombre\n2.Mujer\n3.Otro"<<endl;
                                    cin>>gen;
                                    cout<<"Numero de identidad: ";
                                    cin>>id;
                                    cout<<"Nombre del producto: ";
                                    cin>>prod;
                                    cin.ignore();
                                    cout<<"Nacionalidad del cliente: ";
                                    cin>>org;
                                    cin.ignore();
                                    cout<<"Estrato del cliente: ";
                                    cin>>estr;
                                    cout<<"Numero de compras: ";
                                    cin>>numCrop;
                                    cliente[i].setRegistrar(nom,gen,id,prod,org,estr,numCrop);
                                    i=c+1;
                                    registro=true;
                                }
                            }
                            if(registro==true){
                                cout<<"Registro exitoso"<<endl;
                                registro=false;
                            }else{
                                cout<<"Registro lleno\nRegistro inconcluso"<<endl;
                            }
                            system("pause");
                            opt=3;
                            system("cls");
                            break;
                        case 2://Registrar persona Proveedor
                            do{
                                system("cls");
                                menu.menuPersonaProveedor();
                                cin>>opt;
                                switch (opt){
                                    case 1://Registrar persona proovedor constante 
                                        system("cls");
                                        for(int i=0;i<pC;i++){
                                            aux=proveedorConst[i].getNit();
                                            if(aux==0){
                                                // void setRegistro(string nom,int gen,int id,string nomEmpr,int nit,string proConst,int cantd);
                                                string nom,nomEmpr,proConst;
                                                int gen,id,nit,cantd;
                                                menu.registro();
                                                cout<<"Nombre de proveedor: ";
                                                cin>>nom;
                                                cout<<"Gnero del proveedor\n1.Hombre\n2.Mujer\n3.Otro\n";
                                                cin>>gen;
                                                cout<<"Numero de identidad: ";
                                                cin>>id;
                                                cout<<"Nombre de la empresa: ";
                                                cin>>nomEmpr;
                                                cout<<"NIT: ";
                                                cin>>nit;
                                                cout<<"Nombre de producto: ";
                                                cin>>proConst;
                                                cout<<"Cantidad: ";
                                                cin>>cantd;
                                                proveedorConst[i].setRegistro(nom,gen,id,nomEmpr,nit,proConst,cantd);
                                                i=pC+1;
                                                registro=true;
                                            }
                                        }
                                        if(registro==true){
                                            cout<<"Registro exitoso"<<endl;
                                            registro=false;
                                        }else{
                                            cout<<"Registro lleno\nRegistro inconcluso"<<endl;
                                        }
                                        system("pause");
                                        opt=3;
                                        break;
                                    case 2://Registrar persona proovedor ocacional
                                         system("cls");
                                        for(int i=0;i<pO;i++){
                                            aux=proveedorOca[i].getNit();
                                            if(aux==0){
                                                string nom,nomEmpr,proOca,fecha,dia,mes,ano;
                                                int gen,id,nit;
                                                menu.registro();
                                                cout<<"Nombre de proveedor: ";
                                                cin>>nom;
                                                cout<<"Gnero del proveedor\n1.Hombre\n2.Mujer\n3.Otro\n";
                                                cin>>gen;
                                                cout<<"Numero de identidad: ";
                                                cin>>id;
                                                cout<<"Nombre de la empresa: ";
                                                cin>>nomEmpr;
                                                cout<<"NIT: ";
                                                cin>>nit;
                                                cout<<"Nombre de producto: ";
                                                cin>>proOca;
                                                cout<<"Fecha dd/mm/aaaa:\nDia -> ";
                                                cin>>dia;
                                                cout<<"Mes ->";
                                                cin>>mes;
                                                cout<<"Anio ->";
                                                cin>>ano;
                                                fecha=dia+"/"+mes+"/"+ano;
                                                proveedorOca[i].setRegistro(nom,gen,id,nomEmpr,nit,proOca,fecha);
                                                i=pO+1;
                                                registro=true;
                                            }
                                        }
                                        if(registro==true){
                                            cout<<"Registro exitoso"<<endl;
                                            registro=false;
                                        }else{
                                            cout<<"Registro lleno\nRegistro inconcluso"<<endl;
                                        }
                                        system("pause");
                                        opt=3;
                                        break;
                                    case 3://salir
                                        break;
                                    default:
                                        break;
                                }
                            }while(opt!=3);
                            system("cls");
                            opt=0;
                            break;
                        case 3://Salir del menu
                            opt=3;
                            system("cls");
                            break;
                        default:
                                system("cls");
                            break;
                    }
                }while (opt!=3);
                opt=0;
                break;
            case 2://Ver persona
                system("cls");
                do{
                    menu.menuPersona();
                    cin>>opt;
                    switch (opt){//menu ver persona
                        case 1://Persona cliente ver
                            system("cls");
                            do{
                                menu.menuExiste();
                                cin>>opt;
                                switch(opt){
                                case 1:
                                    system("cls");
                                    cout<<"Porfavor digite el numero de identidad de la persona\n>";
                                    cin>>aux;
                                    for(int i=0;i<c;i++){
                                        if(aux==cliente[i].getIdent()){
                                            menu.verRegistro();
                                            cliente[i].getRegistro();
                                            menu.finRegistro();
                                        }
                                    }
                                    system("pause");
                                    system("cls");
                                    break;
                                case 2:
                                    system("cls");
                                    for(int i=0;i<c;i++){
                                        if(cliente[i].getIdent()!=0){
                                            menu.verRegistro();
                                            cliente[i].getRegistro();
                                            menu.finRegistro();
                                        }
                                    }
                                    system("pause");
                                    system("cls");
                                    break;
                                case 3:
                                    system("cls");
                                    break;
                                default:
                                    system("cls");
                                    break;
                                }
                            }while(opt!=3);
                            opt=0;
                            break;
                        case 2://Persona proveedor 
                            system("cls");
                            do{
                                menu.menuExiste();
                                cin>>opt;
                                switch(opt){
                                    case 1://Ver proveedor especifico
                                        system("cls");
                                        cout<<"Porfavor digite el nit del proveedor"<<endl;
                                        cin>>aux;
                                        for(int i=0;i<pC;i++){
                                            if(aux==proveedorConst[i].getNit()){
                                                menu.verRegistro();
                                                proveedorConst[i].getRegistro();
                                                menu.finRegistro();
                                                registro=true;
                                            }
                                        }
                                        for(int i=0;i<pO;i++){
                                            if(aux==proveedorOca[i].getNit()){
                                                menu.verRegistro();
                                                proveedorOca[i].getRegistro();
                                                menu.finRegistro();
                                                registro=true;
                                            }
                                        }
                                        if(registro==false)
                                            cout<<"Registro no encontrado"<<endl;
                                        system("pause"); 
                                        registro=false;                               
                                        break;
                                    case 2://Ver todos los proveedores
                                        system("cls");
                                        cout<<"----------------------------------------------------------"<<endl;
                                        cout<<"Proveedores constantes"<<endl;
                                        cout<<"----------------------------------------------------------"<<endl;
                                        for(int i=0;i<pC;i++){
                                            if(proveedorConst[i].getNit()!=0){
                                                menu.verRegistro();
                                                proveedorConst[i].getRegistro();
                                                menu.finRegistro();
                                            }
                                        }
                                        cout<<"----------------------------------------------------------"<<endl;
                                        cout<<"Proveedores ocacionales"<<endl;
                                        cout<<"----------------------------------------------------------"<<endl;
                                        for(int i=0;i<pO;i++){
                                            if(proveedorOca[i].getNit()!=0){
                                                menu.verRegistro();
                                                proveedorOca[i].getRegistro();
                                                menu.finRegistro();
                                            }
                                        }
                                        system("pause");                                
                                        break;
                                    case 3://Salir
                                        system("cls");
                                        break;
                                    default:
                                        system("cls");
                                        break;
                                }
                                system("cls");
                            }while(opt!=3);
                            opt=0;
                            system("pause");
                            break;
                        case 3:
                            break;
                        default:
                            system("cls");
                            break;
                    }
                }while(opt!=3);
                system("cls");
                break;
            case 3://Existencia de productos
                do{
                    system("cls");
                    menu.menuExiste();
                    cin>>opt;
                    switch (opt){//menu EXISTENCIA DE PRODUCTOS
                        case 1://Proveedor especifico
                            cout<<"Porvafor escriba el nit del proveedor"<<endl;
                            cin>>aux;
                            aux=getCoutCantProducts_Const(proveedorConst,aux);
                            if(aux!=-1)
                                cout<<"Las existencias del proveedor con el NIT digitado son "<<aux<<" productos"<<endl;
                            else
                                cout<<"Proveedor no existe"<<endl;
                            system("pause");
                            system("cls");
                            break;
                        case 2://Todas las existencias
                            aux=0;
                            cout<<"Las existencias de todos los proveedores son "<<getCoutCantProducts_Const(proveedorConst,aux)<<" productos"<<endl;
                            system("pause");
                            system("cls");
                            break;
                        case 3://Salir
                            break;
                        default:
                            system("cls");
                            break;
                    }
                }while(opt!=3);
                system("cls");
                opt=0;
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
