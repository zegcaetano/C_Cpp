
//*****************************************************************************
//* Ficheiro E040203_Area_Circulo.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
setlocale(LC_ALL, "Portuguese");	
	
float raio = 0, area = 0;
const float PI = 3.1415;
printf("Este programa calcula a �rea de um c�rculo \n");
printf("Por favor insira o valor do raio do c�rculo (cm)\n");
scanf("%f",&raio);

area = PI * pow(raio,2);

printf("O valor do �rea �: %.3f cm2. \n", area);
system("pause");

	
	
	
	
}
