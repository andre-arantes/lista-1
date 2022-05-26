#include <stdio.h>

int main(void) {
  char(op);
  printf("Digite um símbolo matemático do teclado: \n");
  scanf(" %c", &op);
  switch (op) {
    //uso dos caracteres como o caso de modo a facilitar o código
  case '>':
    printf("O seu símbolo é o maior que...");
    break;
  case '<':
    printf("O seu símbolo é o menor que...");
    break;
  case '=':
    printf("O seu símbolo é o igual a...");
    break;
    //uso do default para sinalizar que em qualquer outro caso não sendo os declarados, o a mensagem outro sinal será impressa.
  default:
    printf("Outro sinal");
  }
}
