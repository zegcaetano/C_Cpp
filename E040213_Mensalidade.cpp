//*****************************************************************************
//* Ficheiro E040213_Mensalidade.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
float subRef = 0, valorHora = 0, subTrans = 0, nrHoras = 0, mensalidade = 0;
int nrDias = 0;
printf("Este programa faz o cálculo do valor da sua mensalidade\n");
printf("Por favor insira o valor do seu subsídio de refeição:\n");
scanf("%f", &subRef);
printf("Agora insira o nr de dias em que assistiu a 3 ou mais horas de formação:\n");
scanf("%d", &nrDias);
printf("Insira agora o valor que ganha por hora (euros):\n");
scanf("%f",&valorHora);
printf("De seguida diga quantas horas de formação assistiu este mês:\n");
scanf("%f",&nrHoras);
printf("Por fim, diga qual o valor do seu subsídeo de transporte:\n");
scanf("%f",&subTrans);

mensalidade = (subRef * nrDias) + (valorHora * nrHoras) + subTrans;

printf("Este mês vai receber %.2f, cachiiiing\n", mensalidade);
system("pause");
}
