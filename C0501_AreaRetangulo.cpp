//*****************************************************************************
//* Cap�tulo 05 - Estruturas Sequ�nciais
//*               Entrada e Sa�da de Dados
//*****************************************************************************
//* Ficheiro C0501_AreaRetangulo.cpp
//*****************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
float altura = 0;
float largura = 0;
float area = 0;
setlocale(LC_ALL, "Portuguese");
printf("Este programa calcula a �rea de um rect�ngulo \n");
printf("Por favor, insira o valor da altura: \n");
scanf("%f",&altura);
printf("Por favor, insira o valor da largura: \n");
scanf("%f",&largura);
area = largura * altura;
printf("O valor da �rea �: %.2f m2\n", area);
system("pause");
}
