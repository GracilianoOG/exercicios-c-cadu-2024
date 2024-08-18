/*
10 – Elaborar um algoritmo que receba o preço de um produto, calcule e mostre, de acordo com as
tabelas abaixo, o novo preço e a classificação.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float preco, percAumento;

    printf("Informe o preço do produto: ");
    scanf("%f", &preco);

    // Percentual de aumento
    if(preco <= 50.0) {
        percAumento = 1.05;
    } else if(preco <= 100.0) {
        percAumento = 1.1;
    } else if(preco > 100.0) {
        percAumento = 1.15;
    }

    // Novo preço
    preco *= percAumento;
    printf("\nNovo preço: R$ %.2f - ", preco);

    // Classificação
    if(preco <= 80.0) {
        printf("Barato\n");
    } else if(preco <= 120.0) {
        printf("Normal\n");
    } else if(preco <= 200.0) {
        printf("Caro\n");
    } else if(preco > 200.0) {
        printf("Muito Caro\n");
    }

    return 0;
}
