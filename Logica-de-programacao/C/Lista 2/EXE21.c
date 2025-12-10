/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int ano;
  printf("-----ANO BISSEXTO----- \n");
  printf("Digite um ano: ");
  scanf("%d", &ano);
  if (ano % 400 == 0)
  {
    printf("%d É UM ANO BISSEXTO!", ano);
  }
  else
  {
    printf("%d NÃO É UM ANO BISSEXTO!", ano);
  }

  return 0;
}