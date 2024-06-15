/*
3 – Elaborar um algoritmo para calcular e imprimir a seguinte série abaixo. Obs: Utilizar o comando for.

s = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
*/

#include <stdio.h>

int main()
{
    for(int i = 1, j = 1; i <= 50; i++, j += 2) {
        float calc = (float) j / i;
        printf("%2d/%2d -> %f\n", j, i, calc);
    }
    return 0;
}
