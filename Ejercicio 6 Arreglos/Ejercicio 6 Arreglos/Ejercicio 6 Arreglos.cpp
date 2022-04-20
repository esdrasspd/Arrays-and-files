//Esdras Abel Sapon Diaz
//Carné: 3090-21-2890
//Tercer Semestre Ingeniería en Sistemas Sección "B"


#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	float m, numero[10];
	int i, j, n;

	cout << "De que tamaño sera el arreglo: ";
	cin >> n;

	for (i = 0; i < n; i++) {
		cout << "Escriba un numero: ";
		cin >> numero[i];
	}
	for (i = 0; i < n - 1; i++) {
		for (j = i; j < n; j++) {
			if (numero[i] < numero[j]) {
				m = numero[i];
				numero[i] = numero[j];
				numero[j] = m;
			}
		}
	}
	for (i = n - 1; i >= 0; i--) {
		cout << numero[i] << endl;
	}
}