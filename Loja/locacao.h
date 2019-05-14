#ifndef LOCACAO_H
#define LOCACAO_H

#include <string>
#include <list>


struct locacao_t { // Criando uma struct para o produto
  int idLocacao;
  int idAcervo;
  int idCliente;
  std::string nomeCliente;
  std::string nomeAcervo;

};

void realizarLocacao(int, int);
void imprimirLocacao();

#endif
