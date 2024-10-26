//*****************************************************************************
//* Ficheiro E040217_Horas_Segundos.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
int horas = 0, minutos = 0, segundos = 0, total = 0;
printf("Este programa recebe as horas, os minutos  e segundos que durou uma maratona, e apresenta o tempo total em segundos\n");
printf("Indique o valor das horas: \n");
scanf("%d",&horas);
printf("Indique o valor dos minutos: \n");
scanf("%d",&minutos);
printf("Indique o valor dos segundos: \n");
scanf("%d",&segundos);
total = ((horas * 60) * 60) + (minutos * 60) + segundos;
printf("O tempo total é de %d segundos\n", total);
system("pause");
}

