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
	float segundos=0;
    
	
	printf("Digite o tempo em segundos ");
	scanf("%f",&segundos);
	printf("TEMPO EM  %.2f SEGUNDO(S)\n", segundos);
	printf("TEMPO EM  %.2f MINUTO(S)\n", segundos/60);
	printf("TEMPO EM  %.2f HORA(S)\n", segundos/3600);

	
	


}