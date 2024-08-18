/*
9 – O preço, ao consumidor, de um carro novo é a soma do custo de fábrica com a porcentagem do
distribuidor e com os impostos, ambos aplicados ao custo de fábrica, de acordo com as
porcentagens encontradas na tabela abaixo. Elaborar um algoritmo que receba o custo de fábrica
de um carro e mostre o preço ao consumidor.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float custoFabrica, valorFinal, totImposto;

    printf("Informe o custo de fábrica: ");
    scanf("%f", &custoFabrica);

    if(custoFabrica <= 12000.0) {
        totImposto = 1.05;
    } else if(custoFabrica <= 25000.0) {
        totImposto = 1.25;
    } else if(custoFabrica > 25000.0) {
        totImposto = 1.35;
    }

    valorFinal += custoFabrica * totImposto;

    printf("\nPreço: R$ %.2f\n", valorFinal);

    return 0;
}
