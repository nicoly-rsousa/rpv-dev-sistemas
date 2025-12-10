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
	float car = 0, result = 0;
	int dia = 0;

	printf("Qual a quantidade de Km percorridos: ");
	scanf("%f", &car);
	printf("Quantos dias ele foi alugado: ");
	scanf("%d", &dia);
	result = 90 * dia + 0.2 * car;
	printf("O preço total a pagar é %.2f", result);
}