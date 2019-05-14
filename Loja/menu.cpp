#include <iostream>
#include "menu.h"


using namespace std;

void menu(){
  int op = 0;


  cout << "Cliente:  1" << endl;
  cout << "Acervo:   2" << endl;
  cout << "Locação:  3" << endl;
  cout << "Digite uma opção: ";
  cin >> op;


  if(op == 1){
    cout << "" << endl;
    cout << "Cadastrar Cliente:  1" << endl;
    cout << "Editar Cliente:     3" << endl;
    cout << "Excluir Cliente:    5" << endl;
    cout << "Imprimir Clientes:  7" << endl;
    cout << "Sair do Programa    0" << endl;
    cout << "Digite uma opção: ";
  } else if(op == 2){
    cout << "" << endl;
    cout << "Cadastrar Acervo:  2" << endl;
    cout << "Editar Acervo:     4" << endl;
    cout << "Excluir Acervo:    6" << endl;
    cout << "Imprimir Acervo:   8" << endl;
    cout << "Sair do Programa   0" << endl;
    cout << "Digite uma opção: ";
  } else if (op == 3){
    cout << "" << endl;
    cout << "Realizar locação:  10" << endl;
    cout << "Itens locados:     11" << endl;
    cout << "Digite uma opção: ";
  }


}
