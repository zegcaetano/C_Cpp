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
printf("Este programa faz o c�lculo do valor da sua mensalidade\n");
printf("Por favor insira o valor do seu subs�dio de refei��o:\n");
scanf("%f", &subRef);
printf("Agora insira o nr de dias em que assistiu a 3 ou mais horas de forma��o:\n");
scanf("%d", &nrDias);
printf("Insira agora o valor que ganha por hora (euros):\n");
scanf("%f",&valorHora);
printf("De seguida diga quantas horas de forma��o assistiu este m�s:\n");
scanf("%f",&nrHoras);
printf("Por fim, diga qual o valor do seu subs�deo de transporte:\n");
scanf("%f",&subTrans);

mensalidade = (subRef * nrDias) + (valorHora * nrHoras) + subTrans;

printf("Este m�s vai receber %.2f, cachiiiing\n", mensalidade);
system("pause");
}
