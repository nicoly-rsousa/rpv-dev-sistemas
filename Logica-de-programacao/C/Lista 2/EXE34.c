/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float peso, altura, imc = 0;
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("\n---------------------------------------------------------------------------\n");
    if (imc < 18.5)
    {
        printf("Abaixo do peso, IMC: %.2f \n", imc);
    }
    else if (imc >= 18.5 && imc < 25)
    {
        printf("Peso ideal, IMC: %.2f \n", imc);
    }
    else if (imc >= 25 && imc < 30)
    {
        printf("Sobrepeso, IMC: %.2f \n", imc);
    }
    else if (imc >= 30 && imc < 40)
    {
        printf("Obesidade, IMC: %.2f \n", imc);
    }
    else
    {
        printf("Obesidade morbida, IMC: %.2f \n", imc);
    }
    printf("---------------------------------------------------------------------\n");
    return 0;
}