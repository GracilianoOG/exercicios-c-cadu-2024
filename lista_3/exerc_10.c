/*
10 – A série de Fetuccine é gerada da seguinte forma: os dois primeiros termos são números inteiros
fornecidos pelo usuário; a partir daí, os termos seguintes são gerados com a soma ou subtração dos dois
termos anteriores, ou seja:

Ai = Ai-1 + Ai-2 para i ímpar
Ai = Ai-1 – Ai-2 para i par

Elaborar um algoritmo para imprimir os 20 primeiros termos da série de Fetuccine.

Exemplo: Se os dois primeiros termos digitados forem 2 e 4, os 20 primeiros termos da série de Fetuccine
serão: 2, 4, 6, 2, 8, 6, 14, 8, 22, 14, 36, 22, 58, 36, 94, 58, 152, 94, 246, 152

Obs: Utilizar o comando de repetição for.
*/

#include <stdio.h>

int main()
{
    int termo1, termo2, proxTermo;

    printf("Digite o primeiro termo: ");
    scanf("%d", &termo1);

    printf("Digite o segundo termo: ");
    scanf("%d", &termo2);

    printf("\n");

    printf("%d, %d,", termo1, termo2);

    for(int i = 3; i <= 20; i++) {
        if(i % 2 == 0) {
            proxTermo = termo2 - termo1;
        } else {
            proxTermo = termo2 + termo1;
        }

        printf(" %d,", proxTermo);

        termo1 = termo2;
        termo2 = proxTermo;
    }

    printf("\n");

    return 0;
}
