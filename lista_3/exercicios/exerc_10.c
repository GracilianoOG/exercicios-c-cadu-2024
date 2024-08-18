/*
10 � A s�rie de Fetuccine � gerada da seguinte forma: os dois primeiros termos s�o n�meros inteiros
fornecidos pelo usu�rio; a partir da�, os termos seguintes s�o gerados com a soma ou subtra��o dos dois
termos anteriores, ou seja:

Ai = Ai-1 + Ai-2 para i �mpar
Ai = Ai-1 � Ai-2 para i par

Elaborar um algoritmo para imprimir os 20 primeiros termos da s�rie de Fetuccine.

Exemplo: Se os dois primeiros termos digitados forem 2 e 4, os 20 primeiros termos da s�rie de Fetuccine
ser�o: 2, 4, 6, 2, 8, 6, 14, 8, 22, 14, 36, 22, 58, 36, 94, 58, 152, 94, 246, 152

Obs: Utilizar o comando de repeti��o for.
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
