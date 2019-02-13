#include<iostream>


using namespace std;

int main ()
{
int acerto = 0;
int resposta;


//////////pergunta 1/////////////
cout << "Quanto é 1+15?\n";
cout << "1. 15\n";
cout << "2. 16\n";
cout << "3. 17\n";
cout << "4. 18\n"<< endl;

cout << "Digite o número correspondente a alternativa de sua resposta: "<< endl;
cin >> resposta;
if (resposta == 2){

  cout << "Resposta correta!\n" << endl;
  acerto = acerto+1;
}else{
  cout << "Reposta incorreta, a correta seria: 2\n" << endl;
}
///////////////////////////////////

////pergunta 2//////
cout << "Quanto é 55*2?\n";
cout << "1. 541\n";
cout << "2. 50\n";
cout << "3. 110\n";
cout << "4. 100\n" << endl;

cout << "Digite o número correspondente a alternativa de sua resposta: "<< endl;
cin >> resposta;
if (resposta == 3){
  cout << "Resposta correta!" << endl;
  acerto = acerto+1;
}else{
 cout << "Resposta incorreta, a correta seria: 3" << endl;
}

/////pergunta 3//////
cout << "Qual era a cor do cavalo Branco de Napoleão?\n";
cout << "1. Marrom\n";
cout << "2. Branco\n";
cout << "3. Preto\n";
cout << "4. Cinza\n" << endl;

cout << "Digite o número correspondente a alternativa de sua resposta: "<< endl;
cin >> resposta;
if (resposta == 1){
  cout << "Resposta correta!" << endl;
  acerto = acerto+1;
}else{
  cout << "Reposta incorreta, o correto seria: 1" << endl;

}

///////pergunta 4/////
cout << "Qual a frase mais famosa do filme \"300\"?\n";
cout << "1. Eu sou Leonidas!\n";
cout << "2. This is Sparta!\n";
cout << "3. Aqui é Tamboara!\n";
cout << "4. Eu sou o Capitão América!\n" << endl;

cout << "Digite o número correspondente a alternativa de sua resposta: "<< endl;
cin >> resposta;
if (resposta == 2){
    cout << "Resposta correta!" << endl;
  acerto = acerto+1;
}else{
 cout << "Resposta incorreta, o correto seria: 2;" << endl;
}


//////////pergunta 5/////////
cout << "Qual das alternativas tem \"dois zeros, dois zero\"?\n";
cout << "1. 2000\n";
cout << "2. 0020\n";
cout << "3. 2020\n";
cout << "4. 2022\n" << endl;

cout << "Digite o número correspondente a alternativa de sua resposta: "<< endl;
cin >> resposta;
if (resposta == 2){
    cout << "Resposta correta!" << endl;
  acerto = acerto+1;
}else{
   cout << "Resposta incorreta, o correto seria: 2" << endl;
}

////// pergunta 6 /////
cout << "Quem descobriu o Brasil foi Pedro Álvares...\n";
cout << "1. Cobra\n";
cout << "2. Souza\n";
cout << "3. Cabra\n";
cout << "4. Cabral\n" << endl;

cout << "Digite o número correspondente a alternativa de sua resposta: "<< endl;
cin >> resposta;
if (resposta == 4){
    cout << "Resposta correta!" << endl;
  acerto = acerto+1;
}else{
  cout << "Resposta incorreta, o correto seria: 4" << endl;
}

///////pergunta 7////////
cout << "Qual desses nomes morreu em acidente de helicóptero?\n";
cout << "1. Brois Casoy\n";
cout << "2. William Bonner\n";
cout << "3. Ricardo Boechat\n";
cout << "4. João Marcos\n" << endl;

cout << "Digite o número correspondente a alternativa de sua resposta: "<< endl;
cin >> resposta;
if (resposta == 3){
    cout << "Resposta correta!" << endl;
  acerto = acerto+1;
}else{
  cout << "Resposta incorreta, o correto seria: 3" << endl;
}

/////pergunta 8 ////////
cout << "Em que planeta vivemos?\n";
cout << "1. Plutão\n";
cout << "2. Marte\n";
cout << "3. Urano\n";
cout << "4. Terra\n"<< endl;

cout << "Digite o número correspondente a alternativa de sua resposta: "<< endl;
cin >> resposta;
if (resposta == 4){
    cout << "Resposta correta!" << endl;
  acerto = acerto+1;
}else{
    cout << "Resposta incorreta, o correto seria: 4" << endl;
}

///////pergunta 9 /////////
cout << "Quantos anos faz em 2019, uma pessoa que nasceu em 1989?\n";
cout << "1. 30\n";
cout << "2. 40\n";
cout << "3. 20\n";
cout << "4. 50\n"<< endl;

cout << "Digite o número correspondente a alternativa de sua resposta: "<< endl;
cin >> resposta;
if (resposta == 1){
    cout << "Resposta correta!" << endl;
  acerto = acerto+1;
}else{
    cout << "Resposta incorreta, o correto seria: 1" << endl;;
}

/////pergunta 10 //////////
cout << "Qual desses NÃO é um número primo?\n";
cout << "1. 2\n";
cout << "2. 1\n";
cout << "3. 6\n";
cout << "4. 3\n"<< endl;

cout << "Digite o número correspondente a alternativa de sua resposta: "<< endl;
cin >> resposta;
if (resposta == 3){
    cout << "Resposta correta!\n" << endl;
  acerto = acerto+1;
}
else {
    cout << "Resposta incorreta, o correto seria: 3" << endl;
}

cout << endl;
cout << "Parabéns, você acertou: "<< acerto << " questões!!!";

}
