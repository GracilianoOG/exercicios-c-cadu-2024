/*
6 – Elaborar um algoritmo Menu de Opções, que para cada uma das opções lidas abaixo, imprima as
seguintes mensagens:

            Opções Mensagem
1 Executa a rotina de inclusão de alunos
2 Executa a rotina de alteração de alunos
3 Executa a rotina de exclusão de alunos
4 Executa a rotina de consulta de alunos
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int opcao;

    printf("\n\t\tMenu de Opções\n\n");
    printf("1 - Executa a rotina de inclusão de alunos\n");
    printf("2 - Executa a rotina de alteração de alunos\n");
    printf("3 - Executa a rotina de exclusão de alunos\n");
    printf("4 - Executa a rotina de consulta de alunos\n");

    printf("\nDigite a opção desejada: ");
    scanf("%d", &opcao);

    switch(opcao) {
    case 1:
        printf("\nInclusão de alunos...\n");
        break;
    case 2:
        printf("\nAlteração de alunos...\n");
        break;
    case 3:
        printf("\nExclusão de alunos...\n");
        break;
    case 4:
        printf("\nConsulta de alunos...\n");
        break;
    default:
        printf("\nOpção inválida!\n");
    }

    return 0;
}
