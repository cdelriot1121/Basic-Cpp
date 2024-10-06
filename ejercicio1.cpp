/*
HACER UN PROGRAMA QUE CALCULE EL INDICE  DE MASA
CORPORAL O IMC
*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	
	//Definir variables
	float peso = 0;
	float altura = 0;
	float resultado = 0;
	
	
	cout << "Calculadora de Indice de Masa corporal (IMC)\n";
	cout << "Digite su peso en KG: ";
	cin>>peso;
	cout << "Digite su altura en metros: ";
	cin >> altura;
	
	
	//Operador para calcular el resultado del IMC...
	resultado = peso / pow(altura , 2);
	cout << "Su IMC es: " <<setprecision(4)<<resultado<< " KG/m^2";
	
	return 0;
}
