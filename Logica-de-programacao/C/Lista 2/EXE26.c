/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int n1 = 0, n2 = 0;
  printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);
  printf("-------------------------------------------------\n");
  if (n1 > n2)
  {
    printf("O primeiro numero é o maior!");
  }
  else if (n1 < n2)
  {
    printf("O segundo numero é o maior!");
  }
  else
  {
    printf("Numeros Iguais!");
  }
  printf("\n-------------------------------------------------");

  return 0;
}