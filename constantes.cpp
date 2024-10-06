#include <iostream>
using namespace std;

//Declarando constantes
#define PI 3.1416 //NIVEL DE PREPROCESADOR

int main(){
	
	//Esta es una varible comun y corriente
	float altura = 1.71;
	cout <<altura << "\n";
	altura = 1.72;
	cout <<altura << "\n";
	//output: no da ningun error, porque si se puede cambiar la variable
	
	
	
	//Esta es una constante, definida atravez de la funcion main()...
	const float GRAVEDAD = 9.8;
	cout <<GRAVEDAD << "\n";
	//output: no da ningun error, porque no se trato de cambiar el valor de una constante..
	
	
	
	cout << PI;
	
	
	//solo es practica
	return 0;
}
