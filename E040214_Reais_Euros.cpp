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
printf("Este programa faz a conversão de euros para dólares\n");
printf("Indique o valor em euros: \n");
scanf("%f",&euros);
dolares = euros * 1.08;
printf("%.2f euros são %.2f dólares\n", euros, dolares);
system("pause");
}

