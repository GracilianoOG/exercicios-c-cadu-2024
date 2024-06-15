/*
5 � Elaborar um algoritmo que leia n�meros inteiros maiores ou iguais a zero e menores ou iguais a 10.
Deve ser feita a prote��o de dados no c�digo. Calcule e imprima:

� A quantidade de n�meros digitados;
� A m�dia dos n�meros pares;
� O menor n�mero digitado;
� O maior n�mero digitado.

Obs: Finalizar a entrada de dados digitando o n�mero �1 (flag) e utilizar o comando while para a leitura
de dados e o comando do � while para a prote��o de dados. Se nenhum n�mero par for digitado, deve-se
contornar o erro encaminhando uma mensagem ao usu�rio (�Nenhum n�mero par foi digitado!�).
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    int num = 0, qtdNum = 0, menorNum = 11, maiorNum = -1, somaPares = 0, qtdPares = 0;
    float mediaPares;

    setlocale(LC_ALL, "");

    while(1) {
        do {
            printf("Informe um valor inteiro positivo: ");
            scanf("%d", &num);
            qtdNum++;
        } while((num < 0 && num != -1) || num > 10);

        if(num == -1) {
            break;
        }

        if(num % 2 == 0) {
            somaPares += num;
            qtdPares++;
        }

        if(num > maiorNum) {
            maiorNum = num;
        }

        if(num < menorNum) {
            menorNum = num;
        }
    }

    mediaPares = (float) somaPares / qtdPares;

    printf("\nQuantidade de valores digitados: %d\n", qtdNum);
    printf("M�dia dos valores pares........: %.1f\n", mediaPares);
    printf("Menor n�mero encontrado........: %d\n", menorNum);
    printf("Maior n�mero encontrado........: %d\n", maiorNum);

    return 0;
}
