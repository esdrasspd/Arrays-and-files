//Esdras Abel Sapon Diaz
//Carné: 3890-21-2890
//Tercer Semestre Ingeniería en Sistemas 


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
	string nombres[5];
	cout << "Debe de ingresar 5 nombres" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "Ingrese el nombre No. " << i + 1 << endl;
		cin >> nombres[i];
	}
	cout << "Los nombres que usted ingreso de forma ascedente son: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << nombres[i]<<endl;
	}
	cout << "Los nombres que usted ingreso de forma descedente son: " << endl;
	for (int i = 4; i > -1; i--)
	{
		cout << nombres[i] << endl;
	}
	return 0;
}