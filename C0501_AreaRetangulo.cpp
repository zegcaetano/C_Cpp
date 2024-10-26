//*****************************************************************************
//* Capítulo 05 - Estruturas Sequênciais
//*               Entrada e Saída de Dados
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
printf("Este programa calcula a área de um rectângulo \n");
printf("Por favor, insira o valor da altura: \n");
scanf("%f",&altura);
printf("Por favor, insira o valor da largura: \n");
scanf("%f",&largura);
area = largura * altura;
printf("O valor da área é: %.2f m2\n", area);
system("pause");
}
