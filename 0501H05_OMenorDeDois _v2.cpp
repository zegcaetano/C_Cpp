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
printf("Este programa recebe dois n�meros e diz qual deles � o menor.\n");
printf("Por favor insira o primeiro n�mero: \n");
scanf("%d",&num1);
printf("Por favor insira o segundo n�mero: \n");
scanf("%d",&num2);
switch (num1 < num2){
	case true:
		printf("O n�mero %d � menor que o n�mero %d\n", num1, num2);
		break;
	case false:
		printf("O n�mero %d � menor que o n�mero %d\n", num2, num1);
		break;
}
system("pause");
}
