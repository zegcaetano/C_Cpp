//*****************************************************************************
//* Segundo Programa
//*****************************************************************************
//* Ficheiro C0401_SomaDeDois.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Funções: setlocale(LC_ALL, "Portuguese")
int main()
{
float num1 = 0;
float num2 = 0;
float soma = 0;

setlocale(LC_ALL, "Portuguese");
printf("Por favor, insira dois números para que seja apresentada a sua soma: \n");
scanf("%f",&num1);
scanf("%f",&num2);
soma = num1 + num2;
printf("Soma: %.2f \n", soma);
system("pause");

}
