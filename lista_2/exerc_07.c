/*
7 � O card�pio de uma Casa de Sucos � dado abaixo. Elaborar um algoritmo para ler o c�digo do
suco comprado, a quantidade de suco comprada e calcular a conta final.

C�digo do Suco          Sucos                   Pre�o

1                       Uva ................... R$ 1,50
2                       Morango ............... R$ 2,00
3                       Lim�o ................. R$ 1,50
4                       Maracuj� .............. R$ 1,00
5                       Abacaxi ............... R$ 1,00
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int codSuco, quantidade;
    float precoSuco, contaFinal;

    printf("\nOp��o\t\tSucos\t\tPre�o\n\n");
    printf("1\t\tUva\t\tR$ 1,50\n");
    printf("2\t\tMorango\t\tR$ 2,00\n");
    printf("3\t\tLim�o\t\tR$ 1,50\n");
    printf("4\t\tLaranja\t\tR$ 1,00\n");
    printf("5\t\tAbacaxi\t\tR$ 1,00\n");

    printf("\nInforme o c�digo do suco: ");
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
        printf("\nOp��o inv�lida!\n");
    }

    return 0;
}
