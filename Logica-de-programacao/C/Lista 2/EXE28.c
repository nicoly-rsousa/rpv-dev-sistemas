/******************************************************************************

							Online C Compiler.
				Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	float comp = 0, larg = 0, area = 0;
	printf("---------TERRENO RETANGULAR---------\n");
	printf("Digite o comprimento do terreno: ");
	scanf("%f", &comp);
	printf("Digite a largura do terreno: ");
	scanf("%f", &larg);
	area = comp * larg;
	printf("-------------------------------------------------\n");
	if (area > 0 && area < 100)
	{
		printf("TERRENO POPULAR! AREA: %.2f", area);
	}
	else if (area >= 100 && area <= 500)
	{
		printf("TERRENO MASTER! AREA: %.2f", area);
	}
	else if (area > 500)
	{
		printf("TERRENO VIP! AREA: %.2f ", area);
	}
	else
	{
		printf("TAMANHO INVALIDO!");
	}
	printf("\n-------------------------------------------------");

	return 0;
}