//*****************************************************************************
//* Ficheiro 0501H13_Area.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
const float pi = 3.1415;
int pick = 0;
float base = 0, altura = 0, largura = 0, comprimento = 0, raio = 0, resultado = 0;
printf("Este programa calcula a área de uma forma geométrica à sua escolha:\n");
printf("Escolha a forma primindo um nr de 1 a 4\n");
printf("\n");
printf("******MENU*****\n");
printf("**1.Quadrado**\n");
printf("**2.Retângulo**\n");
printf("**3.Triângulo**\n");
printf("***4.Círculo***\n");

scanf("%d",&pick);
switch (pick){
	case 1:
		printf("Por favor indique a dimensão do lado do quadrado (cm): \n");
		scanf("%f", &largura);
		resultado = largura * largura;
		printf("A área do quadrado é %.2f * %.2f = %.2f cm2\n ", largura, largura, resultado);
		break;
	case 2:
		printf("Por favor indique a dimensão da largura do rectângulo (cm): \n");
		scanf("%f", &largura);
		printf("Por favor indique a dimensão do comprimento do rectângulo (cm): \n");
		scanf("%f", &comprimento);
		resultado = largura * comprimento;
		printf("A área do rectângulo é %.2f * %.2f = %.2f cm2\n ", largura, comprimento, resultado);
		break;
	case 3:
		printf("Por favor indique a dimensão da base do triângulo (cm): \n");
		scanf("%f", &base);
		printf("Por favor indique a dimensão da altura do triângulo (cm): \n");
		scanf("%f", &altura);
		resultado = (base * altura) / 2;
		printf("A área do triângulo é (%.2f * %.2f)/2 = %.2f cm2\n ",base, altura, resultado);
		break;
	case 4:
		printf("Por favor indique a dimensão do raio do círculo (cm): \n");
		scanf("%f", &raio);
		resultado = pi * pow(raio,2);
		printf("A área do círculo é pi * (%.2f * %.2f) = %.2f cm2\n", raio, raio, resultado);
		break;
}
}

