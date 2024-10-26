//*****************************************************************************
//* Ficheiro 0501H03_VerdadeiroOuFalso.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
char resp = '\0';
printf("TESTE!!!\n");
printf("Diga se a afirmação é verdadeira (V) ou falsa (F)\n");
printf("A Vitamina C++ faz bem à saúde\n");
scanf("%c", &resp);
if (resp == 'V')
	printf("Certo!!!\n");
else if (resp == 'F')
	printf("Errado... Claro que faz!\n");
else
	printf("Erro! Por favor responda usando V/F\n");
system("pause");
}
