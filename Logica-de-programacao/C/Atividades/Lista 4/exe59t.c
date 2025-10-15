#include <stdio.h>
#include <locale.h>
//#include <ctype.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario = 0, salariom = 0,media=0, salarioh = 0,h=0,f=0, idmj=0;
    char sexo, resp;
    int idade;
    //char sexo2;
    
    int idade = 0, idadem = 0;
    printf("----------FUNCIONÁRIOS----------");
    do
    {
        printf("\nDigite o salário: ");
        scanf("%f", &salario);
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        if (idade > idadem)
        {
            idadem = idade;
        }
       printf("Digite 'F' para Feminino e 'M' para Masculino: ");
        scanf(" %c", &sexo);
      //  sexo2=toupper(sexo);
        if(sexo=='M' && sexo=='m'){
            h++;
            media=media+idade;
        }
         if(sexo=='F' && sexo=='f'){
            idmj=idade;
    
        }
        printf("\nDeseja continuar? ");
        scanf(" %c", &resp);

    } while (resp != 'n' && resp != 'N');

    printf("-----------------------------------");
    printf("\nMAIOR IDADE LIDA: %f \n",media/h);
    printf("\nMAIOR IDADE LIDA: %f \n",media/h);
     printf("\nMAIOR IDADE LIDA: %f \n",media/h);
          printf("\nMAIOR IDADE LIDA: %f \n",media/h);
    printf("\n:");

    return 0;
}
