/*
4 – Elaborar um algoritmo para ler o número de termos da série (N) e imprimir o valor da série abaixo.
Obs: Utilizar o comando for.

s = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Informe a quantidade de termos: ");
    scanf("%d", &n);

    printf("\n");

    for(int i = 1; i <= n; i++) {
        printf("1/%d -> %f\n", i, (float) 1 / i);
    }

    return 0;
}
