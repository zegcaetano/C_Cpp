//*****************************************************************************
//* Ficheiro E040211_Celsius_Fahrenheit.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL, "Portuguese");
float C = 0, F = 0;
printf("Este programa faz a convers�o de graus cent�grados para graus fahrenheit\n");
printf("\n");
printf("Por favos insir a temperatura em graus cent�grados\n");
scanf("%f", &C);
F = 9.0/5.0 * C + 32;
printf("Est�o %.2f graus fahrenheit \n", F);
system("pause");
}

