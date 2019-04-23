#include <stdio.h>

struct bixo_t {
  string nome;
  int idade;

  bixo_t *amiguinho;

};

int int main()
{
  bixo_t totoh;
  bixo_t *xaninho;

  xaninho = new bixo_t;

  totoh.nome = "totó";
  totoh.idade = 5;

  xaninho->nome = "xaninho";
  (*xaninho).nome = "xaninho";

  xaninho->idade = 2;

  cout << totoh.nome << endl;
  cout << xaninho->nome << endl;

  return 0;
}
 
