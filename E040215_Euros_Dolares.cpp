//*****************************************************************************
//* Ficheiro E040215_Euros_Dolares.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
float euros = 0, dolares = 0;
printf("Este programa faz a convers�o de euros para d�lares\n");
printf("Indique o valor em euros: \n");
scanf("%f",&euros);
dolares = euros * 1.08;
printf("%.2f euros s�o %.2f d�lares\n", euros, dolares);
system("pause");
}

