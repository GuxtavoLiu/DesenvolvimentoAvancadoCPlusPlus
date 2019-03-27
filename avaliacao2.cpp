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

list<produto_t> listaProdutos;

void cadastrar() {
    produto_t produto;

    cout << "Insira o nome do produto:" << endl;
    cin >> produto.nome;
    cout << "Insira o preco do produto:" << endl;
    cin >> produto.preco;

    listaProdutos.push_back(produto);
}

void imprimir() {

    list<produto_t>::iterator p;

    p = listaProdutos.begin();

    while (p != listaProdutos.end()) {
        cout << "Nome: " << (*p).nome << endl; // Imprimi nome do produto
        cout << "Preço: " << (*p).preco << endl; // Imprimi preco do produto
        cout << "------------" << endl;
        p++;
    }

}

/*           -------          MAIN          ------         */
int main() {
    int resposta, numProdutos = 0;

    do {
        cout << "Deseja inserir algum produto? Digite \"1\" para SIM e \"0\" para não." << endl;
        cin >> resposta;
            if (resposta == 1) {
            cadastrar();
            numProdutos++;

        } else if (resposta == 0) {
            cout << "Finalizando adição de produtos." << '\n';
        } else {
            cout << "Digite uma opção válida, \"1\" ou \"0\"." << endl;
            cin >> resposta;
        }


    } while (resposta != 0);


    if (numProdutos > 0) {

        imprimir();

    } else {
        cout << "Nenhum produto foi adicionado, encerrando o programa." << endl;
    }

    cout << "Encerrando o programa!" << endl;

    return 0;
}

/*              ------      MAIN                -----=          */
