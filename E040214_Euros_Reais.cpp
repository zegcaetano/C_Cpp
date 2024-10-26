//*****************************************************************************
//* Ficheiro E040214_Euros_Reais.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
float euros = 0, reais = 0;
printf("Este programa faz a conversão de euros para reais\n");
printf("Indique o valor em euros: \n");
scanf("%f",&euros);
reais = euros * 6.11;
printf("%.2f euros são %.2f reais\n", euros, reais);
system("pause");
}

