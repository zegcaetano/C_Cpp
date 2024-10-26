//*****************************************************************************
//* Ficheiro FT0901_ExRev_02_Pensao.cpp
//*****************************************************************************


#include <clocale>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <conio.h>
#include <string>
using namespace std;

const std::string currentDate() 
      {
      time_t      now = time(0);
      struct tm   tstruct;
      char        buf[80];
      tstruct =   *localtime(&now);
      
      strftime(buf, sizeof(buf), "%d/%m/%Y", &tstruct);
      
      return buf;
      }
      
const std::string currentTime() 
      {
      time_t      now = time(0);
      struct tm   tstruct;
      char        buf[80];
      tstruct =   *localtime(&now);
      
      strftime(buf, sizeof(buf), "%H:%M:%S", &tstruct);
      
      return buf;
      }

void gotoxy (int coluna, int linha)
{
     COORD cur = {coluna, linha};    
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) ,cur);
}
      
typedef struct Quarto
{
        string       nomeCliente;
        string       nrID;
        string       dataReserva;
        string       dataEntrada;
        string       horaEntrada;
        char         estado;
};

int main()
{
setlocale(LC_ALL, "Portuguese");

const char LIVRE = 'L', OCUPADO = 'O', RESERVADO = 'R';
const int numOpcoes = 5;
const int numAndares = 2,
          numQuartosAndar = 6;
char sair = 'N', opcao = '\0';
int contaAndar[2] = {0, 0};
Quarto quartos[numAndares][numQuartosAndar];
bool quartoValido = false;
int escQuarto = 0, escAndar = 0;

for (int i = 0; i < numAndares; i++)
    {
    for (int j = 0; j < numQuartosAndar; j++)
        {
             quartos[i][j].nomeCliente = "";
             quartos[i][j].nrID = "";
             quartos[i][j].dataReserva = "";
             quartos[i][j].dataEntrada = "";
             quartos[i][j].horaEntrada = "";
             quartos[i][j].estado = LIVRE;
        }
    };

do {
system("cls");
system("color C");
   
cout<<"*******************************************"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*               PENSÃO ESTRELA            *"<<endl;
cout<<"*            1 - Listar Quartos           *"<<endl;
cout<<"*            2 - Reservar Quarto          *"<<endl;
cout<<"*            3 - Check-in.                *"<<endl;
cout<<"*            4 - Check-out.               *"<<endl;
cout<<"*            5 - Sair do Programa.        *"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*******************************************"<<endl;
cout<<endl;

cin>>opcao;
cin.ignore();
switch(opcao)
{
case '1':
{
      gotoxy(20,14);
      cout<<"***LISTAGEM DOS QUARTOS*** \n";

      for (int i = 0; i < numAndares; i++)
          {
          gotoxy(0+i*50,15);
          cout<<"-> "<<(i+1)<<"º Andar "<<": \n";
          for (int j = 0; j < numQuartosAndar; j++)
              {
              gotoxy(0+i*50,16+j);
              cout<<"Quarto "<<(j+1)<<": ";
              _sleep(100);
              if (quartos[i][j].estado == LIVRE)
                 cout<<"Livre.\n";
              else if (quartos[i][j].estado == RESERVADO)
                   {
                   cout<<"R-> "<<quartos[i][j].nomeCliente<<", "<<quartos[i][j].dataReserva<<"."<<endl;
                   }
              else
                   {
                   cout<<"O-> "<<quartos[i][j].nomeCliente<<", "<<quartos[i][j].dataEntrada<<"."<<endl;
                   }
              }
          }
system("pause");
break;
case '2':  
     cout<<"Em que andar pretende ficar? (1 - "<<numAndares<<")"<<endl;
     cin>>escAndar;
     cin.ignore();
     cout<<"No "<<escAndar<<"º andar, e em que quarto? (1 - "<<numQuartosAndar<<")"<<endl;
     cin>>escQuarto;
     cin.ignore();

if (contaAndar[0] >= numQuartosAndar && contaAndar[1] >= numQuartosAndar)
{
 cout<<"Não há quartos disponíveis, por favor dirija-se a outro estabelecimento"<<endl;
 system("pause");
}

else if (escAndar > 0 && escAndar <= numAndares && escQuarto > 0 && escQuarto <= numQuartosAndar)
{
    if (contaAndar[escAndar-1] < numQuartosAndar)
        {     
         if (quartos[escAndar-1][escQuarto-1].estado == LIVRE)
             {
             contaAndar[escAndar-1]++;
             quartos[escAndar-1][escQuarto-1].estado = RESERVADO;
             cout<<"Em que nome fica a reserva?"<<endl;
             getline(cin>>ws ,quartos[escAndar-1][escQuarto-1].nomeCliente);
             cout<<"Qual a data em que pretende reservar o quarto? (DD/MM/YYYY)"<<endl;
             cin>>quartos[escAndar-1][escQuarto-1].dataReserva;
             cin.ignore();
             cout<<"Quarto reservado com sucesso!"<<endl;
             system("pause");
             }
         else if (quartos[escAndar-1][escQuarto-1].estado == RESERVADO)
              {
              cout<<"Quarto já se encontra reservado!"<<endl;
              system("pause");
              }
         else
              {
              cout<<"Quarto encontra-se ocupado!"<<endl;
              system("pause");
              }
         }
    else 
            {
            cout<<"O "<<escAndar<<"º andar está cheio, tente no outro andar, por favor."<<endl;
            system("pause");
            }
    }
else
{
cout<<"Quarto, ou andar inválido!"<<endl;
system("pause");
}
}
break;

case '3':  
     cout<<"Em que andar pretende ficar? (1 - "<<numAndares<<")"<<endl;
     cin>>escAndar;
     cin.ignore();
     cout<<"No "<<escAndar<<"º andar, e em que quarto? (1 - "<<numQuartosAndar<<")"<<endl;
     cin>>escQuarto;
     cin.ignore();

if (contaAndar[0] >= numQuartosAndar && contaAndar[1] >= numQuartosAndar)
{
 cout<<"Não há quartos disponíveis, por favor dirija-se a outro estabelecimento"<<endl;
 system("pause");
}

else if (escAndar > 0 && escAndar <= numAndares && escQuarto > 0 && escQuarto <= numQuartosAndar)
{
    if (contaAndar[escAndar-1] < numQuartosAndar)
        {     
         if (quartos[escAndar-1][escQuarto-1].estado == LIVRE)
             {
             contaAndar[escAndar-1]++;
             quartos[escAndar-1][escQuarto-1].estado = OCUPADO;
             cout<<"Em que nome fica a reserva?"<<endl;
             getline(cin>>ws ,quartos[escAndar-1][escQuarto-1].nomeCliente);
             cout<<"Qual o nr de identificação do cliente?"<<endl;
             cin>>quartos[escAndar-1][escQuarto-1].nrID;
             quartos[escAndar-1][escQuarto-1].dataEntrada = currentDate();
             quartos[escAndar-1][escQuarto-1].horaEntrada = currentTime();
             cout<<"Quarto reservado com sucesso!"<<endl;
             system("pause");
             }
         else if (quartos[escAndar-1][escQuarto-1].estado == OCUPADO)
              {
              cout<<"Quarto já se encontra ocupado!"<<endl;
              system("pause");
              }
         else
              {
              cout<<"Quarto encontra-se reservado!"<<endl;
              system("pause");
              }
         }
    else
            {
            cout<<"O "<<escAndar<<"º andar está cheio, tente no outro andar, por favor."<<endl;
            system("pause");
            }
    }
else
{
cout<<"Quarto, ou andar inválido!"<<endl;
system("pause");
}

break;

case '4':  
     cout<<"Em que andar pretende desocupar um quarto? (1 - "<<numAndares<<")"<<endl;
     cin>>escAndar;
     cin.ignore();
     cout<<"No "<<escAndar<<"º andar qual o quarto a desocupar? (1 - "<<numQuartosAndar<<")"<<endl;
     cin>>escQuarto;
     cin.ignore();

if (contaAndar[0] == 0 && contaAndar[1] == 0)
{
 cout<<"Todos os quartos estão livres!"<<endl;
 system("pause");
}

else if (escAndar > 0 && escAndar <= numAndares && escQuarto > 0 && escQuarto <= numQuartosAndar)
{
    if (contaAndar[escAndar-1] != 0)
        {     
         if (quartos[escAndar-1][escQuarto-1].estado != LIVRE)
             {
             contaAndar[escAndar-1]--;
             quartos[escAndar-1][escQuarto-1].estado = LIVRE;
             quartos[escAndar-1][escQuarto-1].nomeCliente = "";
             quartos[escAndar-1][escQuarto-1].nrID = "";
             quartos[escAndar-1][escQuarto-1].dataReserva = "";
             quartos[escAndar-1][escQuarto-1].dataEntrada = "";
             quartos[escAndar-1][escQuarto-1].horaEntrada = "";
             cout<<"Quarto libertado com sucesso!"<<endl;
             system("pause");
             }
         else
              {
              cout<<"Quarto já se encontra livre!"<<endl;
              system("pause");
              }
         }
    else
            {
            cout<<"O "<<escAndar<<"º andar está vazio, tente no outro andar, por favor."<<endl;
            system("pause");
            }
    }
else
{
cout<<"Quarto, ou andar inválido!"<<endl;
system("pause");
}

break;

case '5':
	cout<<"Deseja sair do programa? (S/N)"<<endl;
    cin>>sair;
	break;
 default:
	cout<<"Opção inválida, por favor selecione uma opção de (1-5)"<<endl;
	system("pause");
	break;			
}//fim do switch
}while(sair != 'S' && sair != 's');//while
}//fim do main
