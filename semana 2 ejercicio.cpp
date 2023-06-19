#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main (){
	char nombre [50];

		
		for (int a=0;a<5;a++){
	
	cout<<"ingrese el nombre de la persona: "<<endl;
	cin.getline(nombre,50,'\n');
	
	cout<<nombre;
	
	int distancia = strlen(nombre);
	cout<<" = "<<"cantidad de espacios"<<distancia<<'\n';
	

	
		}
	
		
	return 0;

}
