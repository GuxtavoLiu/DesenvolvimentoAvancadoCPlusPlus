#ifndef ACERVO_H
#define ACERVO_H

#include <string>
#include <list>

struct acervo_t { // Criando uma struct para o produto
  int codigo;
  std::string titulo;
  std::string genero;
  double valorLocacao;
  int qtde;
};

void cadastrarAcervo();
void imprimirAcervo();
void excluirAcervo(int);
void editarAcervo(int);

#endif
