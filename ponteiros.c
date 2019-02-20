#include<stdio.h>

int main() {
  int a, b, c;
  int *p;
  int idade;
  p = &a;
  a = 10;
  *p = 99;

  *(&a) = 100;
  b = 9;
  c=88;
 /*
  scanf("%i\n", &c);

  printf("Olá %u %i %i %p\n", *p, b, c, &b);
*/
https://pastebin.com/PNpF7VYC



  printf("Digite sua idade "); // Solicita uma idade
  scanf("%i", &idade ); // Captura oq o usuario digita
  if (idade < 17) { // compara para ver se a idade é menor que 17
    printf("Voçê é de menor\n"); // responde se o cliente é de maior ou de menor
  }else{
    printf("Você é de maior\n");
  }
}

  return 0;
}
