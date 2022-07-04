#include "Generador.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <conio.h>
string Generador::getString(int orden){
		int i=0;
		string nom;
		string a[] = {
				"Esteban",
				"Dario",
				"Mireya",
				"Nubia",
				"Gustavo Adolfo",
				"Julio",
				"Carlos",
				"Helena",
				"Sebastian",
				"Nicolai",
				"Daniel",		
				"Carolina",		
				"Hugo",		
				"Sandra",		
				"Cristina",
				"Ruperto",
				"Salomé",
				"Salomón",
				"Salvador",
				"Salvio",
				"Samuel",
				"Sandra",
				"Sansón",
				"Santiago",
				"Sara",
				"Sebastián",
				"Segismundo",
				"Sergio",
				"Severino",
				"Silvia",
				"Simeón",
				"Simón",
				"Siro",
				"Sixto",
				"Sofía",
				"Soledad",
				"Sonia",
				"Susana",
				"Tadeo",
				"Tarsicio"
			};
		string b[] ={
			"Televisores",
			"Parlantes",
			"Tabletas",
			"Refrigeradores",
			"Congeladores",
			"Lavaplatos",
			"Máquinas",
			"Aspiradoras",
			"Enceradoras",
			"Trituradores"
		};
		string c[] ={
			"EEUU",
			"Argentina",
			"Bolivia",
			"Brasil",
			"Colombia",
			"Chile",
			"Dominicana",
			"Ecuador",
			"Salvador"
		};
		string d[] ={
			"IKEA",
			"CANON",
			"LEGO",
			"SONY",
			"HAAGEN_DASZ",
			"WD-40",
			"YAHOO",
			"PEPSI"
		};
		switch(orden){
			case 1://RETORNA NOMBRE
				i=rand() % 38;
				nom=a[i];
				break;
			case 2://RETORNA PRODUCTO
				i=rand() % 9;
				nom=b[i];
				break;
			case 3://RETORNA ORIGEN
				i=rand() % 8;
				nom=c[i];
				break;
			case 4://RETORNA NOMBREEMPRESA
				i=rand() % 7;
				nom=d[i];
				break;
			case 5://RETORNA  FECHA
				nom="31/01/2023";
				break;
			default:
				break;
		}
	return  nom;
}
int Generador::getNum(int orden){
	switch(orden){
		case 1://RETORNA GENERO
			orden=1+rand() % 3;
			break;
		case 2://RETORNA IDENTIDAD
			orden=30000+rand() % 32767;
			break;
		case 3://RETORNA ESTRATO
			orden=1+rand() % 10;
			break;
		case 4://RETORNA NUMERO DE COMPRAS o cantidad
			orden=1+rand() % 100;
			break;
		case 5://RETORNA NIT
			orden=10000+rand() % 29999;
			break;
		default:
			break;
	}
	return orden;
}