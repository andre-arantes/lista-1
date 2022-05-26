#include <stdio.h>
//uso dos ifs para especificar cada intervalo e o valor de sua nota como insatisfatoria, regular, bom, ótimo ou inválido e o nota negativo para imprimir a nota como inválida
int main(void) {
  float nota;
  printf("Digite o valor da nota: \n");
  scanf("%f", &nota);
  if (nota>=0 && nota < 5) {
    printf("Nota insatisfatória");
  }
  if (nota >= 5 && nota < 7) {
    printf("Regular");
  }
  if (nota >= 7 && nota < 8) {
    printf("Bom");
  }
  if (nota >= 8 && nota <= 10) {
    printf("Ótimo");
  }
  if (nota<0) {
    printf("Nota inválida");
  }
  }
