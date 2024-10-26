//*****************************************************************************
//* Ficheiro E040210_Perimetro_Losango.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");	

	
float lado1 = 0, lado2 = 0, perimetro = 0;
printf("Este programa calcula o perímetro de um losango \n");
printf("Por favor insira o valor do primeiro lado(cm)\n");
scanf("%f",&lado1);
printf("Por favor insira o valor do segundo lado (cm)\n");
scanf("%f",&lado2);


perimetro = (2 * lado1) + (2 * lado2);

printf("O valor do perímetro do losango é: %.3f cm. \n", perimetro);
system("pause");

	
}
