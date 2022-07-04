#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
using namespace std;
void letrero(){
    cout<<"------------------------------------------"<<endl;
    cout<<"------Programa-respuesta-a-los-puntos-----"<<endl;
    cout<<"-----------pregunta-del-taller------------"<<endl;
    cout<<"------------------------------------------"<<endl;
}
void fin(){
    cout<<"---------------------------"<<endl;
    cout<<"------Fin del programa-----"<<endl;
    cout<<"---------------------------"<<endl;
}
void menu(){
    cout<<"------------------------------------------"<<endl;
    cout<<"Puntos que contiene este programa"<<endl;
    cout<<"Digite una opcion"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"1)Punto 3.3(pregunta)"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"2)Punto 3.4(pregunta)"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"3)Punto 3.5(pregunta)"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"4)Punto 3.6(pregunta)"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"5)Punto 3.7(pregunta)"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"6)Punto 3.8(pregunta)"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"7)Punto 3.10(pregunta)"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"8)Salir del programa"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"------------------------------------------"<<endl;
}
void optUno(){
    cout<<"------------------------------------------"<<endl;
    cout<<"Pregunta:\nCual es la diferencia entre una variable local y un miembro de datos?"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Respuesta"<<endl;
    cout<<"------------------------------------------"<<endl; 
    cout<<"Una variable loca se declara entre una estructura que use {}, y solo se puede\nusar dentro de la estructura. A diferencia de una variable de una clase"<<endl;
    cout<<"que puede guardar los datos y acceder a estos mismo desde una funcion de la misma classe\no desde otra funcion externa(dependiendo la estructura de la clase)"<<endl;
    cout<<"------------------------------------------"<<endl;
    system("pause");
}
void optDos(){
    cout<<"------------------------------------------"<<endl;
    cout<<"Pregunta:\nExplique el propósito de un parámetro de una función. Cual es la diferencia entre un parametro y un argumento?"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Respuesta"<<endl;
    cout<<"------------------------------------------"<<endl; 
    cout<<"En el prototipo de la funcion se establecen los parametros de entrada de la funcion, los cuales, dichos parametros\nseran usados por la funcion para completar su tarea.";
    cout<<"Los argumentos son aquellas variables o datos que le enviamos\na la funcion desde la llamada de la funcion misma"<<endl;
    cout<<"------------------------------------------"<<endl;
    system("pause");
}
void optTres(){
    cout<<"------------------------------------------"<<endl;
    cout<<"Pregunta:\nExplique la diferencia entre un prototipo de funcion y la definicion de una funcion."<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Respuesta"<<endl;
    cout<<"------------------------------------------"<<endl; 
    cout<<"El prototipo de la funcion es cuando se declaran lso parametros de entrada y el tipo de la funcion,en cambio\n";
    cout<<"cuando definimos una funcion declaramos los parametros de entrada(le damos un nombre propio a las variables)\npara despues darle las ordenes o tareas que debera cuimplir la funcion"<<endl;
    cout<<"------------------------------------------"<<endl;
    system("pause");
}
void optCuatro(){
    cout<<"------------------------------------------"<<endl;
    cout<<"Pregunta:"<<endl;
    cout<<"a)Que es un constructor predeterminado?\nb)Como se inicializan los miembros de datos de un objeto, si una clase solo tiene un constructor predeterminado definido en forma implicita?"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Respuesta"<<endl;
    cout<<"------------------------------------------"<<endl; 
    cout<<"a)Un constructor ayuda a darle valores predefinidos a los datos miembros de la funcion";
    cout<<"b)Si dicho contructor esta predefinido para recibir el dato que se quiere iniciar se puede hcaer en el momento que se cree el objeto"<<endl;
    cout<<"en dado caso que el contructor no reciba datos por defecto entonces no se dedbe de poder inicializar el objeto con dicho dato."<<endl;
    cout<<"------------------------------------------"<<endl;
    system("pause");
}
void optCinco(){
    cout<<"------------------------------------------"<<endl;
    cout<<"Pregunta:"<<endl;
    cout<<"Explique el propósito de un miembro de datos."<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Respuesta"<<endl;
    cout<<"------------------------------------------"<<endl; 
    cout<<"Los miembros de datos son las caracteristicas de un objeto o de la clase, estos tipos de datos(variables)"<<endl;
    cout<<"permiten guardar o amacenar los datos del objeto, para manipulalos"<<endl;
    cout<<"------------------------------------------"<<endl;
    system("pause");
}
void optSeis(){
    // ¿Qué es un archivo de encabezado? ¿Qué es un archivo de código fuente? Hable sobre el propósito de cada uno.
    cout<<"------------------------------------------"<<endl;
    cout<<"Pregunta:"<<endl;
    cout<<"a)Que es un archivo de encabezado?\nb)Que es un archivo de codigo fuente?\nHable sobre el propósito de cada uno"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Respuesta"<<endl;
    cout<<"------------------------------------------"<<endl; 
    cout<<"a)Son los archivo que se pre cargan para que el archivo que lo esta llamando pueda funcionar correctamente\nb)Es el archivo (directorio,carpeta,fichero) en la que se encuentra todo el coigo de un programa(proyecto)"<<endl;
    cout<<"------------------------------------------"<<endl;
    system("pause");
}
void optSiete(){
    // Explique por qué una clase podría proporcionar una función establecer y una función obtener para un miembro de
    // datos.
    cout<<"------------------------------------------"<<endl;
    cout<<"Pregunta:"<<endl;
    cout<<"Explique por qué una clase podría proporcionar una función establecer y una función obtener para un miembro de datos."<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Respuesta"<<endl;
    cout<<"------------------------------------------"<<endl; 
    cout<<"Con el fin de manipular los datos o caracteristicas(datos miembros)e un objeto se necesitan de una nomeclatura al nombrar clases set y get o\nobtener y establecer con el fin de reescribir u consultar los datos miembros del objeto(clase)"<<endl;
    cout<<"------------------------------------------"<<endl;
    system("pause");
}


main(){
    setlocale(LC_ALL, "");
    int opt;
    letrero();
    do{
        menu();
        cin>>opt;
        system("cls");
        switch (opt){
            case 1:
                    optUno();
                    system("cls");
                break;
            case 2:
                    optDos();
                    system("cls");
                break;
            case 3:
                    optTres();
                    system("cls");
                break;
            case 4:
                    optCuatro();
                    system("cls");
                break;
            case 5:
                    optCinco();
                    system("cls");
                break;
            case 6: 
                    optSeis();
                    system("cls");
                break;
            case 7:
                    optSiete();
                    system("cls");
                break;
            case 8:
                // SALIR DEL PROGRAMA
                break;
            default:
                break;
        }

    }while(opt!=8);
    fin();
}

