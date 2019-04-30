#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE* abrir_arquivo (char *fname)
{
  fname = fopen("data.dat", "rb+");
  if (fname = NULL) {
    printf ("Arquivo não existe.");
    fname = fopen
  }

}

int main() {
    FILE *fp;

    abrir_arquivo(fp);




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
