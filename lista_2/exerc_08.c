/*
8 � Para auxiliar os vendedores de uma loja na orienta��o aos clientes sobre as diversas formas de
pagamento, elaborar um algoritmo para:

a � Imprimir o menu abaixo.

Formas de Pagamento
1 . A vista
2. Cheque para trinta dias
3. Em duas vezes
4. Em tr�s vezes
5. Em quatro vezes
6. A partir de cinco vezes

b � Ler o c�digo da op��o de pagamento.

c � Imprimir uma das mensagens de acordo com op��o lida:

Op��o = 1: Desconto de 20%
Op��o = 2,3 ou 4: Mesmo pre�o a vista
Op��o = 5: Juros de 3% ao m�s
Op��o = 6: Juros de 5% ao m�s

Se a op��o for menor do que 1 ou maior do que 6: Op��o inv�lida
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int opcao;

    printf("\nFormas de Pagamento\n");
    printf("\n1 - � vista");
    printf("\n2 - Cheque para trinta dias");
    printf("\n3 - Em duas vezes");
    printf("\n4 - Em tr�s vezes");
    printf("\n5 - Em quatro vezes");
    printf("\n6 - A partir de cinco vezes\n");

    printf("\nInforme a op��o de pagamento: ");
    scanf("%d", &opcao);

    switch(opcao) {
    case 1:
        printf("\nDesconto de 20%%\n");
        break;
    case 2:
    case 3:
    case 4:
        printf("\nMesmo pre�o a vista\n");
        break;
    case 5:
        printf("\nJuros de 3%% ao m�s\n");
        break;
    case 6:
        printf("\nJuros de 5%% ao m�s\n");
        break;
    default:
        printf("\nOp��o inv�lida!\n");
    }

    return 0;
}
