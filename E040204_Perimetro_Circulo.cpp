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
printf("Este programa calcula o per�metro de um c�rculo \n");
printf("Por favor insira o valor do raio do c�rculo (cm)\n");
scanf("%f",&raio);

perimetro = 2 * PI * raio;

printf("O valor do per�metro �: %.3f cm. \n", perimetro);
system("pause");

	
}
