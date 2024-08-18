/*
Dada uma matriz 4x4 de valores inteiros e positivos,
elaborar um programa em C para calcular e imprimir o
total de números pares e ímpares armazenados nela.
*/

#include <stdio.h>

#define TAM 4

int main()
{
    int vet[TAM][TAM];
    int qtdPares = 0, qtdImpares = 0;

    // Preenchimento da matriz
    for(int i = 0; i < TAM; i++) {
        printf("=== Valores da %d° linha ===\n", i + 1);
        for(int j = 0; j < TAM; j++) {
            printf("Informe o %d° valor: ", j + 1);
            scanf("%d", &vet[i][j]);
        }
        printf("\n");
    }

    // Imprime a matriz
    for(int i = 0; i < TAM; i++)
    {
        for(int j = 0; j < TAM; j++) {
            printf("%d\t", vet[i][j]);
        }
        printf("\n");
    }
    
    // Pares e ímpares
    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++)
        {
            int num = vet[i][j];
            if(num % 2 == 0) {
                qtdPares++;
            } else {
                qtdImpares++;
            }
        }
        
    }

    printf("\nQuantidade de números pares..: %d\n", qtdPares);
    printf("Quantidade de números ímpares: %d\n", qtdImpares);

    return 0;
}