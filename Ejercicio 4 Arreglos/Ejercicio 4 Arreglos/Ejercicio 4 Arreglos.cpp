//Esdras Abel Sapon Diaz
//Carne: 3090-21-2890
//Tercer Semestre Ingeniería en Sistemas

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main()
{
	int numero[5], suma = 0, resta = 0, mult = 0, div = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Digite un numero: " << endl;
		cin >> numero[i];
		
	}
	suma = numero[0];
	resta = numero[0];
	mult = numero[0];
	div = numero[0] / numero[4];
	for (int i = 1; i < 5; i++)
	{
		suma += numero[i];
		resta -= numero[i];
		mult *= numero[i];
	}
	cout << "La suma de los elementos del array son: " << suma << endl;
	cout << "La resta de los elementos del array son: " << resta << endl;
	cout << "La multiplicacion de los elementos del array son: " << mult << endl;
	cout << "La division de los elementos del array son: " << div << endl;
	return 0;
}