#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *nome;
  int *idade;


  nome = malloc(sizeof(char)*100);
  idade = malloc(sizeof(int));

  scanf("%s", nome);
  scanf("%d", idade );

  if(*idade >= 18)
    printf("%s você é maior de idade!\n", nome);
  else
  printf("%s você não é maior de idade!\n", nome);


  return 0;
}
