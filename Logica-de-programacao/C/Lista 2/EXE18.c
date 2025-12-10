/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int ano = 2025, anonas = 0, result;

  printf("Qual o seu ano de nascimento: ");
  scanf("%d", &anonas);
  result = ano - anonas;
  printf("IDADE : %d anos\n", result);

  if (result >= 16 && result < 18)
  {
    printf("Voto Facultativo!");
  }
  else if (result >= 18)
  {
    printf("Voto Obrigatório!");
  }
  else
  {
    printf("Voce NÃO pode VOTAR!");
  }

  return 0;
}