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
printf("Este programa recebe dois n�meros inteiros e apresenta o quociente e o resto da sua divis�o\n");
printf("Insira o primeiro n�mero: \n");
scanf("%d",&num1);
printf("Insira o segundo n�mero: \n");
scanf("%d",&num2);
quociente = num1 / num2;
resto = num1 % num2;
printf("O quociente � %d e o resto da divis�o � %d\n", quociente, resto);
system("pause");
}
