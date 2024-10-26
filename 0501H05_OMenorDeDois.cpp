//*****************************************************************************
//* Ficheiro 0501H05_OMenorDeDois.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
int num1 = 0, num2 = 0;
printf("Este programa recebe dois números e diz qual deles é o menor.\n");
printf("Por favor insira o primeiro número: \n");
scanf("%d",&num1);
printf("Por favor insira o segundo número: \n");
scanf("%d",&num2);
if (num1 < num2)
	printf("O número %d é menor que o número %d\n", num1, num2);
else
	printf("O número %d é menor que o número %d\n", num2, num1);
system("pause");
}
