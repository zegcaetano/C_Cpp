//*****************************************************************************
//* Ficheiro 0501H07_OrdemDecrescente.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
int num1 = 0, num2 = 0;
printf("Este programa recebe dois números e apresenta-os por ordem decrescente.\n");
printf("Por favor insira o primeiro número: \n");
scanf("%d",&num1);
printf("Por favor insira o segundo número: \n");
scanf("%d",&num2);
if (num1 < num2)
	printf("%d, %d\n", num2, num1);
else
	printf("%d, %d\n", num1, num2);
system("pause");
}
