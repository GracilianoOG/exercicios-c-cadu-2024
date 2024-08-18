/*
9 � Elaborar um algoritmo que fa�a a tabuada de um n�mero inteiro digitado pelo usu�rio, mas a tabuada
n�o necessariamente deve iniciar em 1 e terminar em 10. Os valores inicial e final devem ser informados
pelo usu�rio, conforme exemplo abaixo. Deve-se fazer a prote��o de dados para que o usu�rio n�o digite
um valor final menor do que o valor inicial.

Montar a tabuada do n�mero: 5
Come�a em: 4
Temina em: 7

Tabuada do n�mero 5 come�ando em 4 e terminando em 7

5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35

Obs: Utilizar o comando de repeti��o for.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    int numInicio, numFim, numTabuada, resultado;

    setlocale(LC_ALL, "");

    printf("Montar a tabuada do n�mero: ");
    scanf("%d", &numTabuada);

    printf("Come�a em: ");
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
