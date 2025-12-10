/******************************************************************************

							Online C Compiler.
				Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	char nome[100];
	float salario = 0;
	int temp = 0;
	printf("---------DADOS FUNCIONARIO---------\n");
	printf("Digite seu nome: ");
	scanf("%s", nome);
	printf("Digite seu salario:");
	scanf("%f", &salario);
	printf("Quantos anos trabalha na empresa: ");
	scanf("%d", &temp);
	if (temp < 3)
	{
		printf("Aumento de 3%% = %.2f", (salario * 0.03) + salario);
	}
	else if (temp >= 3 && temp < 10)
	{
		printf("Aumento de 12.5%% = %.2f", (salario * 0.125) + salario);
	}
	else if (temp >= 10)
	{
		printf("Aumento de 20%% =  %.2f", (salario * 0.20) + salario);
	}

	return 0;
}