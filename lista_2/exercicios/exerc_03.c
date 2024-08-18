/*
3 � Elaborar um algoritmo para ler o nome de um funcion�rio, seu cargo e sal�rio e fazer o reajuste
salarial de acordo com os crit�rios apresentados abaixo. Deve-se imprimir o nome, cargo, sal�rio
antigo e novo do funcion�rio.

Sal�rio <= R$ 1.000,00 -> 30% de reajuste
R$ 1.000,00 < Sal�rio <= 5.000,00 -> 20% de reajuste
Sal�rio > R$ 5.000,00 -> 10% de reajuste
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char nome[30], cargo[30];
    float salarioAntigo, salarioNovo, reajuste;

    printf("Informe o nome do funcion�rio: ");
    scanf("%s", nome);

    printf("Informe o cargo do funcion�rio: ");
    scanf("%s", cargo);

    printf("Informe o sal�rio atual: ");
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
    printf("Sal�rio antigo: R$ %.2f\n", salarioAntigo);
    printf("Sal�rio novo..: R$ %.2f\n", salarioNovo);

    return 0;
}
