// vector::push_back
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

int main() {
    int resposta;
    std::vector<string> listaProdutos;
    string produto;

    std::cout << "AVALIAÇÃO" << '\n';
    std::cout << "Insira os produtos que desejar (digite 0 e pressione \"Enter\" quando terminar):\n";

    do {
        std::cin >> produto;
        listaProdutos.push_back(produto);
    } while (produto != "0");

    std::cout << "Lista de produtos armazena: " << int(listaProdutos.size()) << " produtos.\n";

    std::cout << "====== Apresentando produtos: ======" << '\n';
    for (int i = 0; i < listaProdutos.size(); i++) {
      std::cout << listaProdutos[i] << '\n';
    }
    std::cout << "Deseja adicionar mais algum produto?" << "\n";
    std::cout << "Digite 1 para \"Sim\" e 0 para \"Não\"" << "\n";

    std::cin >> resposta;
    while (resposta != 0) {

        if (resposta == 1) {
            do {
                std::cin >> produto;
                listaProdutos.push_back(produto);
            } while (produto != "0");
            std::cout << "Digite 0 se desejar sair, 1 para adicionar mais números." << '\n';
            std::cin >> resposta;
        } else {
            std::cout << "Resposta inválida, por favor digite \"1\" para inserir outro produto, e \"0\" para encerrar." << '\n';
        }
    }

   std::cout << "====== Apresentando produtos: ======" << '\n';
   for (int i = 0; i < listaProdutos.size(); i++) {
     std::cout << listaProdutos[i] << '\n';
   }


return 0;
}
