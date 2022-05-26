#include <stdio.h>

int main(void) {
  int salario;
  //Uso da estrutura SWITCH já que a questão requere a escolha entre opção A, B e C
  char(op);
  printf("Digite o valor do salário recebido e a opção do aumento \n");
  scanf("%d %c", &salario, &op);
  switch (op) {
  case 'A':
    salario = salario * 1.08;
    printf("O novo salário é de %.2d \n", salario);
    break;
  case 'B':
    salario = salario * 1.11;
    printf("O novo salário é de %.2d \n", salario);
    break;
  case 'C':
    //uso do if dentro do case c devido a duas possibilidades de cálculo dentro da mesma varíavel.
    if (salario <= 1000) {
      printf("O novo salário é de %.2d", salario + 350);
    } else {
      printf("O novo salário é de %.2d", salario + 200);
    }
  }
}
