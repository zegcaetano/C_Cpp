//*****************************************************************************
//* Ficheiro 0501H10_Calculadora.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL, "Portuguese");
int num1 = 0, num2 = 0, result = 0;
char op = '\0';
printf("Calculadora!\n");
printf("Este programa recebe dois n�meros e realiza uma opera��o aritm�ca � sua escolha entre eles.\n");
printf("Por favor insira o primeiro n�mero: \n");
scanf("%d",&num1);
printf("Por favor insira o segundo n�mero: \n");
scanf("%d",&num2);
fflush(stdin);
printf("Por favor indique que opera��o deseja realizar usando +, -, * ou /: \n");
scanf("%c",&op);
if (op == '+'){
	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);	
}
else if (op == '-'){
	result = num1 - num2;
	printf("%d - %d = %d\n", num1, num2, result);
}
else if (op == '*'){
	result = num1 * num2;
	printf("%d * %d = %d\n", num1, num2, result);
}
else if (op == '/'){
	result = num1 / num2;
	printf("%d / %d = %d\n", num1, num2, result);
}
else
	printf("Erro! Por favor use um dos seguintes operadores +, -, * ou /\n");

system("pause");
}
