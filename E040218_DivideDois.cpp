//*****************************************************************************
//* Ficheiro E040218_DivideDois.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
int num1 = 0, num2 = 0, quociente = 0, resto = 0;
printf("Este programa recebe dois números inteiros e apresenta o quociente e o resto da sua divisão\n");
printf("Insira o primeiro número: \n");
scanf("%d",&num1);
printf("Insira o segundo número: \n");
scanf("%d",&num2);
quociente = num1 / num2;
resto = num1 % num2;
printf("O quociente é %d e o resto da divisão é %d\n", quociente, resto);
system("pause");
}
