/*
9 � O pre�o, ao consumidor, de um carro novo � a soma do custo de f�brica com a porcentagem do
distribuidor e com os impostos, ambos aplicados ao custo de f�brica, de acordo com as
porcentagens encontradas na tabela abaixo. Elaborar um algoritmo que receba o custo de f�brica
de um carro e mostre o pre�o ao consumidor.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float custoFabrica, valorFinal, totImposto;

    printf("Informe o custo de f�brica: ");
    scanf("%f", &custoFabrica);

    if(custoFabrica <= 12000.0) {
        totImposto = 1.05;
    } else if(custoFabrica <= 25000.0) {
        totImposto = 1.25;
    } else if(custoFabrica > 25000.0) {
        totImposto = 1.35;
    }

    valorFinal += custoFabrica * totImposto;

    printf("\nPre�o: R$ %.2f\n", valorFinal);

    return 0;
}
