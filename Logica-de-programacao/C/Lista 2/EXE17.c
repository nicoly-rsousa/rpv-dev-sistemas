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
  double vel = 0, result = 0;

  printf("Qual a velocidade do carro: ");
  scanf("%lf", &vel);

  if (vel > 80)
  {
    result = (vel - 80) * 5;
    printf("Voce ultrapassou a velocidade permitida de 80km/h, valor da MULTA:  %.2lf \n", result);
  }
  else
  {
    printf("Velocidade correta!");
  }

  return 0;
}