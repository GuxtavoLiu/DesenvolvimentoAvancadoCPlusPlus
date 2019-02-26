#include <stdio.h>

double FparaC(double celsius)
{

  return ((double)celsius*1.8)+32;

}

int main() {

  double grausC;
  printf("Digite os graus em Celsius\n");
  scanf("%lf",&grausC);

printf("em Farenheight é = a %.2lf\n", FparaC(grausC));
  return 0;
}
