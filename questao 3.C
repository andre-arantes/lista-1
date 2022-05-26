#include <stdio.h>

int main(void) {
  int ano, idade;
  char op;
  //uso do char op para usar o switch ja que o usuário tem que escolher entre opção S e N
  printf ("Digite o ano de nascimento\n");
  scanf ("%d", &ano);
  printf("Já fez aniversário este ano?\n");
  scanf (" %c", &op);
  switch (op)
    {
      case 's': idade = 2022 - ano;
              break;
      case 'n': idade = 2021 - ano;
              break;
    }
  if (idade>=18) {
    printf ("Pode ter a CNH");
  } else {
    printf ("Não tem idade para ter CNH");
  }
  
}
