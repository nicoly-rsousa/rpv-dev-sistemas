/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  float n1 = 0, n2 = 0, media = 0;
  printf("Digite a primeira nota: ");
  scanf("%f", &n1);
  printf("Digite a segunda nota: ");
  scanf("%f", &n2);
  media = (n1 + n2) / 2;
  printf("-------------------------------------------------\n");
  if (media <= 4.9)
  {
    printf("Reprovado, MEDIA: %.2f!", media);
  }
  else if (media >= 5 && media <= 6.9)
  {
    printf("Recuperacao, MEDIA: %.2f!", media);
  }
  else
  {
    printf("Aprovado, MEDIA: %.2f!", media);
  }
  printf("\n-------------------------------------------------");

  return 0;
}