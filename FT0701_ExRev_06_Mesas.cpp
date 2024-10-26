//*****************************************************************************
//* Ficheiro FT0701_ExRev_06_Mesas.cpp
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

const int nrmesas = 10;
int opcao = 0, escMesa = 0;
char LIVRE = 'L', RESERVADA = 'R', OCUPADA = 'O', sair = 'N';
char mesas[nrmesas];
bool mesa_valida = false;

for (int i = 0; i < nrmesas; i++)
	{
		mesas[i] = LIVRE;
	}
	
	
do 
{
	
system("cls");

cout<<"*******************************************"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*                   MENU                  *"<<endl;
cout<<"*            1 - Listar Mesas             *"<<endl;
cout<<"*            2 - Reservar Mesa            *"<<endl;
cout<<"*            3 - Ocupar Mesa              *"<<endl;
cout<<"*            4 - Desocupar Mesa           *"<<endl;
cout<<"*            5 - Sair Programa            *"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*******************************************"<<endl;

cin>>opcao;
switch(opcao)
	{
		case 1:
			for (int i = 0; i < nrmesas; i++)
				{			
				cout<<"Mesa "<<i+1<<": "<<mesas[i]<<endl;				
				}			
				cout<<"L: Livre     O: Ocupada     R:Reservada"<<endl;
				system("pause");
				break;
		case 2:
			mesa_valida = false;
			escMesa = 0;
			while (!mesa_valida)
			{
			cout<<"Qual a mesa que pretende reservar?"<<endl;
			cin>>escMesa;				
			if (escMesa > 0 && escMesa <= 10 && mesas[escMesa-1] != RESERVADA && mesas[escMesa-1] != OCUPADA)
				{	
				mesas[escMesa-1] = RESERVADA;		
				mesa_valida = true;
				cout<<"Mesa reservada com sucesso!"<<endl;
				system("pause");
				}
			else if (mesas[escMesa-1] == RESERVADA || mesas[escMesa-1] == OCUPADA)
				{				
				cout<<"Esta mesa não está disponível para reservas."<<endl;
				mesa_valida = true;	
				system("pause");
				}
			else
				cout<<"Posição inválida. Escolha uma mesa de (1-10)"<<endl;													
			}
			break;
		case 3:
			mesa_valida = false;
			escMesa = 0;
			while (!mesa_valida)
			{
			cout<<"Qual a mesa que pretende ocupar?"<<endl;
			cin>>escMesa;			
			
			if (escMesa > 0 && escMesa <= 10 && mesas[escMesa-1] != OCUPADA)
				{	
				mesas[escMesa-1] = OCUPADA;		
				mesa_valida = true;
				cout<<"Mesa ocupada com sucesso!"<<endl;
				system("pause");
				}
			else if (mesas[escMesa-1] = OCUPADA)
				{
				cout<<"Mesa já se encontra ocupada."<<endl;
				mesa_valida = true;
				system("pause");
				}
			else
				cout<<"Posição inválida. Escolha uma mesa de (1-10)"<<endl;													
			}
			break;
		case 4:
			mesa_valida = false;
			escMesa = 0;
			while (!mesa_valida)
			{
			cout<<"Qual a mesa que pretende libertar?"<<endl;
			cin>>escMesa;			
			
			if (escMesa > 0 && escMesa <= 10 && mesas[escMesa-1] != LIVRE)
				{				
				mesas[escMesa-1] = LIVRE;
				mesa_valida = true;
				cout<<"Mesa libertada com sucesso."<<endl;
				system("pause");
				}
			else if (mesas[escMesa-1] == LIVRE)
				{
				cout<<"Mesa já se encontra livre."<<endl;
				mesa_valida = true;
				system("pause");
				}
			else
				cout<<"Posição inválida. Escolha uma mesa de (1-10)"<<endl;													
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
