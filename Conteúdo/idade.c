#include<stdio.h>

int int main()
{
char nome[10];
int *pIdade;
int idade;

pIdade = &idade;

scanf("%s\n", nome);
scanf("%s\n", &idade);
printf("%s\n", nome);
printf("%d\n", idade);

if (idade >= 18){
  printf("Você é de maior\n");

}else{
  printf("Você não é de maior");
}

  return 0;
}
