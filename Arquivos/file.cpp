#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE* abrir_arquivo (char *fname)
{
  FILE *fp;

  fname = fopen(fname, "rb+");

  if (fname == NULL) {
    fp = fopen(fname, "wb");

    if (fp == NULL) {
    printf("Impossível criar arquivo %s\n", fname);
    exit(1);
    }

    fclose(fp);
    fname = fopen(fname, "rb+");
    if (fp == NULL) {
      printf("impossivel abrir arquivo%s\n", );

      if (fp == NULL) {
      printf("Impossível criar arquivo %s\n", fname);
      exit(1);
    }
  }

return fp;
}

int main()
{

    FILE *fp;
    char str[50] = "eduardo";
    char buffer_leitura[100];
    int n;

    fp = abrir_arquivo("data.dat");

    n = fread(buffer_leitura, sizeof(char), 100, fp);
    buffer_leitura[n] = 0;

    printf("%s\n", buffer_leitura);

    fclose(fp);
    fp = abrir_arquivo("data.dat");

    fwrite(str, sizeof(char), strlen(str));

    fclose(fp);
    // //---abre com permissao de escrita
    // fp = fopen("data.dat", "rb+");
    //
    // //---abre modo leitura
    // fp = fopen("data.dat", "rb");
    //
    // //---abre e escreve, se nao existir cria
    // fp = fopen("data.dat", "wb");


  return 0;
}
