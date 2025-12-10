/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  int j1;
  srand(time(NULL));
  int pc = (rand() % 3) + 1;
  printf("ESCOLHA UM NUMERO DE 1 A 5: ");
  scanf("%d", &j1);
  if (j1 == pc)
  {
    printf("VOCE VENCEU, O NUMERO ERA %d E VOCE DIGITOU %d", pc, j1);
  }
  else
  {
    printf("VOCE PERDEU,  O NUMERO ERA %d E VOCE DIGITOU %d", pc, j1);
  }

  return 0;
}