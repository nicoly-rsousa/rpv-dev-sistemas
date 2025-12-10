/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
  float a = 0, b = 0, c = 0, delta = 0, r1 = 0, r2 = 0, raizd = 0;
  printf("EQUAÇÃO DO SEGUNDO GRAU:");
  printf("\nEscreva o valor de A:");
  scanf("%f", &a);

  if (a == 0)
  {
    printf("NÃO É UMA EQUAÇÃO DO SEGUNDO GRAU!");
    printf("Pressione enter para sair...\n");
    getchar();
  }
  printf("Escreva o valor de B: ");
  scanf("%f", &b);
  printf("Escreva o valor de C: ");
  scanf("%f", &c);
  delta = b * b - (4 * a * c);
  printf("O valor de delta é: %.2f \n", delta);
  if (delta > 0)
  {
    printf("\nDuas raízes reais e diferentes!\n");
  }
  if (delta == 0)
  {
    printf("\nRaízes Duplas");
  }
  if (delta < 0)
  {
    printf("\nRaízes Complexas, Não existe raiz real\n");
  }
  raizd = sqrt(delta);
  printf("O valor da raiz de delta é: %.2f \n", raizd);

  r1 = ((-b) + raizd) / (2 * a);
  r2 = ((-b) - raizd) / (2 * a);

  printf("\n\nRAIZ 1: %.2f", r1);
  printf("\n\nRAIZ 2: %.2f", r2);

  return 0;
}