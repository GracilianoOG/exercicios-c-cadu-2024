/*
Elaborar um programa em C que leia um conjunto de 10 notas
armazenadas em um vetor e imprima todas as notas maiores que a
mé dia do conjunto.
*/

#include <stdio.h>

#define TAM 10

int main()
{
    float notas[TAM];
    float soma = 0, media;

    for(int i = 0; i < TAM; i++) {
        printf("Informe a %d° nota: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / TAM;

    printf("\nMédia: %.2f\n", media);

    for(int i = 0; i < TAM; i++) {
        if(notas[i] > media) {
            printf("\nNota n° %d: %.2f", i + 1, notas[i]);
        }
    }

    return 0;
}