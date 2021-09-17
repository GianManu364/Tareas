/*1.	Escribe un programa que lea de la entrada el precio de un producto
 y muestre en la salida estándar el precio del producto al aplicarle el IVA.*/
 
#include<iostream>

using namespace std;

int main(){
	float precio,precioFinal,IVA;
	
	cout<<"Digite el precio del producto: ";
	cin>>precio;
	
	IVA = precio*0.12;
	precioFinal = precio + IVA;
	
	
	cout<<"\nEl precio Final al aplicarle IVA es: "<<precioFinal;
	
	
	return 0;
}
