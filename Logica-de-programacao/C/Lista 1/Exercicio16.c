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
	float tempvida, result = 0;
	int anos = 0, danos = 365;

	printf("Digite a quantidade de cigarros fumado(s) por dia(s):  ");
	scanf("%f", &tempvida);
	printf("Quantos anos já fumou: ");
	scanf("%d", &anos);
	result = (anos * danos) * tempvida;
	printf("VOCE PERDEU UM TOTAL DE  %.2f DIA(S) \n", result);
}