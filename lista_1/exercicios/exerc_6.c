/*
6 – Elaborar um algoritmo para ler o saldo de uma aplicação e imprimir o saldo anterior, valor do
reajuste e o novo saldo, considerando que o reajuste foi de 5%.
*/

#include <stdio.h>

int main()
{
    float saldoAplicado, valorReajuste, novoSaldo;

    printf("Informe o saldo atual: ");
    scanf("%f", &saldoAplicado);

    valorReajuste = saldoAplicado * 0.05;
    novoSaldo = saldoAplicado + valorReajuste;

    printf("\nSaldo anterior...: R$ %.2f\n", saldoAplicado);
    printf("Valor de reajuste: R$ %.2f\n", valorReajuste);
    printf("Novo saldo.......: R$ %.2f\n", novoSaldo);

    return 0;
}
