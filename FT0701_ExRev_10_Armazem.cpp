//*****************************************************************************
//* Ficheiro FT0701_ExRev_10_Armazem.cpp
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
const int maxProd = 10;
string nomeProd[maxProd];
int quantProd[maxProd];
float precoProd[maxProd];
int numProd = 0;
char sair = 'N', resp = 'N';
int opcao = 0, nProd = 0, nVenda = 0, nRepor = 0;

for (int i = 0; i < maxProd; i++)
    {
    nomeProd[i] = "";
    quantProd[i] = 0;
    precoProd[i] = 0;
    }
    
do 
{
system("cls");

cout<<"*******************************************"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*                LOJA DOS 300             *"<<endl;
cout<<"*            1 - Listar Produtos          *"<<endl;
cout<<"*            2 - Inserir Produto          *"<<endl;
cout<<"*            3 - Pesquisar Produto        *"<<endl;
cout<<"*            4 - Alterar o Preço          *"<<endl;
cout<<"*            5 - Registar Venda           *"<<endl;
cout<<"*            6 - Registar Reposição       *"<<endl;
cout<<"*            7 - Eliminar Produto         *"<<endl;
cout<<"*            8 - Sair do Programa         *"<<endl;
cout<<"*                                         *"<<endl;
cout<<"*******************************************"<<endl;

cin>>opcao;
switch(opcao)
	{
        case 1:
             for (int i = 0; i < maxProd; i++)
             {
                 cout<<"Produto "<<i+1<<": "<<nomeProd[i]<<" - Quantidade: "<<quantProd[i]<<" - Preço:"<<fixed<<setprecision(2)<<precoProd[i]<<endl;
                 _sleep(200);
             }system("pause");
             break;
        case 2:
        if (numProd < 10)
               {
                  cout<<"Qual o nome do produto? "<<endl;
                  cin.ignore(); 
                  getline(cin, nomeProd[numProd]);            
                  cout<<"Qual o preço de cada unidade?"<<endl;
                  cin>>precoProd[numProd];                
                  cout<<"Quantas unidades deste produto entram em stock?"<<endl;
                  cin>>quantProd[numProd];                  
                  numProd++;
                  system("pause");
               }
        else  
              {
                cout<<"Stock máximo atingido, liberte primeiro um produto para conseguir inserir outro"<<endl;
                system("pause");
              }break; 
        case 3:
             {
             bool encProd = false;
             string findProd = "";
             cout<<"Por favor insira o nome do produto que procura: "<<endl;
             cin.ignore();
             getline(cin, findProd);
            
             for (int i = 0; i < numProd; i++)
             {
                 if (findProd == nomeProd[i])
                 {
                 cout<<"Produto "<<i+1<<": "<<nomeProd[i]<<" Preço: "<<fixed<<setprecision(2)<<precoProd[i]<<" Quantidade: "<<quantProd[i]<<endl;
                 encProd = true;
                 break;
                 }
             }
             if (!encProd)
                cout<<"Produto não encontrado!"<<endl;
                system("pause");
                break;
                }
        case 4:
             {
              cout<<"Qual o nr do produto que pretende alterar o preço?"<<endl;
              cin>>nProd;
              
              if (nProd > 0 && nProd <= numProd)
                 {
               cout<<"Produto "<<nProd<<": "<<nomeProd[nProd-1]<<" Preço: "<<fixed<<setprecision(2)<<precoProd[nProd-1]<<" Quantidade: "<<quantProd[nProd-1]<<endl;
               cout<<"Qual o novo preço do produto?"<<endl;
               cin>>precoProd[nProd-1];
               cout<<"Preço atualizado com sucesso!"<<endl;
                  }
              else
                cout<<"Produto não encontrado!"<<endl;
                system("pause");
                break;
              } 
         case 5:
               {
              cout<<"Qual o nr do produto que pretende registar uma venda?"<<endl;
              cin>>nProd;
              
              if (nProd > 0 && nProd <= numProd)
                 {
                  cout<<"Produto "<<nProd<<": "<<nomeProd[nProd-1]<<" Preço: "<<fixed<<setprecision(2)<<precoProd[nProd-1]<<" Quantidade: "<<quantProd[nProd-1]<<endl; 
                  cout<<"Qual a quantidade vendida?"<<endl;
                  cin>>nVenda;
                  
                      if (nVenda <= quantProd[nProd-1])
                         {
                         quantProd[nProd-1] -= nVenda;
                         cout<<"Produto vendido com sucesso!"<<endl;
                         system("pause");
                         break;
                         }
                      else
                          {
                          cout<<"Stock insuficiente"<<endl;
                           system("pause");
                           break;
                           }
                  }
              else
                  cout<<"Produto não encontrado"<<endl;
                  system("pause");
                  break;
                  } 
        case 6:
               {
              cout<<"Qual o nr do produto que pretende repor?"<<endl;
              cin>>nProd;
              
              if (nProd > 0 && nProd <= numProd)
                 {
                  cout<<"Produto "<<nProd<<": "<<nomeProd[nProd-1]<<" Preço: "<<fixed<<setprecision(2)<<precoProd[nProd-1]<<" Quantidade: "<<quantProd[nProd-1]<<endl; 
                  cout<<"Qual a quantidade a repor?"<<endl;
                  cin>>nRepor;
                  
              
                         quantProd[nProd-1] += nRepor;
                         cout<<"Produto reposto com sucesso!"<<endl;
                         system("pause");
                         break;                                             
                  }
              else
                  cout<<"Produto não encontrado"<<endl;
                  system("pause");
                  break;
                  } 
        case 7:
             {
              cout<<"Qual o nr do produto que pretende apagar?"<<endl;
              cin>>nProd;
              
              if (nProd > 0 && nProd <= numProd)
                 {
                 cout<<"Produto "<<nProd<<": "<<nomeProd[nProd-1]<<" Preço: "<<fixed<<setprecision(2)<<precoProd[nProd-1]<<" Quantidade: "<<quantProd[nProd-1]<<endl;
                 cout<<"Tem a certeza que quer apagar? (S/N)"<<endl;
                 cin>>resp;
                 if (resp == 's' || resp == 'S')
                    {
                     for (int i = nProd-1; i < numProd-1; i++)
                         {
                         nomeProd[i] = nomeProd[i+1];
                         quantProd[i] = quantProd[i+1];
                         precoProd[i] = precoProd[i+1];
                         }
                     nomeProd[numProd - 1] = "";
                     quantProd[numProd - 1] = 0;
                     precoProd[numProd - 1] = 0;
                     numProd--;
                     cout<<"Produto eliminado com sucesso!"<<endl;                   
                     }
                     }
                 else
                      cout<<"Produto não encontrado"<<endl;
                      system("pause");
                      break;
                 }
        case 8:
			cout<<"Deseja sair do programa? (S/N)"<<endl;
			cin>>sair;
			break;
			
	    default:
			cout<<"Opção inválida, por favor selecione uma opção de (1-8)"<<endl;
			system("pause");
			break;
}//fim do switch
}while(sair != 'S' && sair != 's');//fim do DO (while)
}//FIM DO MAIN
