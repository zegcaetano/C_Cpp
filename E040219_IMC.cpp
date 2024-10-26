//*****************************************************************************
//* Ficheiro E040219_IMC.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
float peso = 0, altura = 0, IMC = 0;
printf("Este programa recebe o peso e altura de uma pessoa e calcula o seu IMC\n");
printf("Insira o peso do individuo (kg): \n");
scanf("%f",&peso);
printf("Insira a altura do individuo (m): \n");
scanf("%f",&altura);
IMC = peso / pow(altura,2);
printf("O IMC do individuo é %.2f Kg/m2 \n", IMC);
system("pause");
}
