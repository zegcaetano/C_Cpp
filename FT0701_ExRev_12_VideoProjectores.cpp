//*****************************************************************************
//* Ficheiro FT0701_ExRev_12_VideoProjectores.cpp
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

char sair = 'N';
const int NUMVIDEOPROJETORES = 4, NUMSALAS = 10;
int videoprojetores[NUMVIDEOPROJETORES];
int opcao = 0, numVideo = 0, numSala = 0;

for (int i = 0; i < NUMVIDEOPROJETORES; i++)
    videoprojetores[i] = 0;
    
do 
{
system("cls");

cout<<"*******************************************"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*               VIDEOPROJETORES           *"<<endl;
cout<<"*        1 - Listar Videoprojetores       *"<<endl;
cout<<"*        2 - Requisitar Videoprojetor     *"<<endl;
cout<<"*        3 - Devolver Videoprojetor       *"<<endl;
cout<<"*        4 - Sair do Programa             *"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*******************************************"<<endl;

cin>>opcao;
switch(opcao)
	{
        case 1:
             for(int i = 0; i<NUMVIDEOPROJETORES; i++)
             {
             if (videoprojetores[i] == 0)
                {
                cout<<"Videoprojetor   "<<i+1<<": Livre."<<endl;
                _sleep(150);
                }
             else
                 {
                cout<<"Videoprojetor   "<<i+1<<": Sala "<<videoprojetores[i]<<"."<<endl;
                _sleep(150);
                 }
             }
             system("pause");
             break;
        case 2:
            cout<<"Que videoprojetor pretende requisitar? (1-4)"<<endl;
            cin>>numVideo;
            cout<<"Qual a sala para onde pretende requisitar o videoprojetor? (1-10)"<<endl;
            cin>>numSala;
            videoprojetores[numVideo-1] = numSala;
            cout<<"Videoprojetor requisitado com sucesso!"<<endl;
            system("pause");
            break;
        case 3:
            cout<<"Que videoprojetor pretende devolver? (1-4)"<<endl;
            cin>>numVideo;
            if (videoprojetores[numVideo-1] != 0)
                {
                videoprojetores[numVideo-1] = 0;
                cout<<"Videoprojetor devolvido com sucesso!"<<endl;
                system("pause");
                break;
                }
            else
                {
                cout<<"Videoprojetor não se encontra ocupado!"<<endl; 
                system("pause");
                break;
                }
          case 4:
			cout<<"Deseja sair do programa? (S/N)"<<endl;
			cin>>sair;
			break;
			
	    default:
			cout<<"Opção inválida, por favor selecione uma opção de (1-4)"<<endl;
			system("pause");
			break;
}//fim do switch
}while(sair != 'S' && sair != 's');//fim do DO (while)
}//fim do main
