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
printf("Este programa calcula a �rea de uma forma geom�trica � sua escolha:\n");
printf("Escolha a forma primindo um nr de 1 a 4\n");
printf("\n");
printf("******MENU*****\n");
printf("**1.Quadrado**\n");
printf("**2.Ret�ngulo**\n");
printf("**3.Tri�ngulo**\n");
printf("***4.C�rculo***\n");

scanf("%d",&pick);
switch (pick){
	case 1:
		printf("Por favor indique a dimens�o do lado do quadrado (cm): \n");
		scanf("%f", &largura);
		resultado = largura * largura;
		printf("A �rea do quadrado � %.2f * %.2f = %.2f cm2\n ", largura, largura, resultado);
		break;
	case 2:
		printf("Por favor indique a dimens�o da largura do rect�ngulo (cm): \n");
		scanf("%f", &largura);
		printf("Por favor indique a dimens�o do comprimento do rect�ngulo (cm): \n");
		scanf("%f", &comprimento);
		resultado = largura * comprimento;
		printf("A �rea do rect�ngulo � %.2f * %.2f = %.2f cm2\n ", largura, comprimento, resultado);
		break;
	case 3:
		printf("Por favor indique a dimens�o da base do tri�ngulo (cm): \n");
		scanf("%f", &base);
		printf("Por favor indique a dimens�o da altura do tri�ngulo (cm): \n");
		scanf("%f", &altura);
		resultado = (base * altura) / 2;
		printf("A �rea do tri�ngulo � (%.2f * %.2f)/2 = %.2f cm2\n ",base, altura, resultado);
		break;
	case 4:
		printf("Por favor indique a dimens�o do raio do c�rculo (cm): \n");
		scanf("%f", &raio);
		resultado = pi * pow(raio,2);
		printf("A �rea do c�rculo � pi * (%.2f * %.2f) = %.2f cm2\n", raio, raio, resultado);
		break;
}
}

