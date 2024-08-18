/*
7 – O cardápio de uma Casa de Sucos é dado abaixo. Elaborar um algoritmo para ler o código do
suco comprado, a quantidade de suco comprada e calcular a conta final.

Código do Suco          Sucos                   Preço

1                       Uva ................... R$ 1,50
2                       Morango ............... R$ 2,00
3                       Limão ................. R$ 1,50
4                       Maracujá .............. R$ 1,00
5                       Abacaxi ............... R$ 1,00
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int codSuco, quantidade;
    float precoSuco, contaFinal;

    printf("\nOpção\t\tSucos\t\tPreço\n\n");
    printf("1\t\tUva\t\tR$ 1,50\n");
    printf("2\t\tMorango\t\tR$ 2,00\n");
    printf("3\t\tLimão\t\tR$ 1,50\n");
    printf("4\t\tLaranja\t\tR$ 1,00\n");
    printf("5\t\tAbacaxi\t\tR$ 1,00\n");

    printf("\nInforme o código do suco: ");
    scanf("%d", &codSuco);

    switch(codSuco) {
    case 1:
        precoSuco = 1.5;
        break;
    case 2:
        precoSuco = 2.0;
        break;
    case 3:
        precoSuco = 1.5;
        break;
    case 4:
        precoSuco = 1.0;
        break;
    case 5:
        precoSuco = 1.0;
        break;
    default:
        precoSuco = 0.0;
    }

    if(precoSuco > 0.0) {
        printf("Informe a quantidade desejada: ");
        scanf("%d", &quantidade);

        contaFinal = precoSuco * quantidade;
        printf("\nConta final: R$ %.2f\n", contaFinal);
    } else {
        printf("\nOpção inválida!\n");
    }

    return 0;
}
