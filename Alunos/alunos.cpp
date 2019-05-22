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

void cadastrarArquivo(Aluno aluno){
  FILE *pf;
  int NUM = 88;
  int pilido;
  if((pf = fopen("arquivo.bin", "wb")) == NULL) /* Abre arquivo binário para escrita */
  {
    printf("Erro na abertura do arquivo");
    exit(1);
  }
  if(fwrite(&NUM, sizeof(int), 1,pf) != 1)     /* Escreve a variável NUM | o operador sizeof, que retorna o tamanho em bytes da variável ou do tipo de dados. */
  printf("Erro na escrita do arquivo");
  fclose(pf);                                    /* Fecha o arquivo */
  if((pf = fopen("arquivo.bin", "rb")) == NULL) /* Abre o arquivo novamente para leitura */
  {
    printf("Erro na abertura do arquivo");
    exit(1);
  }
  if(fread(&pilido, sizeof(int), 1,pf) != 1) /* Le em pilido o valor da variável armazenada anteriormente */
  printf("Erro na leitura do arquivo");
  printf("\nO valor de NUM, lido do arquivo é: %d \n\n", pilido);
  fclose(pf);
}


int main()
{
  cadastrarArquivo();


  return(0);
}
