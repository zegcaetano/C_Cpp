//*****************************************************************************
//* Ficheiro 0501H02_ParOuImpar.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int num = 0;
printf("Este programa diz se um n�mero inteiro � par ou impar\n");
printf("Por favor insira um n�mero inteiro: ");
scanf("%d", &num);
if (num % 2 == 0)
	printf("O n�mero � par\n");
else
	printf("O n�mero � impar\n");

system("pause");
}
