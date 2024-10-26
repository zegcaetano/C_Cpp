//*****************************************************************************
//* Ficheiro E040216_Horas_Minutos.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
int horas = 0, minutos = 0, total = 0;
printf("Este programa recebe as horas e minutos que durou uma maratona, e apresenta o tempo total em minutos\n");
printf("Indique o valor das horas: \n");
scanf("%d",&horas);
printf("Indique o valor dos minutos: \n");
scanf("%d",&minutos);
total = (horas * 60) + minutos;
printf("O tempo total é de %d minutos\n", total);
system("pause");
}

