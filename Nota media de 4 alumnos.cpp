/*5.	Escriba un programa que lea la nota final de cuatros alumnos y calcule la nota final media de los 4 alumnos.*/
#include<iostream>
using namespace std;

int main(){
	float nota1, nota2, nota3, nota4;
	int notaFinalMedia;
	
	cout<<"Ingrese nota del alumno 1: ";
	cin>>nota1;
	cout<<"Ingrese nota del alumno 2: ";
	cin>>nota2;
	cout<<"Ingrese nota del alumno 3: ";
	cin>>nota3;
	cout<<"Ingrese nota del alumno 4: ";
	cin>>nota4;
	
	notaFinalMedia = (nota1+nota2+nota3+nota4)/4;
	
	cout<<"la final media es:"<<notaFinalMedia;
	
	return 0;
	
}
