//*****************************************************************************
//* Ficheiro E040207_Area_Trapezio.cpp
//*****************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");	
	
float baseMaior = 0, baseMenor = 0, altura = 0, area = 0;

system("color A");
printf("Este programa calcula a área de um trapézio \n");
printf("Por favor insira o valor da base maior (cm)\n");
scanf("%f",&baseMaior);
printf("Por favor insira o valor da base menor (cm)\n");
scanf("%f",&baseMenor);
printf("Por favor insira o valor da altura (cm)\n");
scanf("%f",&altura);

area = ((baseMaior + baseMenor) * altura)/2;

printf("O valor da área do trapézio é: %.3f cm2. \n", area);
system("pause");

	
}
