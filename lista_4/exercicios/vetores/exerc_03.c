/*
Elaborar um programa em C que leia um vetor com 10 números reais e
obtenha o maior e o menor valor armazenado nele, bem como suas
posições.
*/

#include <stdio.h>

#define TAM 10

int main()
{
    float vet[TAM];
    float maiorValor, menorValor;
    int maiorPos, menorPos;

    for(int i = 0; i < TAM; i++)
    {
        printf("Informe o %d* valor: ", i + 1);
        scanf("%f", &vet[i]);
    }
    
    maiorValor = vet[0];
    menorValor = vet[0];
    maiorPos = 0;
    menorPos = 0;

    for(int i = 1; i < TAM; i++) {
        if(vet[i] > maiorValor) {
            maiorValor = vet[i];
            maiorPos = i;
        }

        if(vet[i] < menorValor) {
            menorValor = vet[i];
            menorPos = i;
        }
    }

    printf("Maior valor %f na posição %d\n", maiorValor, maiorPos);
    printf("Menor valor %f na posição %d\n", menorValor, menorPos);

    return 0;
}