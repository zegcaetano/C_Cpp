//*****************************************************************************
//* Ficheiro FT1001H_ExRev_02_Pensao.cpp
//*****************************************************************************


#include <clocale>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <conio.h>
#include <string>
#include <ctype.h>
#include <time.h>
#include "0000_fComuns.cpp"
using namespace std;

const char LIVRE = 'L', OCUPADO = 'O', RESERVADO = 'R';
const int numAndares = 3,
          numQuartosAndar = 6;
          
typedef struct Quarto
{
        string       nomeCliente;
        string       nrID;
        string       dataReserva;
        string       dataEntrada;
        string       horaEntrada;
        char         estado;
};

void inicializaPensao(Quarto quartos[][numQuartosAndar], int, int);
void inicializaQuarto(Quarto quartos[][numQuartosAndar], int, int);
void inicializaQuartoII(Quarto);
void mostraMenu();
char obtemEscolha(char, int);
bool processaEscolha(char, Quarto quartos[][numQuartosAndar], int, int, bool);
void listarQuartos(Quarto quartos[][numQuartosAndar], int, int);
void reservarQuarto(Quarto quartos[][numQuartosAndar], int, int);
void checkIN(Quarto quartos[][numQuartosAndar], int, int);
void checkOUT(Quarto quartos[][numQuartosAndar], int, int);
bool sairDoPrograma(bool);
void escolhaInvalida(char);
void despedida();

int main()
{
setlocale(LC_ALL, "Portuguese");   
const int numOpcoes = 5;
Quarto quartos[numAndares][numQuartosAndar];
char escolha = '\0';
bool queroSair = false;

inicializaPensao(quartos, numAndares, numQuartosAndar);

do
{
mostraMenu();
escolha = obtemEscolha(escolha, numOpcoes);
queroSair = processaEscolha(escolha, quartos, numAndares, numQuartosAndar, queroSair);
}while(!queroSair);
despedida();
return 0;
}

//função "inicializaPensao()"
void inicializaPensao(Quarto quartos[][numQuartosAndar], int numAndares, int numQuartosAndar)
{
     for(int i=0; i < numAndares; i++)
     {
             for(int j=0; j < numQuartosAndar; j++)
             {
                     inicializaQuarto(quartos,i,j);
             }
     }
}
//função "inicializaQuarto()"
void inicializaQuarto(Quarto quartos[][numQuartosAndar], int nAndar, int nQuarto)
{
     quartos[nAndar][nQuarto].estado = LIVRE;
     quartos[nAndar][nQuarto].nomeCliente = "";
     quartos[nAndar][nQuarto].dataEntrada = "";
     quartos[nAndar][nQuarto].horaEntrada = "";
     quartos[nAndar][nQuarto].dataReserva = "";
     quartos[nAndar][nQuarto].nrID = "";
}
//função "inicializaQuartoII()"
void inicializaQuartoII(Quarto quarto)
{
quarto.estado = LIVRE;
quarto.nomeCliente = "";
quarto.dataEntrada = "";
quarto.horaEntrada = "";
quarto.dataReserva = "";
quarto.nrID = "";
}

//função "mostraMenu()"
void mostraMenu()
{
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
}

//função processaEscolha()"
bool processaEscolha(char escolha, Quarto quartos[][numQuartosAndar], int numAndares, int numQuartosAndar, bool queroSair)
{
     switch(escolha)
     {
     case '1':
          listarQuartos(quartos, numAndares, numQuartosAndar);
          break;
     case '2':
          reservarQuarto(quartos, numAndares, numQuartosAndar);
          break;
     case '3':
          checkIN(quartos, numAndares, numQuartosAndar);
          break;
     case '4':
          checkOUT(quartos, numAndares, numQuartosAndar);
          break;
     case '5':
          queroSair = sairDoPrograma(queroSair);
          break;
     default:
             escolhaInvalida(escolha);
     }
return queroSair;
}


//função "listarQuartos()"
void listarQuartos(Quarto quartos[][numQuartosAndar], int numAndares, int numQuartosAndar)
{   
     gotoxy(0,14);
     cout<<"-> Listagem dos quartos: \n";
     for(int i=0; i<numAndares;i++)
     {
             gotoxy(0+i*40,15);
             cout<<"-> Andar "<<(i+1)<<": \n";
             for(int j=0; j<numQuartosAndar; j++)
             {
                     gotoxy(0+i*40,16+j);
                     cout<<"Quarto "<<(j+1)<<": ";
                     if (quartos[i][j].estado == LIVRE)
                        cout<<"livre. \n";
                     else if (quartos[i][j].estado == RESERVADO)
                     {
                          cout<<"r-> "<<quartos[i][j].nomeCliente<<", "<<quartos[i][j].dataReserva<<"."<<endl;
                     }
                     else
                          {
                          cout<<"o-> "<<quartos[i][j].nomeCliente<<", "<<quartos[i][j].dataEntrada<<"."<<endl;
                          }
             }
     }
     system("pause");
}

//função "reservarQuarto()"
void reservarQuarto(Quarto quartos[][numQuartosAndar], int numAndares, int numQuartosAndar)
{
     int numAndar = 0, numQuarto = 0;
     
     cout<<"Em que andar pretende reservar um quarto? (1-"<<numAndares<<") ";
     cin>>numAndar;
     cin.ignore();
     
     cout<<"No "<<numAndar<<"º andar, e em que quarto? (1-"<<numQuartosAndar<<") ";
     cin>>numQuarto;
     cin.ignore();
     
     quartos[numAndar-1][numQuarto-1].estado = RESERVADO;
     
     cout<<"Em que nome fica a reserva?"<<endl;
     getline(cin>>ws ,quartos[numAndar-1][numQuarto-1].nomeCliente);
     cout<<"Em que data pretende reservar o quarto?";
     cin>>quartos[numAndar-1][numQuarto-1].dataReserva;
     cin.ignore();
     cout<<"Quarto reservado com sucesso!"<<endl;
     system("pause");
}


//função "checkIN()"
void checkIN(Quarto quartos[][numQuartosAndar], int numAndares, int numQuartosAndar)
{
     int numAndar = 0, numQuarto = 0;
     
     cout<<"Em que andar pretende ocupar um quarto? (1-"<<numAndares<<") ";
     cin>>numAndar;
     cin.ignore();
     
     cout<<"No "<<numAndar<<"º andar, e em que quarto? (1-"<<numQuartosAndar<<") ";
     cin>>numQuarto;
     cin.ignore();
     
     
     
     cout<<"Em que nome fica a estadia?"<<endl;
     getline(cin>>ws ,quartos[numAndar-1][numQuarto-1].nomeCliente);
     cout<<"Qual a identificação do cliente?";
     cin>>quartos[numAndar-1][numQuarto-1].nrID;
     cin.ignore();
     quartos[numAndar-1][numQuarto-1].dataEntrada = currentDate();
     quartos[numAndar-1][numQuarto-1].horaEntrada = currentTime();
     quartos[numAndar-1][numQuarto-1].estado = OCUPADO;
     cout<<"Quarto ocupado com sucesso!"<<endl;
     system("pause");
}

//função "checkOUT()"
void checkOUT(Quarto quartos[][numQuartosAndar], int numAndares, int numQuartosAndar)
{
     int numAndar = 0, numQuarto = 0;
     
     cout<<"Em que andar pretende desocupar um quarto? (1-"<<numAndares<<") ";
     cin>>numAndar;
     cin.ignore();
     
     cout<<"No "<<numAndar<<"º andar, e que quarto? (1-"<<numQuartosAndar<<") ";
     cin>>numQuarto;
     cin.ignore();
     
     inicializaQuartoII(quartos[numAndar-1][numQuarto-1]);
     cout<<"Quarto libertado com sucesso!"<<endl;
     system("pause");
}






