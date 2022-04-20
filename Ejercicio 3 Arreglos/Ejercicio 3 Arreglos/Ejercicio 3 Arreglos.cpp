//Esdras Abel Sapon Diaz
//Carne: 3090-21-2890
//Tercer Semestre Ingenieria en Sistemas "B"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, cont, z, i, tabla[51];
	i = 0;

	for (x = 1; x <= 51; x++) 
	{
		cont = 0;

		for (z = 1; z <= x; z++)
		{
			if (x % z == 0)
			{
				cont++;
			}
		}

		if (cont == 2 || z == 1 || z == 0) 
		{
			tabla[i] = x;
			i++;
		}
	}

	for (x = 0; x < i; x++) 
	{
		printf("%d\n", tabla[x]);
	}

	system("pause");
	return 0;

}