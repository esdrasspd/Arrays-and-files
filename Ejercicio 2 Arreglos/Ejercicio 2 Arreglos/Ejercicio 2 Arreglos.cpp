#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
	int arreglo[101];
	cout << "Los numeros pares del 0 al 100 son: " << endl;
	for (int i = 0; i < 101; i++)
	{
		arreglo[i] = i;
		if(arreglo[i] % 2 == 0)
		{
			cout << arreglo[i] << endl;
		}
	}
	cout << "Los numeros impares del 0 al 100 son: " << endl;
	for (int i = 0; i < 101; i++)
	{
		arreglo[i] = i;
		if (arreglo[i] % 2 != 0)
		{
			cout << arreglo[i] << endl;
		}
	}
	return 0;
}
