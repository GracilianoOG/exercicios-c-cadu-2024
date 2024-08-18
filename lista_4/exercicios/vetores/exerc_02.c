/*
Elaborar um programa em C que leia um vetor com 10 números inteiros
e multiplique todos os elementos pelo maior valor do vetor. Imprimir o
vetor antigo, o maior valor e o vetor novo.
*/

#include <stdio.h>

#define TAM 10

int main()
{
    int vet[TAM];
    int novoVet[TAM];
    int maiorValor;

    // Alimenta o vetor
    for(int i = 0; i < TAM; i++) {
        printf("Informe o *%d valor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    maiorValor = vet[0];

    // Calcula o maior valor
    for(int i = 1; i < TAM; i++)
    {
        if(maiorValor < vet[i]) {
            maiorValor = vet[i];
        }
    }
    
    // Multiplica vetor pelo maior valor
    printf("\n");
    
    for(int i = 0; i < TAM; i++)
    {
        novoVet[i] = vet[i] * maiorValor;
    }
    
    // Imprime valores
    for(int i = 0; i < TAM; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\n");

    for(int i = 0; i < TAM; i++)
    {
        printf("%d ", novoVet[i]);
    }

    printf("\n");

    printf("Maior valor: %d\n", maiorValor);

    return 0;
}