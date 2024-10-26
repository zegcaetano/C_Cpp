//*****************************************************************************
//* Ficheiro FT0701_ExRev_03_EstatisticaII.cpp
//*****************************************************************************


#include <clocale>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <conio.h>
using namespace std;

int main()
{
setlocale(LC_ALL, "Portuguese");

const int nrnotas = 5;
float media = 0, max = 0, min = 0;
float notas[nrnotas];
char sair ='\0';
bool nota_valida = false;

do 
{
	for (int i = 0; i < nrnotas; i++)
	{
		notas[i] = 0;
	}
system("cls");
cout<<"Este programa recebe 5 notas, e apresenta o máximo, mínimo e média.\n";
cout<<"Por favor, insira as notas.\n";

for (int i = 0; i < nrnotas; i++)
	{	
		nota_valida = false;
		while(!nota_valida)
		{
		cout<<"Insira a nota "<<i+1<<": \n";
		cin>>notas[i];
		
		if (notas[i] > 0 && notas[i] <= 20)
			nota_valida = true;
		else
			cout<<"Nota invalida! Por favor insira um valor entre 0 e 20. \n";	
		}			
		
					
	}
	for (int i = 0; i < nrnotas; i++)
		{
		media += notas[i]/nrnotas;
		if (i == 0 || max < notas[i])
			max = notas[i];
		if (i == 0 || min > notas[i])
			min = notas[i];		
		}
	
	
	cout<<""<<endl;
	cout<<"Média: "<<fixed<<setw(6)<<setprecision(2)<<media<<". \n";
	cout<<"Máximo: "<<setprecision(2)<<max<<". \n";
	cout<<"Mínimo: "<<setprecision(2)<<min<<". \n";
	
	cout<<"Deseja inserir mais notas (S/N) ?";
	sair = getche();
}while(sair != 'N' && sair != 'n');
cout<<""<<endl;
system("pause");
}

