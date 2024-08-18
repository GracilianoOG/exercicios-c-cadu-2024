/*
Dada uma matriz 4x4 de valores reais e positivos, elaborar
um programa em C para somar os valores de sua diagonal
principal e mostrar o resultado da soma no final.
*/

#include <stdio.h>

#define TAM 4

int main()
{
    float vet[TAM][TAM];
    float somaDiagonais = 0;

    // Preenchimento da matriz
    for(int i = 0; i < TAM; i++) {
        printf("=== Valores da %d° linha ===\n", i + 1);
        for(int j = 0; j < TAM; j++) {
            printf("Informe o %d° valor: ", j + 1);
            scanf("%f", &vet[i][j]);
        }
        printf("\n");
    }

    // Imprime a matriz
    for(int i = 0; i < TAM; i++)
    {
        for(int j = 0; j < TAM; j++) {
            printf("%f\t", vet[i][j]);
        }
        printf("\n");
    }
    
    // Soma das diagonais
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++)
        {
            if(i == j) {
                somaDiagonais += vet[i][j];
            }
        }
        
    }

    printf("\nSoma das diagonais principais: %f", somaDiagonais);

    return 0;
}