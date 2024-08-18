/*
3 – Elaborar um algoritmo para ler o nome de um funcionário, seu cargo e salário e fazer o reajuste
salarial de acordo com os critérios apresentados abaixo. Deve-se imprimir o nome, cargo, salário
antigo e novo do funcionário.

Salário <= R$ 1.000,00 -> 30% de reajuste
R$ 1.000,00 < Salário <= 5.000,00 -> 20% de reajuste
Salário > R$ 5.000,00 -> 10% de reajuste
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char nome[30], cargo[30];
    float salarioAntigo, salarioNovo, reajuste;

    printf("Informe o nome do funcionário: ");
    scanf("%s", nome);

    printf("Informe o cargo do funcionário: ");
    scanf("%s", cargo);

    printf("Informe o salário atual: ");
    scanf("%f", &salarioAntigo);

    if(salarioAntigo <= 1000.0) {
        reajuste = 1.3;
    } else if(salarioAntigo > 1000.0 && salarioAntigo <= 5000.0) {
        reajuste = 1.2;
    } else if(salarioAntigo > 5000.0) {
        reajuste = 1.1;
    }

    salarioNovo = salarioAntigo * reajuste;

    printf("\nNome..........: %s\n", nome);
    printf("Cargo.........: %s\n", cargo);
    printf("Salário antigo: R$ %.2f\n", salarioAntigo);
    printf("Salário novo..: R$ %.2f\n", salarioNovo);

    return 0;
}
