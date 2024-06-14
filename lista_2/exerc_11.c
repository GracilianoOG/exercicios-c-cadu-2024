/*
11 – Elaborar um algoritmo que receba dois números e execute as operações listadas a seguir, de
acordo com a escolha do usuário. Se a opção digitada for inválida, mostre uma mensagem de erro.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float num1, num2, resultado;
    int opcao;

    printf("Informe o primeiro valor: ");
    scanf("%f", &num1);

    printf("Informe o segundo valor: ");
    scanf("%f", &num2);

    printf("\nOpções\n\n");
    printf("1 - Média entre os números digitados\n");
    printf("2 - Diferença do maior pelo menor\n");
    printf("3 - Produto entre os números digitados\n");
    printf("4 - Divisão do primeiro pelo segundo\n");

    printf("\nInforme a opção desejada: ");
    scanf("%d", &opcao);

    switch(opcao) {
    case 1:
        resultado = (num1 + num2) / 2;
        break;
    case 2:
        resultado = num1 >= num2 ? num1 - num2 : num2 - num1;
        break;
    case 3:
        resultado = num1 * num2;
        break;
    case 4:
        if(num2 != 0) {
            resultado = num1 / num2;
        } else {
            printf("\nDivisão por zero inválida!!!\n");
            resultado = 0;
        }
        break;
    }

    if(opcao >= 1 && opcao <= 4) {
        printf("\nResultado: %f\n", resultado);
    } else {
        printf("\nOpção inválida!!!\n");
    }

    return 0;
}
