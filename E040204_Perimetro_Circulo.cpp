//*****************************************************************************
//* Ficheiro E040204_Perimetro_Circulo.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");	
	
float raio = 0, perimetro = 0;
const float PI = 3.1415;
printf("Este programa calcula o perímetro de um círculo \n");
printf("Por favor insira o valor do raio do círculo (cm)\n");
scanf("%f",&raio);

perimetro = 2 * PI * raio;

printf("O valor do perímetro é: %.3f cm. \n", perimetro);
system("pause");

	
}
