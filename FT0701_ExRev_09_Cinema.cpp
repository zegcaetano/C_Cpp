//*****************************************************************************
//* Ficheiro FT0701_ExRev_09_Cinema.cpp
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
const int nrFilas = 7, nrLugares = 5;
char LIVRE = 'L', RESERVADO = 'R', MARCADO = 'M', sair = 'N';
char lugar[nrFilas][nrLugares];
bool fila_valida = false, lugar_valido = false;
int opcao = 0, escLugar = 0, escFila = 0;


for (int i = 0; i < nrFilas; i++)
	for (int j = 0; j < nrLugares; j++)
	{
		lugar[i][j] = LIVRE;
	}
	
	
do 
{
	
system("cls");

cout<<"*******************************************"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*             CINE ESTUDIO 222            *"<<endl;
cout<<"*            1 - Listar Lugares           *"<<endl;
cout<<"*            2 - Reservar Lugar           *"<<endl;
cout<<"*            3 - Marcar Lugar             *"<<endl;
cout<<"*            4 - Libertar Lugar           *"<<endl;
cout<<"*            5 - Fim de Sessão            *"<<endl;
cout<<"*            6 - Sair Programa            *"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*******************************************"<<endl;

cin>>opcao;
switch(opcao)
	{
		case 1:
			cout<<"Listagem de lugares:"<<endl;
			for (int i = 0; i < nrFilas; i++)
				for (int j = 0; j < nrLugares; j++)
					{
						cout<<"Lugar "<<i+1<<"."<<j+1<<": "<<lugar[i][j]<<endl;
					}
                    cout<<"L: Livre     M: Marcado     R: Reservado"<<endl;	
			system("pause");
			break;
		case 2:
             fila_valida = false;
             lugar_valido = false;
             escLugar = 0;
             escFila = 0;
             while (!fila_valida && !lugar_valido)
                   {
                    cout<<"Qual a fila que deseja reservar? (1 - "<<nrFilas<<")"<<endl;
                    cin>>escFila;
                    cout<<"Qual o lugar que deseja reservar? (1 - "<<nrLugares<<")"<<endl;
                    cin>>escLugar;
			        if (escFila >= 1 && escFila <= nrFilas && escLugar >= 1 && escLugar <= nrLugares && lugar[escFila-1][escLugar-1] == LIVRE)
                       {
                       lugar[escFila-1][escLugar-1] = RESERVADO;
                       fila_valida = true;
                       lugar_valido = true;
                       cout<<"Lugar reservado com sucesso!"<<endl;;                     
                       }             
                    else if (lugar[escFila-1][escLugar-1] == RESERVADO || lugar[escFila-1][escLugar-1] == MARCADO)
                       {				
				       cout<<"Este lugar não está disponível para reservas."<<endl;
				       fila_valida = true;
                       lugar_valido = true;
				       }
                     else
                       cout<<"Lugar inválido, por favor escolha uma fila de 1 a "<<nrFilas<<" e um lugar de 1 a "<<nrLugares<<"."<<endl;
                       system("pause");
                     }break;
           case 3:
             fila_valida = false;
             lugar_valido = false;
             escLugar = 0;
             escFila = 0;
             while (!fila_valida && !lugar_valido)
                   {
                    cout<<"Qual a fila que deseja marcar? (1 - "<<nrFilas<<")"<<endl;
                    cin>>escFila;
                    cout<<"Qual o lugar que deseja marcar? (1 - "<<nrLugares<<")"<<endl;
                    cin>>escLugar;
			        if (escFila >= 1 && escFila <= nrFilas && escLugar >= 1 && escLugar <= nrLugares && lugar[escFila-1][escLugar-1] != MARCADO)
                       {
                       lugar[escFila-1][escLugar-1] = MARCADO;
                       fila_valida = true;
                       lugar_valido = true;
                       cout<<"Lugar marcado com sucesso!"<<endl;                                         
                       }             
                    else if (lugar[escFila-1][escLugar-1] == MARCADO)
                       {				
				       cout<<"Este lugar não está disponível para marcações."<<endl;
				       fila_valida = true;
                       lugar_valido = true;				      
				       }
                     else
                       cout<<"Lugar inválido, por favor escolha uma fila de 1 a "<<nrFilas<<" e um lugar de 1 a "<<nrLugares<<"."<<endl;
                       system("pause");
                     }break;
           case 4:
             fila_valida = false;
             lugar_valido = false;
             escLugar = 0;
             escFila = 0;
             while (!fila_valida && !lugar_valido)
                   {
                    cout<<"Qual a fila que deseja libertar? (1 - "<<nrFilas<<")"<<endl;
                    cin>>escFila;
                    cout<<"Qual o lugar que deseja libertar? (1 - "<<nrLugares<<")"<<endl;
                    cin>>escLugar;
			        if (escFila >= 1 && escFila <= nrFilas && escLugar >= 1 && escLugar <= nrLugares && lugar[escFila-1][escLugar-1] != LIVRE)
                       {
                       lugar[escFila-1][escLugar-1] = LIVRE;
                       fila_valida = true;
                       lugar_valido = true;
                       cout<<"Lugar libertado com sucesso!"<<endl;                                         
                       }             
                    else if (lugar[escFila-1][escLugar-1] == LIVRE)
                       {				
				       cout<<"Este lugar já se encontra livre."<<endl;
				       fila_valida = true;
                       lugar_valido = true;				      
				       }
                     else
                       cout<<"Lugar inválido, por favor escolha uma fila de 1 a "<<nrFilas<<" e um lugar de 1 a "<<nrLugares<<"."<<endl;
                       system("pause");
                     }break;
           case 5:
               for (int i = 0; i < nrFilas; i++)
	               for (int j = 0; j < nrLugares; j++)
                         {
		                lugar[i][j] = LIVRE;
                         }
                         cout<<"Fim de sessão, todos os lugares estão livres!"<<endl;
                         system("pause");
                         break; 
           case 6:
			cout<<"Deseja sair do programa? (S/N)"<<endl;
			cin>>sair;
			break;
			
		   default:
			cout<<"Opção inválida, por favor selecione uma opção de (1-6)"<<endl;
			system("pause");
			break;
            			
	}//fim do switch
}while(sair != 'S' && sair != 's');//fim do DO (while)
}//fim do main
