/*
11 � Elaborar um algoritmo que receba dois n�meros e execute as opera��es listadas a seguir, de
acordo com a escolha do usu�rio. Se a op��o digitada for inv�lida, mostre uma mensagem de erro.
Lembre-se de que, na opera��o 4, o segundo n�mero deve ser diferente de zero.
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

    printf("\nOp��es\n\n");
    printf("1 - M�dia entre os n�meros digitados\n");
    printf("2 - Diferen�a do maior pelo menor\n");
    printf("3 - Produto entre os n�meros digitados\n");
    printf("4 - Divis�o do primeiro pelo segundo\n");

    printf("\nInforme a op��o desejada: ");
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
            printf("\nDivis�o por zero inv�lida!!!\n");
            resultado = 0;
        }
        break;
    }

    if(opcao >= 1 && opcao <= 4) {
        printf("\nResultado: %f\n", resultado);
    } else {
        printf("\nOp��o inv�lida!!!\n");
    }

    return 0;
}
