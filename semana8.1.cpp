#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	string nombre[2];// vector que va almacenar los nombres 
	double nota [3];// vector para almacenar las notas
	double Nsuma=0,promedio=0;// calcular el promedio 
	
	for(int i=0;i<2;i++){
		cout<<" Ingrese el nombre del estudiante no."<<i+1<<":";
		cin>>nombre[i];
		Nsuma=0;/// reseteando la variable del vector 
		for (int j=0;j<3;j++){/// ciclo que almacena las notas 
		cout<<"ingrese la nota no."<<j+1<<":";//50,40,20
		cin>>nota [j];
		Nsuma= Nsuma + nota [j];// sumando todas las posiciones del vector nota // 50+40+20	
		
	}
	/// calculo del promedio
	promedio = Nsuma/3;
	cout<<" Su promedio es:"<<promedio<<endl;
	if(promedio<60){
		cout<<"reprobado"<<endl;
		
	} else{
		cout<<"aprobado "<<endl;
	}
	cout<<"\nResultados\n";
	cout<<"NOmbre\tNota1\tNota2\tNota3\n";
	for(int k=0;k<2;k++){
		cout<<nombre[k]<<"\t"<<nota[0]<<"\t"<<nota[1]<<"\t"<<nota[2]<<"\n";
	}
	
}

	
	

}


		
