/*
9 – Elaborar um algoritmo que faça a tabuada de um número inteiro digitado pelo usuário, mas a tabuada
não necessariamente deve iniciar em 1 e terminar em 10. Os valores inicial e final devem ser informados
pelo usuário, conforme exemplo abaixo. Deve-se fazer a proteção de dados para que o usuário não digite
um valor final menor do que o valor inicial.

Montar a tabuada do número: 5
Começa em: 4
Temina em: 7

Tabuada do número 5 começando em 4 e terminando em 7

5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35

Obs: Utilizar o comando de repetição for.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    int numInicio, numFim, numTabuada, resultado;

    setlocale(LC_ALL, "");

    printf("Montar a tabuada do número: ");
    scanf("%d", &numTabuada);

    printf("Começa em: ");
    scanf("%d", &numInicio);

    do {
        printf("Termina em: ");
        scanf("%d", &numFim);
    } while(numFim < numInicio);

    printf("\n");

    for(int i = numInicio; i <= numFim; i++) {
        resultado = numTabuada * i;
        printf("%d x %d = %d\n", numTabuada, i, resultado);
    }

    return 0;
}
