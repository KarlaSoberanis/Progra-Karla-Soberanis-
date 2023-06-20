#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main (){
	char nombre [20];
	
	cout<<"ingrese el nombre de la persona: "<<endl;
	
	cout<< " " << endl;
	cin.getline(nombre,20,'/n');
	
	cout<< " "<< endl;
	
	cout << "frase inversa: "<< endl;
	
	cout<<" "<<endl;
	
	int longitud = strlen(nombre);
	for (int x =longitud - 1; x>= 0; x--){
		cout << nombre[x];
	}
	
	return 0;
}

