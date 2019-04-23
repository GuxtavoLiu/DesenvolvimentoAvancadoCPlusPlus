#include<iostream>


using namespace std;

int main ()
{
  int i;
  string s;
  cout << "Digite seu nome: ";
  getline(cin,s);

  cout << "Digite sua idade: ";
  cin >> i;

  if(i>=18){
    cout << s << " você é maior de idade, e tem " << i << " anos.";
  }else
  {
    cout << "Você não é maior de idade" << endl;
  }

  cout << "Olá, " << s << endl;

  for (int i = 0; i < 10; i++) {
    std::cout << i+1 << endl;
  }

return 0;
}
