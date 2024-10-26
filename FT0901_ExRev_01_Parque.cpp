//*****************************************************************************
//* Ficheiro FT0901_ExRev_01_Parque.cpp
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
      
      strftime(buf, sizeof(buf), "%Y-%m-%d", &tstruct);
      
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

typedef struct Lugar {
         char estado;
         string matricula;
         string dataEntrada;
         string horaEntrada;
};
  
int main()
{
setlocale(LC_ALL, "Portuguese");

const char LIVRE = 'L', OCUPADO = 'O';
const int numLugares = 7;
int opcao = 0, nLugar = 0, contador = 0;
char sair = 'N';
Lugar lugares[numLugares];
bool lugar_valido = false;


for (int i = 0; i < numLugares; i++)
    {
    lugares[i].estado = LIVRE;
    lugares[i].matricula = ""; 
    lugares[i].dataEntrada = "";
    lugares[i].horaEntrada = "";
    }

do {
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

cin>>opcao;
switch(opcao)
{
 case 1:
      for (int i = 0; i < numLugares; i++)
      {
      cout<<"Lugar "<<i+1<<":"<<lugares[i].estado<<"      Matricula -> "<<lugares[i].matricula<<"      Data de entrada: "<<lugares[i].dataEntrada<<"      Hora de entrada: "<<lugares[i].horaEntrada<<endl;
      _sleep(150);
      }
      cout<<"L: Livre     O: Ocupado"<<endl;
      system("pause");
      break;
 case 2:
      if (contador >= numLugares)
         {
          cout<<"Parque cheio! Por favor liberte um lugar antes de voltar a marcar."<<endl;
          system("pause");
          break;
          }
      else
          lugar_valido = false;
          do
          {
          cout<<"Que lugar deseja marcar? (1 - "<<numLugares<<")"<<endl;
          cin>>nLugar;
          if (nLugar > 0 && nLugar <= 7 && lugares[nLugar-1].estado == LIVRE)
             lugar_valido = true;
          else if (lugares[nLugar-1].estado == OCUPADO)
               {
             cout<<"Lugar já se encontra ocupado!"<<endl;
               }
          else
              cout<<"Lugar invalido!"<<endl;
          } while(!lugar_valido);
              
          lugares[nLugar-1].estado = OCUPADO;
          cout<<"Por favor insira a sua matricula no formato AA-00-AA: "<<endl;
          cin.ignore();
          getline(cin, lugares[nLugar-1].matricula);
          lugares[nLugar-1].dataEntrada = currentDate();
          lugares[nLugar-1].horaEntrada = currentTime(); 
          cout<<"Lugar marcado com sucesso!"<<endl;
          contador++;
          system("pause");
          break;
 case 3:
      lugar_valido = false;
      do
      {
      cout<<"Que lugar deseja libertar? (1 - "<<numLugares<<")"<<endl;
      cin>>nLugar;
      if (nLugar > 0 && nLugar <= 7 && lugares[nLugar-1].estado == OCUPADO)
      {
          lugar_valido = true;
          lugares[nLugar-1].estado = LIVRE;
          lugares[nLugar-1].matricula = "";
          lugares[nLugar-1].dataEntrada = "";
          lugares[nLugar-1].horaEntrada = ""; 
          cout<<"Lugar libertado com sucesso!"<<endl;
          contador--;
          system("pause");
          break;
      }
      else if (lugares[nLugar-1].estado == LIVRE)
           {
         cout<<"Lugar já se encontra livre!"<<endl;
         system("pause");
         break;
           }
      else
          cout<<"Lugar invalido!"<<endl;
          system("pause");
      } while(!lugar_valido);
          
      break;
 case 4:
	cout<<"Deseja sair do programa? (S/N)"<<endl;
    cin>>sair;
	break;
 default:
	cout<<"Opção inválida, por favor selecione uma opção de (1-4)"<<endl;
	system("pause");
	break;			  
}//fim do switch
}while(sair != 'S' && sair != 's');//fim do DO While
}//fim do main
