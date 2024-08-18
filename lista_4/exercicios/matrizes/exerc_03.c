/*
Elaborar um programa em C que leia uma matriz 4x4 com
números inteiros, calcule e mostre a soma:
– Dos elementos da linha 4;
– Dos elementos da coluna 2;
– Dos elementos da diagonal secundária;
– De todos os elementos da matriz.
*/

#include <stdio.h>

#define TAM 4

int main()
{
    int vet[TAM][TAM];
    int somaLinha4 = 0, somaColuna2 = 0, somaDiagonalSecundaria = 0, somaMatriz = 0;

    // Preenchimento da matriz
    for(int i = 0; i < TAM; i++) {
        printf("=== Valores da %d° linha ===\n", i + 1);
        for(int j = 0; j < TAM; j++) {
            printf("Informe o %d° valor: ", j + 1);
            scanf("%d", &vet[i][j]);
            int num = vet[i][j];

            // Soma da matriz
            somaMatriz += num;

            // Dos elementos da linha 4
            if(i == 3) {
                somaLinha4 += num;
            }

            // Dos elementos da coluna 2
            if(j == 1) {
                somaColuna2 += num;
            }
        }

        somaDiagonalSecundaria += vet[i][(TAM - 1) - i];

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

    printf("\nSoma da linha quatro......: %d\n", somaLinha4);
    printf("Soma da coluna dois........: %d\n", somaColuna2);
    printf("Soma da diagonal secundária: %d\n", somaDiagonalSecundaria);
    printf("Soma da matriz toda........: %d\n", somaMatriz);

    return 0;
}