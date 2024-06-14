/*
8 – Para auxiliar os vendedores de uma loja na orientação aos clientes sobre as diversas formas de
pagamento, elaborar um algoritmo para:

a – Imprimir o menu abaixo.

Formas de Pagamento
1 . A vista
2. Cheque para trinta dias
3. Em duas vezes
4. Em três vezes
5. Em quatro vezes
6. A partir de cinco vezes

b – Ler o código da opção de pagamento.

c – Imprimir uma das mensagens de acordo com opção lida:

Opção = 1: Desconto de 20%
Opção = 2,3 ou 4: Mesmo preço a vista
Opção = 5: Juros de 3% ao mês
Opção = 6: Juros de 5% ao mês

Se a opção for menor do que 1 ou maior do que 6: Opção inválida
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int opcao;

    printf("\nFormas de Pagamento\n");
    printf("\n1 - À vista");
    printf("\n2 - Cheque para trinta dias");
    printf("\n3 - Em duas vezes");
    printf("\n4 - Em três vezes");
    printf("\n5 - Em quatro vezes");
    printf("\n6 - A partir de cinco vezes\n");

    printf("\nInforme a opção de pagamento: ");
    scanf("%d", &opcao);

    switch(opcao) {
    case 1:
        printf("\nDesconto de 20%%\n");
        break;
    case 2:
    case 3:
    case 4:
        printf("\nMesmo preço a vista\n");
        break;
    case 5:
        printf("\nJuros de 3%% ao mês\n");
        break;
    case 6:
        printf("\nJuros de 5%% ao mês\n");
        break;
    default:
        printf("\nOpção inválida!\n");
    }

    return 0;
}
