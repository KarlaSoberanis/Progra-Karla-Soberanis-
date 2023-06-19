// cadenas utilizando arreglos

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main (){
	char nombre [20];
	
	cout<<"ingrese el nombre de la persona: "<<endl;
	cin.getline(nombre,20,'/n');// ingresar datps como string y este necesita tres parametros: donde se almacena, la dustancia del vector, delimitar hasta donde llega 
	
	cout<<nombre;
	
	int distancia = strlen(nombre);// para determinar la catidad de espacios solo funciona si es string o forma de char 
	
	cout<<" = "<<"cantidad de espacios"<<distancia;
	
	return 0;
}
