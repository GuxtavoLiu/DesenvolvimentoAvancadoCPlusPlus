#include<stdio.h>
#include<stdlib.h>
#include<std.h>



int v[100];

int main ()
{

  int *p;

  char nome[10];
  char *n;

  n = nome;

  *n = 'E';
  n++;
  *n = 'd';
  n++;
  *n - 'u';
  n++;
  *n = 0;
  n++;
  *n = 'a';
  printf("%s\n", nome);
  n = nome + 1;
  strcpy(nome, "maria");
  printf("%s\n", nome);
  printf("%s\n", n);

  nome[0] = 'E';
  nome[1] = 'd';
  nome[2] = 'u';
  nome[3] = 0;

  printf("%s\n", nome);

  v[0] = 22;
  *v = 22;

  v[50] = 60;
  *(v+50) = 60;

  p = v;
  p = p + 1;


  printf("%lu %lu %lu %lu %lu\n", v, v+1, &p, p, *p);



  return 0;

}
