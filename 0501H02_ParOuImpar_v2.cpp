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
switch (num % 2){
	case 0:
		printf("O n�mero � par\n");
		break;
	case 1:
		printf("O n�mero � impar\n");
		break;
}
system("pause");
}
