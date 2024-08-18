/*
7 – Elaborar um algoritmo para ler o valor de um produto e imprimir esse valor, o valor do desconto e
um novo valor, tendo em vista que o desconto foi de 9%.
*/

#include <stdio.h>

int main()
{
    float valorProduto, descontoAplicado = 0.09, valorComDesconto, valorDescontado;

    printf("Informe o valor do produto: ");
    scanf("%f", &valorProduto);

    valorDescontado = valorProduto * descontoAplicado;
    valorComDesconto = valorProduto - valorDescontado;

    printf("\nValor do produto..: %.2f\n", valorProduto);
    printf("Valor descontado..: R$ %.2f\n", valorDescontado);
    printf("Valor com desconto: R$ %.2f\n", valorComDesconto);

    return 0;
}
