// vector::push_back
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

int main() {
  int resposta;
  // std::vector<string> listaProdutos;
  // string produto;

  std::cout << "Bem Vindo ao Sistema da Lojinhaa!" << '\n';
  std::cout << '\n';
  std::cout << "Digite a opção desejada para o que deseja fazer e tecle \"Enter\". \n";
  std::cout << "|=================================================| \n";
  std::cout << "|  Digite \"1\" para acessar o menu de Clientes;  | \n";
  std::cout << "|  Digite \"2\" para acessar o menu de Acervo;    | \n";
  std::cout << "|  Digite \"0\" para encerrar o programa.         | \n";
  std::cout << "|=================================================| \n";
  std::cout << '\n';
  std::cout << "Digite sua resposta: ";
  std::cin >> resposta;

  // INICIA O LAÇO DE REPETIÇÃO, ONDE QUANDO A REPOSTA FOR 0, ENCERRA O PROGRAMA

  while (resposta != 0) {


    if (resposta == 1 || resposta == 2) {
      // ACESSA O MENU DE CLIENTES
      if (resposta == 1) {
        std::cout << "Digite a opção desejada para o que deseja fazer e tecle \"Enter\". \n";
        std::cout << "|=================================================| \n";
        std::cout << "|  Digite \"1\" para clientes;                    | \n";
        std::cout << "|  Digite \"2\" para acervos;                     | \n";
        std::cout << "|  Digite \"0\" para encerrar o programa.         | \n";
        std::cout << "|=================================================| \n";
        std::cout << '\n';
        std::cout << "Digite sua resposta: ";

        std::cin >> resposta;

        // ENTRA NA OPÇÃO CLIENTES
        if (resposta == 1) {

          std::cout << '\n';

          std::cout << "Digite a opção desejada para o que deseja fazer e tecle \"Enter\". \n";
          std::cout << "|=================================================| \n";
          std::cout << "|  Digite \"1\" para cadastrar cliente;           | \n";
          std::cout << "|  Digite \"2\" para alterar cliente;             | \n";
          std::cout << "|  Digite \"3\" para excluir cliente;             | \n";
          std::cout << "|  Digite \"0\" para encerrar o programa.         | \n";
          std::cout << "|=================================================| \n";
          std::cout << '\n';
          std::cout << "Digite sua resposta: ";
          std::cin >> resposta;



          if (resposta == 1) {
            cadastrarClientes(); // inclui listar
          } else if (resposta == 2) {
            alterarClientes(); // inclui listar
          } else if (resposta == 3) {
            exluirCliente(); // inclui listar
          }else {
            std::cout << "Encerrando o programa!" << '\n';
            exit(1);
          }

        }
        else if (resposta == 2) {
        }
        // ACESSA O MENU DE ACERVO
        else if (resposta == 2) {
          std::cout << "Digite a opção desejada para o que deseja fazer e tecle \"Enter\". \n";
          std::cout << "|=================================================| \n";
          std::cout << "|  Digite \"1\" para cadastrar item;              | \n";
          std::cout << "|  Digite \"2\" para listar os itens do acervo;   | \n";
          std::cout << "|  Digite \"0\" para encerrar o programa.         | \n";
          std::cout << "|=================================================| \n";
          std::cout << '\n';
          std::cout << "Digite sua resposta: ";
          std::cin >> resposta;
          if (resposta == 1)) {
            while (resposta != 0) {
              cadastrarItem();
              std::cout << "Deseja cadastrar outro item? Digite 1 para SIM e 0 para NÃO." << '\n';
              std::cin >> resposta;
            }
          }
          else if (resposta == 2) {
            listarItens();
            std::cout << "Digite 1 para locar." << '\n';
            std::cout << "Digite 2 para cadastrar item." << '\n';
            std::cout << "Digite 3 para devolução." << '\n';

            std::cin >> resposta;
            if (resposta == 1) {
            }

          }

        }


      }
    } else{
      std::cout << "Resposta incorreta, por favor digite 1, 2, 3 ou 4." << '\n';
      std::cin >> resposta;

    }



  }





















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
