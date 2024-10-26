//*****************************************************************************
//* Ficheiro FT1001H_ExRev_01_Parque.cpp
//*****************************************************************************


#include <clocale>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <conio.h>
#include <string>
#include <ctype.h>
using namespace std;

typedef struct Lugar {
         char estado;
         string matricula;
         string dataEntrada;
         string horaEntrada;
};

const char LIVRE = 'L', OCUPADO = 'O';
const int numLugares = 7;
const int numOpcoes = 4;
Lugar lugares[numLugares];
const float quantia = 0.75;
const int unidade = 1;
const int diaria = 360;
const float quantiaDiaria = 20;

const std::string currentDate();       
const std::string currentTime();
int obtemAno(string data);
int obtemMes(string data);
int obtemDia(string data);
int obtemHoras(string tempo);
int obtemMinutos(string tempo);
void inicializaParque(Lugar lugares[], int numLugares);
void mostraMenu();
char obtemEscolha(char escolha, int numOp);
bool processaEscolha(char, Lugar lugares[], int, bool, int);
void listarLugares(Lugar lugares[], int numLugares);
void marcarLugar(Lugar lugares[], int numLugares);
void libertarLugar(Lugar lugares[], int numLugares);
bool sairDoPrograma(bool);
void escolhaInvalida(int);
void despedida();
 

int main()
{
setlocale(LC_ALL, "Portuguese");

int escolha = '0';
bool queroSair = false;


inicializaParque(lugares, numLugares);

do {
    mostraMenu();
    escolha=obtemEscolha(escolha, numOpcoes);
    queroSair=processaEscolha(escolha, lugares, numLugares, queroSair, numOpcoes);
    }while(queroSair == false);
    despedida();
    return 0;
    
}//fim do main

//função "inicializaParque()"
void inicializaParque(Lugar lugares[], int numLugares)
{
     for(int i=0; i < numLugares; i++)
     {
             lugares[i].estado        = LIVRE;
             lugares[i].matricula     = "";
             lugares[i].dataEntrada   = "";
             lugares[i].horaEntrada   = "";
     }
}

//função "mostraMenu();"
void mostraMenu()
{
system("cls");
cout<<"*******************************************"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*                 PARQUE IEFP             *"<<endl;
cout<<"*            1 - Listar Lugares           *"<<endl;
cout<<"*            2 - Marcar Lugar             *"<<endl;
cout<<"*            3 - Libertar Lugar           *"<<endl;
cout<<"*            4 - Sair do Programa         *"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*******************************************"<<endl;
cout<<endl;
}

//função "obtemEscolha()"
char obtemEscolha(char escolha, int numOpcoes)
{
 cout<<"Que ação pretende realizar? (1-"<<numOpcoes<<")"<<endl;
 cin>>escolha;
 cin.ignore();
 return escolha;
}

//função "processaEscolha()"
bool processaEscolha (char escolha, Lugar lugares[], int numLugares, bool queroSair, int numOpcoes)
{
     switch(escolha)
     {
                    case '1':       listarLugares(lugares, numLugares);
                                    break;
                    case '2':       marcarLugar(lugares, numLugares);
                                    break;
                    case '3':       libertarLugar(lugares, numLugares);
                                    break;
                    case '4':       queroSair=sairDoPrograma(queroSair);
                                    break;
                    default:        escolhaInvalida(numOpcoes);
     }
return queroSair;
}

//função "listarLugares()"
void listarLugares(Lugar lugares[], int numLugares)
{
     cout<<"Listagem de lugares: "<<endl;
     for (int i = 0; i < numLugares; i++)
     {
         cout<<"Lugar "<<i+1<<": ";
         if (lugares[i].estado == LIVRE)
            cout<<"livre."<<endl;
         else
             {
             cout<<lugares[i].matricula<<" -> ";
             cout<<lugares[i].dataEntrada<<" - ";
             cout<<lugares[i].horaEntrada<<"."<<endl;
             }
     }
     system("pause");
}

//função "marcarLugar()"
void marcarLugar(Lugar lugares[], int numLugares)
{
     int escLugar = 0;
     do
     {
              cout<<"Qual o lugar que quer marcar? (1-"<<numLugares<<")"<<endl;
              cin>>escLugar;
              cin.ignore();
              if (escLugar < 1 || escLugar > numLugares)
                 {
                 cout<<"Lugar inválido! Lugares são de 1 a "<<numLugares<<"."<<endl;
                 }
     }while (escLugar <1 || escLugar > numLugares);
     
     if (lugares[escLugar-1].estado == OCUPADO)
        {
         cout<<"Lugar "<<escLugar<<" já está ocupado"<<endl;
        }
     else
         {
         cout<<"Qual a matricula do veiculo? ";
         cin>>lugares[escLugar-1].matricula;
         cin.ignore();
         
         lugares[escLugar-1].dataEntrada = currentDate();
         lugares[escLugar-1].horaEntrada = currentTime();     
         lugares[escLugar-1].estado = OCUPADO;
         cout<<"Lugar marcado com sucesso!"<<endl;
         }
     system("pause");
}

//função "libertarLugar();"
void libertarLugar(Lugar lugares[], int numLugares)
{
     int escLugar = 0;
     do
     {
              cout<<"Qual o lugar que quer libertar? (1-"<<numLugares<<")"<<endl;
              cin>>escLugar;
              cin.ignore();
              if (escLugar < 1 || escLugar > numLugares)
                 {
                 cout<<"Lugar inválido! Lugares são de 1 a "<<numLugares<<"."<<endl;
                 }
     }while (escLugar <1 || escLugar > numLugares);    

float quantiaAPagar = 0;

string dataSaida = currentDate();

float numDiasSaida = obtemAno(dataSaida) * 365.25 + obtemMes(dataSaida) * 30 + obtemDia(dataSaida);

float numDiasEntrada = obtemAno(lugares[escLugar-1].dataEntrada) * 365.25 
                     + obtemMes(lugares[escLugar-1].dataEntrada) * 30 
                     + obtemDia(lugares[escLugar-1].dataEntrada);

float numDias = numDiasSaida - numDiasEntrada;

quantiaAPagar = quantiaDiaria * numDias;


string horaSaida = currentTime();
int numMinutosEntrada = obtemHoras(lugares[escLugar-1].horaEntrada) * 60 + obtemMinutos(lugares[escLugar-1].horaEntrada);
int numMinutosSaida = obtemHoras(horaSaida) * 60 + obtemMinutos(horaSaida);

int tempoMinutos = numMinutosSaida-numMinutosEntrada;

if (tempoMinutos < unidade)
   quantiaAPagar += quantia;
else if (tempoMinutos > diaria)
     quantiaAPagar += quantiaDiaria;
else
    {
    quantiaAPagar += (tempoMinutos/unidade+1) * quantia;
    
lugares[escLugar-1].matricula = "";
lugares[escLugar-1].dataEntrada = "";
lugares[escLugar-1].horaEntrada = "";
lugares[escLugar-1].estado = LIVRE;

cout<<"Quantia a pagar: "<<quantiaAPagar<<" euros."<<endl;
cout<<"Lugar libertado com sucesso!"<<endl;
system("pause");
}
}
//função "saidaDoPrograma()"
bool sairDoPrograma(bool queroSair)
{
     char resposta = '\0';
     
     cout<<"Tem a certeza (S/N)? ";
     cin>>resposta;
     resposta = toupper(resposta);
     
     if(resposta == 'S')
     queroSair = true;
     return queroSair;
}

//função "escolhaInvalida()"
void escolhaInvalida(int numOpcoes)
{
     cout<<"Escolha inválida! Escolha deve ser de 1 a "<<numOpcoes<<"."<<endl;
     system("pause");
}

//função "despedida()"
void despedida()
{
     cout<<endl<<"Obrigado, até breve!"<<endl;
     system("pause");
}

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
      
int obtemAno (string data)
{
    string infoAno = data.substr(0,4);
    int ano = atoi(infoAno.c_str());
    return ano;
}

int obtemMes (string data)
{
    string infoMes = data.substr(5,2);
    int mes = atoi(infoMes.c_str());
    return mes;
}

int obtemDia (string data)
{
    string infoDia = data.substr(8,2);
    int dia = atoi(infoDia.c_str());
    return dia;
}

int obtemHoras(string tempo)
{
    string infoHoras = tempo.substr(0,2);
    int numHoras = atoi(infoHoras.c_str());
    return numHoras;
}

int obtemMinutos(string tempo)
{
    string infoMinutos = tempo.substr(3,2);
    int numMinutos = atoi(infoMinutos.c_str());
    return numMinutos;
}
