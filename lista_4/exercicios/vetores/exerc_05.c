/*
Elaborar um programa em C para ler um vetor de 7 elementos,
contendo valores numéricos reais. Em seguida, verificar se existem
elementos iguais a 10 armazenados nele e mostrar as posições (linha)
onde estão esses elementos.
*/

#include <stdio.h>

#define TAM 7
#define MAX 10.0

int main()
{
    float vet[TAM];

    for(int i = 0; i < TAM; i++)
    {
        printf("Informe o %d° valor: ", i + 1);
        scanf("%f", &vet[i]);
    }
    
    for(int i = 0; i < TAM; i++)
    {
        if(vet[i] == MAX) {
            printf("Posição %d\n", i);
        }
    }
    
    return 0;
}