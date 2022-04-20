//Esdras Abel Sapon Diaz
//Carné: 3890-21-2890
//Tercer Semestre Ingeniería en Sistemas "B"

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	string array[100];
	int n;

	cout << "Digite de que tamanio que sera el arreglo" << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "ingresa cualquier valor del arreglo del elemento " << i+1 << endl;
		cin >> array[i];
	}

	for (int i = n; i > -1; i--) {
		cout << array[i] << endl;
	}

}