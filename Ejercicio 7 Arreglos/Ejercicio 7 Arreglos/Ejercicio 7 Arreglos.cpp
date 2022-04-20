//Esdras Abel Sapon Diaz
//Carné: 3890-21-2890
//Tercer Semestre Ingeniería en Sistemas "B"


#include <stdio.h>
#include <stdlib.h> 
int main(int argc, char *argv[]){int x,y,num=2, numeros[3][3];
for (x=0;x<3;x++){for (y=0;y<3;y++){numeros[x][y]=num;num=num*2;}}
printf("Introduzca coordenada x: ");scanf("%d",&x);
printf("Introduzca coordenada y: ");
scanf("%d",&y);
printf("El número es: %d\n",numeros[x][y]);
system("PAUSE");
return 0;
}