/*
5 – Elaborar um algoritmo que leia números inteiros maiores ou iguais a zero e menores ou iguais a 10.
Deve ser feita a proteção de dados no código. Calcule e imprima:

• A quantidade de números digitados;
• A média dos números pares;
• O menor número digitado;
• O maior número digitado.

Obs: Finalizar a entrada de dados digitando o número –1 (flag) e utilizar o comando while para a leitura
de dados e o comando do … while para a proteção de dados. Se nenhum número par for digitado, deve-se
contornar o erro encaminhando uma mensagem ao usuário (“Nenhum número par foi digitado!“).
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
    printf("Média dos valores pares........: %.1f\n", mediaPares);
    printf("Menor número encontrado........: %d\n", menorNum);
    printf("Maior número encontrado........: %d\n", maiorNum);

    return 0;
}
