//*****************************************************************************
//* Ficheiro FT0701_ExRev_04_EstatisticaIII.cpp
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

const int nrnotas = 6;
int opcao = 0, apagar = 0;
float media = 0, max = 0, min = 0, total = 0;
float notas[nrnotas];
char sair ='\0';
bool nota_valida = false;

for (int i = 0; i < nrnotas; i++)
	{
		notas[i] = 0;
	}
	
do 
{
	
system("cls");

cout<<"*******************************************"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*                   MENU                  *"<<endl;
cout<<"*            1 - Inserir Notas            *"<<endl;
cout<<"*            2 - Listar Notas             *"<<endl;
cout<<"*            3 - Média                    *"<<endl;
cout<<"*            4 - Nota Máxima              *"<<endl;
cout<<"*            5 - Nota Mínima              *"<<endl;
cout<<"*            6 - Apagar Nota              *"<<endl;
cout<<"*            7 - Sair Programa            *"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*******************************************"<<endl;

cin>>opcao;
switch(opcao)
	{
		case 1:
			for (int i = 0; i < nrnotas; i++)
			{
				nota_valida = false;
				while(!nota_valida)
				{
					cout<<"Insira a nota "<<i+1<<": \n";
					cin>>notas[i];
					fflush(stdin);
				if (notas[i] > 0 && notas[i] <= 20)
					nota_valida = true;
				else
					cout<<"Nota invalida! Por favor insira um valor entre 0 e 20. \n";	
				}						
			}
			break;
		case 2:
			for (int i = 0; i < nrnotas; i++)
			{
				cout<<"Nota "<<i+1<<": "<<notas[i]<<endl;
				_sleep(250);			
			}
			system("pause");
			break;	
		case 3:
			total = 0;
			for (int i = 0; i < nrnotas; i++)
			{
				total += notas[i];				
			}
			media = total / nrnotas;
			cout<<"Média das notas é: "<<fixed<<setw(6)<<setprecision(2)<<media<<". \n";
			system("pause");
			break;
		case 4:
			for (int i = 0; i < nrnotas; i++)
			{
				if (i == 0 || max < notas[i])
						max = notas[i];
			}
			cout<<"Nota máxima: "<<fixed<<setw(6)<<setprecision(2)<<max<<". \n";
			system("pause");
			break;
		case 5:
			for (int i = 0; i < nrnotas; i++)
			{
				if (i == 0 || min > notas[i])
						min = notas[i];
			}
			cout<<"Nota mínima: "<<fixed<<setw(6)<<setprecision(2)<<min<<". \n";
			system("pause");
			break;
		case 6:
			cout<<"Que nota deseja apagar?"<<endl;
			cin>>apagar;
			cout<<"Qual a nova nota para esta posição?"<<endl;
			cin>>notas[apagar-1];
			cout<<"A nota foi atualizada!"<<endl;
			system("pause");
			break;
		/*	switch (apagar)
				{
					case 1:
						cout<<"Qual a nova nota para esta posição?"<<endl;
						cin>>notas[0];
						cout<<"A nota foi atualizada!"<<endl;
						break;
					case 2:
						cout<<"Qual a nova nota para esta posição?"<<endl;
						cin>>notas[1];
						cout<<"A nota foi atualizada!"<<endl;
						break;
					case 3:
						cout<<"Qual a nova nota para esta posição?"<<endl;
						cin>>notas[2];
						cout<<"A nota foi atualizada!"<<endl;
						break;
					case 4:
						cout<<"Qual a nova nota para esta posição?"<<endl;
						cin>>notas[3];
						cout<<"A nota foi atualizada!"<<endl;
						break;
					case 5:
						cout<<"Qual a nova nota para esta posição?"<<endl;
						cin>>notas[4];
						cout<<"A nota foi atualizada!"<<endl;
						break;
					case 6:
						cout<<"Qual a nova nota para esta posição?"<<endl;
						cin>>notas[5];
						cout<<"A nota foi atualizada!"<<endl;
						break;
					default:
						cout<<"Posição inválida! Selecione um valor de (1-6)"<<endl;
						system("pause");
						break;				
				}break; *///fim do switch "apagar"
		case 7:
			cout<<"Deseja sair do programa? (S/N)"<<endl;
			cin>>sair;
			break;
		default:
			cout<<"Opção inválida, por favor selecione uma opção de (1-7)"<<endl;
			system("pause");
			break;			
	} //fim do Switch principal
}while(sair != 'S' && sair != 's'); //fim do DO (while)

} //fim do main
