#include <iostream>
#include <list>
#include <iterator>
#include <string>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Aluno{
  int codigo;
  char nome[100];
  int idade;
};

FILE *arquivo;
const char *nomeArquivo = "arquivo.dat";

void cadastrarAluno()
{
  Aluno aluno;
  cout << "digite o codigo de aluno" << endl;
  cin >> aluno.codigo;
  cout << "digite o nome de aluno" << endl;
  cin >> aluno.nome;
  cout << "digite a idade de aluno" << endl;
  cin >> aluno.idade;
}




void gravarAluno(string char[50]){
  FILE * pFile;
  pFile = fopen ( "litaAlunos.txt" , "wb" ); // tenta abrir o arquivo, e cria ele caso n exista
  fputs ( nomeAluno , pFile ); // insere "This is an apple." no arquivo pFile
  fclose ( pFile ); // fecha o arquivo
}

int main() {
  // variaveis
  char nomeAluno[50];
  int opcao;
  // variaveis fim






  cout << "Digite o que deseja fazer" << '\n';
  cout << "1 gravar aluno" << '\n';


  cin >> opcao;
  do {
    if (opcao == 1) {
      cout << "digite o nome do aluno" << '\n';
      cin >> nomeAluno;

      gravarAluno(nomeAluno);
    }



    cout << "fechando o programa por falta de opcoes" << '\n';
    opcao = 0;
  } while(opcao != 0);


  return 0;
}
