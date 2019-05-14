#include <iostream>
#include <list>
#include <iterator>
#include <string>
#include "acervo.h"

using namespace std;

struct acervo_t { // Criando uma struct para o produto
  int codigo;
  string titulo;
  string genero;
  double valorLocacao;
  int qtde;
};

list<acervo_t> listaAcervo; //Comando para criar uma lista de produtos



void cadastrarAcervo(){ // metodo para cadastrar os produtos
  acervo_t acervo;//Defini a lista como produtos

  list<acervo_t>::iterator p;

  p = listaAcervo.begin();

  acervo.codigo = (*p).codigo + 1;

  cout << "Nome do produto: ";
  cin >> acervo.titulo;//Guardar nome do produto
  cout << "Genero do produto: ";
  cin >> acervo.genero;//Guardar nome do produto
  cout << "Preço do produto: ";
  cin >> acervo.valorLocacao;//Guardar preco do produto
  cout << "Quantidade em estoque: ";
  cin >> acervo.qtde;//Guardar quantidade em estoque do produto
  cout << " "<< endl;
  cout << "Acervo cadastrado com sucesso!"<< endl;
  cout << " "<< endl;

  listaAcervo.push_back(acervo); // "enviar" os dados para a lista adiciona os elementos na lista
}


void imprimirAcervo(){

  list<acervo_t>::iterator p;

  p = listaAcervo.begin();

  while(p != listaAcervo.end()){
    cout << "Lista Acervo" << endl;
    cout << "Código: " << (*p).codigo << endl;// Imprimi código do produto
    cout << "Nome: " << (*p).titulo << endl;// Imprimi nome do produto
    cout << "Genero: " << (*p).genero << endl;// Imprimi nome do produto
    cout << "Preço: " << (*p).valorLocacao << endl;// Imprimi preco do produto
    cout << "Quantidade: " << (*p).qtde << endl;// Imprimi quantidade em estoque do produto
    cout << "Valor em estoque: R$ " << (*p).valorLocacao*(*p).qtde << endl;
    cout << "------------" << endl;
    p++;
  }

}
void excluirAcervo(int var){
  list<acervo_t>::iterator p;

  p = listaAcervo.begin();
  while(p != listaAcervo.end()){
    if(var == p-> codigo){
      listaAcervo.erase(p);
      break;
      cout << "Acervo excluido com sucesso!" << endl;
      cout << " "<< endl;
    }

    p++;
  }
}
void editarAcervo(int var){
  list<acervo_t>::iterator p;

  p = listaAcervo.begin();
  while(p != listaAcervo.end()){
    if((*p).codigo == var){
      cout << "Editar titulo: ";
      cin >> (*p).titulo;
      cout << "Editar genero: ";
      cin >> (*p).genero;
      cout << "Editar valor de locação: ";
      cin >> (*p).valorLocacao;
      cout << "Editar quantidade em estoque: ";
      cin >> (*p).qtde;
      cout << " "<< endl;
      cout << "Acervo editado com sucesso!"<<endl;
      cout << " "<< endl;

    }
    p++;

  }
}
