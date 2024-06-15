/*
1 – Elaborar um algoritmo para ler 10 números positivos e imprimir a raiz quadrada de cada número.
Para cada entrada de dados, deverá haver um trecho de proteção para que um número negativo não seja
aceito. Obs: Utilizar o comando for (leitura dos 10 números positivos) e do … while (trecho de proteção).
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    int num;

    setlocale(LC_ALL, "");

    for(int i = 0; i < 10; i++) {
        do {
            printf("\nInforme um valor positivo inteiro: ");
            scanf("%d", &num);
        } while(num < 0);

        printf("Raiz do %d° número: %.1f\n", i + 1, sqrt(num));
    }

    return 0;
}
