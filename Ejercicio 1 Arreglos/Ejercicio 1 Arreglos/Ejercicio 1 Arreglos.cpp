//Esdras Abel Sapon Diaz
//Carné: 3090-21-2890
//Tercer Semestre Ingeniería en Sistemas "B"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int arreglo[100];
	for (int i = 0; i < 100; i++)
	{
		arreglo[i] = i + 1;
	}
	cout << "Orden ascendente: " << endl;
	for (int i = 0; i < 100; i++)
	{
		cout << arreglo[i] << endl;
	}
	cout << "Orden descendente: " << endl;
	for (int i = 99; i >= 0; i--)
	{
		cout << arreglo[i] << endl;
	}
	return 0;
}