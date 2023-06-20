
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std; using reverse std;
int main (){
	char nombre [20];
	
	cout<<"ingrese el nombre de la persona: "<<endl;
	
	cout<< " " << endl;
	cin.getline(nombre,20,'/n');
	
	cout << nombre << endl;
	
	string nombre_reversed(nombre);{
	
	reverse(nombre_reversed.begin(), nombre_reversed.end());
	cout<< nombre_reversed << endl;
	
	}

	
	return 0;
}
