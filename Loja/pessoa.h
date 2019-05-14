#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <list>

struct pessoa_t { // Criando uma struct para o produto
  std::string nome;
  int codigo;
  int idade;

};

void cadastrarPessoas();
void imprimirPessoa();
void excluirPessoa(int);
void editarPessoa(int);
#endif
