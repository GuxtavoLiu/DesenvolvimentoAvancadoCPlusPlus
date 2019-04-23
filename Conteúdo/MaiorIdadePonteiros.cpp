#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
  string *nome;
  int *idade;


  *nome = new string;
  *idade = new int;

  cin >> *nome;
  cin >> *idade;



  if(*idade >= 18)
  cout << nome << ", você é maior de idade!";
    printf("%s você é maior de idade!\n", nome);
  else
  cout << nome << ", você não é maior de idade!";
  printf("%s você não é maior de idade!\n", nome);


  return 0;
}
