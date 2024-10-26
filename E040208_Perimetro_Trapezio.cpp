//*****************************************************************************
//* Ficheiro E040208_Perimetro_Trapezio.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");	
	
float lado1 = 0, lado2 = 0, lado3 = 0, lado4 = 0, perimetro = 0;

printf("Este programa calcula o perímetro de um trapézio \n");
printf("Por favor insira o valor do lado 1 (cm)\n");
scanf("%f",&lado1);
printf("Por favor insira o valor do lado 2 (cm)\n");
scanf("%f",&lado2);
printf("Por favor insira o valor do lado 3 (cm)\n");
scanf("%f",&lado3);
printf("Por favor insira o valor do lado 4 (cm)\n");
scanf("%f",&lado4);

perimetro = lado1 + lado2 + lado3 + lado4;

printf("O valor do perímetro do trapézio é: %.3f cm. \n", perimetro);
system("pause");

	
}
