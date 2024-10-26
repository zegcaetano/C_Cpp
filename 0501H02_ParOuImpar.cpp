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
printf("Este programa diz se um número inteiro é par ou impar\n");
printf("Por favor insira um número inteiro: ");
scanf("%d", &num);
if (num % 2 == 0)
	printf("O número é par\n");
else
	printf("O número é impar\n");

system("pause");
}
