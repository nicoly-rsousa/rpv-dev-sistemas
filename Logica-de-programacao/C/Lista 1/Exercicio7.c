/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  float n1 = 0, r1 = 0, r2 = 0;

  printf("DIGITE UM NÚMERO REAL:\n\n");
  scanf("%f", &n1);
  r1 = n1 * 2;
  r2 = n1 / 3;
  printf("O dobro do número %.1f é %.1f. A terça parte de %.1f é: %.5f", n1, r1, n1, r2);

  return 0;
}