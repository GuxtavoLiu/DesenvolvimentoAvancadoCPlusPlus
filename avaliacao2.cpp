// pointers to structures
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

struct produto_t {
  string nome;
  int preco;
};

int main ()
{


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

  cout << "\nVocê inseriu:\n";
  cout << pproduto->nome;
  cout << " - R$ " << pproduto->preco << "\n";

  return 0;
}
