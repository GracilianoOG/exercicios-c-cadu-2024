/*
6 � Elaborar um algoritmo Menu de Op��es, que para cada uma das op��es lidas abaixo, imprima as
seguintes mensagens:

            Op��es Mensagem
1 Executa a rotina de inclus�o de alunos
2 Executa a rotina de altera��o de alunos
3 Executa a rotina de exclus�o de alunos
4 Executa a rotina de consulta de alunos
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int opcao;

    printf("\n\t\tMenu de Op��es\n\n");
    printf("1 - Executa a rotina de inclus�o de alunos\n");
    printf("2 - Executa a rotina de altera��o de alunos\n");
    printf("3 - Executa a rotina de exclus�o de alunos\n");
    printf("4 - Executa a rotina de consulta de alunos\n");

    printf("\nDigite a op��o desejada: ");
    scanf("%d", &opcao);

    switch(opcao) {
    case 1:
        printf("\nInclus�o de alunos...\n");
        break;
    case 2:
        printf("\nAltera��o de alunos...\n");
        break;
    case 3:
        printf("\nExclus�o de alunos...\n");
        break;
    case 4:
        printf("\nConsulta de alunos...\n");
        break;
    default:
        printf("\nOp��o inv�lida!\n");
    }

    return 0;
}
