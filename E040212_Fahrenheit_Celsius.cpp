//*****************************************************************************
//* Ficheiro E040212_Fahrenheit_Celsius.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

setlocale(LC_ALL, "Portuguese");
float C = 0, F = 0;
printf("Este programa faz a convers�o de graus fahrenheit para graus cent�grados\n");
printf("\n");
printf("Por favos insir a temperatura em graus fahrenheit\n");
scanf("%f", &F);
C = 5.0/9.0 * (F - 32);
printf("Est�o %.2f graus cent�grados \n", C);
system("pause");
}

