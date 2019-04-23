#include <stdio.h>

double FparaC(double *t)
{
*t = 1.8 * *t + 32;

}

int main() {

  double grausC;
  printf("Digite os graus em Celsius\n");
  scanf("%lf", &grausC);
  FparaC(&grausC)

  printf("em Farenheight é = a %.2lf\n", grausC);
  return 0;
}
