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
printf("Diga se a afirma��o � verdadeira (V) ou falsa (F)\n");
printf("A Vitamina C++ faz bem � sa�de\n");
scanf("%c", &resp);
switch (resp){
	case 'V':
		printf("Certo!!!\n");
		break;
	case 'F':
		printf("Errado... Claro que faz!\n");
		break;
	default:
		printf("Erro! Por favor responda usando V/F\n");
		break;	
}
system("pause");
}
