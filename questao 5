#include <math.h>
#include <stdio.h>
int main(void) {
  float v, vp, vtp8, aps, vtn5, dif;
  printf("Digite o valor da diária\n");
  scanf("%f", &v);
//sistemas que implicam o valor das variáveis e suas relações
  aps = 75;
  vp = v * 0.75;
  vtp8 = aps * 0.8 * vp;
  vtn5 = aps * 0.5 * v;
  dif = vtp8 - vtn5;

  printf("O valor promocional é:%.2f\n", vp);
  printf("O valor total com diária promocional em 0.8 da ocupação é:%.2f\n",
         vtp8);
  printf("O valor total com diária normal em 0.5 da ocupação é:%.2f\n", vtn5);
  printf("A diferença entre os dois valores é:%.2f\n", dif);
}
