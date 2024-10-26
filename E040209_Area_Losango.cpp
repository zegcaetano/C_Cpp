//*****************************************************************************
//* Ficheiro E040209_Area_Losango.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");	
	
float diagonal1 = 0, diagonal2 = 0, area = 0;

printf("Este programa calcula a área de um losango \n");
printf("Por favor insira o valor da primeira diagonal(cm)\n");
scanf("%f",&diagonal1);
printf("Por favor insira o valor da segunda diagonal (cm)\n");
scanf("%f",&diagonal2);


area = (diagonal1 * diagonal2)/2;

printf("O valor da área do losango é: %.3f cm2. \n", area);
system("pause");

	
}
