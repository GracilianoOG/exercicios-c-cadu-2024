/*
Elaborar um programa em C que leia um vetor com dez números
inteiros, calcule e mostre a quantidade de números negativos e de zeros
e a soma dos números positivos desse vetor.
*/

#include <stdio.h>

#define TAM 10

int main()
{
    int vet[TAM];
    int qtdNegativos = 0, qtdZeros = 0, somaPositivos = 0;

    for(int i = 0; i < TAM; i++) {
        printf("Informe o %d* valor: ", i + 1);
        scanf("%d", &vet[i]);

        int valorAtual = vet[i];

        if(valorAtual < 0) {
            qtdNegativos++;
        } else if(valorAtual == 0) {
            qtdZeros++;
        } else {
            somaPositivos += valorAtual;
        }
    }

    printf("Soma positivos......: %d\n", somaPositivos);
    printf("Quantidade zeros....: %d\n", qtdZeros);
    printf("Quantidade negativos: %d\n", qtdNegativos);

    return 0;
}