/*2. Realice un programa que lea de la entrada est�ndar los siguientes datos de
una persona:

	Edad: dato de tipo entero.
	Sexo: dato de tipo car�cter.
	Altura en metros: dato de tipo real.
	
Ejecutar el programa con entradas err�neas y observe el resultado. 
Por ejemplo: introduzca un dato tipo car�cter cuando se espera un dato tipo entero.*/

#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Digite su edad: ";
	cin>>edad;
	cout<<"Digite su sexo: ";
	cin>>sexo;
	cout<<"Digite su altura en metros: ";
	cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura en metros: "<<altura<<endl;
	
	
	return 0;
}
