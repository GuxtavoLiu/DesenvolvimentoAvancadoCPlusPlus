// pointers to structures
#include <iterator>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <sstream>
using namespace std;

struct produto_t {
  string nome;
  int preco;
};

void cadastrar(){
  string minhaString;

  produto_t aproduto;
  produto_t *pproduto;
  pproduto = &aproduto;

  vector<produto_t> listaProdutos;



  cout << "Insira o nome do produto: ";
  getline (cin, pproduto->nome);
  cout << "Insira o preço: ";
  getline (cin, minhaString);
  (stringstream) minhaString >> pproduto->preco;
  listaProdutos.push_back(aproduto);
}



void imprimir (list<produto_t>& lista){
    list<produto_t>::iterator p; //cria um iterador de produtos

    p = lista.begin();

    while(p != lista.end()){

        cout << "Nome: " << (*p).nome << endl;
        cout << "Preço: " << (*p).preco << endl;
        cout << "" << endl;
        p++;
    }
}

int main ()
{
  int controle, contador;

do {
  std::cout << "Deseja inserir algum produto? Digite \"1\" para SIM e \"0\" para não." << '\n';
  std::cin >> controle;
  if (controle == 1) {
    cadastrar();
    contador++;
  } else{
    std::cout << "Digite uma opção válida, \"1\" ou \"0\"." << '\n';
    std::cin >> controle;
  }


} while(controle != 0);
//------------------------- LISTAGEM
if (contador > 0) {
  imprimir(listaProdutos);
}else{
  std::cout << "Finalizando programa." << '\n';
}
//----------------------------------
std::cout << "Finalziando programa." << '\n';

  std::cout << "Deseja inserir algum produto? Digite \"1\" para SIM e \"0\" para não." << '\n';
  std::cin >> controle;

  if (controle == 1) {
    while (controle != 0) {
      cadastrar();
      contador++;
      std::cout << "Deseja inserir algum produto? Digite \"1\" para SIM e \"0\" para não." << '\n';
      std::cin >> controle;
    }
  }

  cout << "\nVocê inseriu:\n";
  cout << pproduto->nome;
  cout << " - R$ " << pproduto->preco << "\n";

  return 0;
}
