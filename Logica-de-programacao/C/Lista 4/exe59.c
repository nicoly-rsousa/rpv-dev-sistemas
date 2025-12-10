#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario = 0, soma_salario_m = 0, soma_salario_h = 0;
    char sexo, resp;
    int h = 0, m = 0;
    int idade_m_mais_j = 0;
    int idade = 0, maior_idade = 0;
    int primeira_mulher = 1;

    printf("----------FUNCIONÁRIOS----------");

    do {
        printf("\nDigite o salário: ");
        scanf("%f", &salario);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        // a) Verificar a maior idade
        if (idade > maior_idade)
            maior_idade = idade;

        printf("Digite 'F' para Feminino e 'M' para Masculino: ");
        scanf(" %c", &sexo);

        // b) Contar homens e somar salário
        if (sexo == 'M' || sexo == 'm') {
            h++;
            soma_salario_h += salario;
        }

        // c) Contar mulheres e achar a mais jovem
        else if (sexo == 'F' || sexo == 'f') {
            m++;
            soma_salario_m += salario;

            if (primeira_mulher || idade < idade_m_mais_j) {
                idade_m_mais_j = idade;
                primeira_mulher = 0;
            }
        }

        printf("\nDeseja continuar? (S/N): ");
        scanf(" %c", &resp);

    } while (resp != 'N' && resp != 'n');

    printf("\n-----------------------------------");
    printf("\nMaior idade lida: %d", maior_idade);
    printf("\nTotal de homens: %d", h);
    if (m > 0)
        printf("\nIdade da mulher mais jovem: %d", idade_m_mais_j);
    else
        printf("\nNenhuma mulher cadastrada.");

    if (h > 0)
        printf("\nMédia salarial dos homens: %.2f", soma_salario_h / h);
    else
        printf("\nNenhum homem cadastrado.");

    printf("\n-----------------------------------\n");

    return 0;
}