//*****************************************************************************
//* Ficheiro FT0701_ExRev_07_Taxis.cpp
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

const int nrtaxis = 10;
int opcao = 0, escTaxi = 0;
char LIVRE = 'L', RESERVADO = 'R', OCUPADO = 'O', sair = 'N';
char taxis[nrtaxis];
bool taxi_valido = false;

for (int i = 0; i < nrtaxis; i++)
	{
		taxis[i] = LIVRE;
	}
	
	
do 
{
	
system("cls");

cout<<"*******************************************"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*             CENTRAL DE TAXIS            *"<<endl;
cout<<"*            1 - Listar Taxis             *"<<endl;
cout<<"*            2 - Reservar Taxi            *"<<endl;
cout<<"*            3 - Chamar Taxi              *"<<endl;
cout<<"*            4 - Libertar Taxi            *"<<endl;
cout<<"*            5 - Sair Programa            *"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*******************************************"<<endl;

cin>>opcao;
switch(opcao)
	{
		case 1:
			for (int i = 0; i < nrtaxis; i++)
				{			
				cout<<"Taxi "<<i+1<<": "<<taxis[i]<<endl;				
				}			
				cout<<"L: Livre     O: Ocupado     R:Reservado"<<endl;
				system("pause");
				break;
		case 2:
			taxi_valido = false;
			escTaxi = 0;
			while (!taxi_valido)
			{
			cout<<"Qual o taxi que pretende reservar?"<<endl;
			cin>>escTaxi;				
			if (escTaxi > 0 && escTaxi <= 10 && taxis[escTaxi-1] != RESERVADO && taxis[escTaxi-1] != OCUPADO)
				{	
				taxis[escTaxi-1] = RESERVADO;		
				taxi_valido = true;
				cout<<"Taxi reservado com sucesso!"<<endl;
				system("pause");
				}
			else if (taxis[escTaxi-1] == RESERVADO || taxis[escTaxi-1] == OCUPADO)
				{				
				cout<<"Este taxi não está disponível para reservas."<<endl;
				taxi_valido = true;	
				system("pause");
				}
			else
				cout<<"Posição inválida. Escolha um taxi de (1-10)"<<endl;													
			}
			break;
		case 3:
			taxi_valido = false;
			escTaxi = 0;
			while (!taxi_valido)
			{
			cout<<"Qual o taxi que pretende ocupar?"<<endl;
			cin>>escTaxi;			
			
			if (escTaxi > 0 && escTaxi <= 10 && taxis[escTaxi-1] != OCUPADO)
				{	
				taxis[escTaxi-1] = OCUPADO;		
				taxi_valido = true;
				cout<<"Taxi ocupado com sucesso!"<<endl;
				system("pause");
				}
			else if (taxis[escTaxi-1] = OCUPADO)
				{
				cout<<"Taxi já se encontra ocupado."<<endl;
				taxi_valido = true;
				system("pause");
				}
			else
				cout<<"Posição inválida. Escolha um taxi de (1-10)"<<endl;													
			}
			break;
		case 4:
			taxi_valido = false;
			escTaxi = 0;
			while (!taxi_valido)
			{
			cout<<"Qual o taxi que pretende libertar?"<<endl;
			cin>>escTaxi;			
			
			if (escTaxi > 0 && escTaxi <= 10 && taxis[escTaxi-1] != LIVRE)
				{				
				taxis[escTaxi-1] = LIVRE;
				taxi_valido = true;
				cout<<"Taxi libertado com sucesso."<<endl;
				system("pause");
				}
			else if (taxis[escTaxi-1] == LIVRE)
				{
				cout<<"Taxi já se encontra livre."<<endl;
				taxi_valido = true;
				system("pause");
				}
			else
				cout<<"Posição inválida. Escolha um taxi de (1-10)"<<endl;													
			}break;
		case 5:
			cout<<"Deseja sair do programa? (S/N)"<<endl;
			cin>>sair;
			break;
		default:
			cout<<"Opção inválida, por favor selecione uma opção de (1-5)"<<endl;
			system("pause");
			break;			
	}//fim do switch
}while(sair != 'S' && sair != 's');//fim do DO (while)
}//fim do main
