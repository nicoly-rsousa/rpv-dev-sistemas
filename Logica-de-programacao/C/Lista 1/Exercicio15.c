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
	float dias = 0;

	printf("Quantos dias trabalhados nesse mes ");
	scanf("%f", &dias);
	printf("SALARIO TOTAL= %.2f", (8 * 25) * dias);
}