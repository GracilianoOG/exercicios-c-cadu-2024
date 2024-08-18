/*
5 – Elaborar um algoritmo que leia três números diferentes, coloque-os em ordem crescente e
imprima-os nesta ordem.
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, aux;

    printf("Insira o primeiro valor: ");
    scanf("%d", &num1);

    printf("Insira o segundo valor: ");
    scanf("%d", &num2);

    printf("Insira o terceiro valor: ");
    scanf("%d", &num3);

    if(num1 > num2) {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    if(num2 > num3) {
        aux = num2;
        num2 = num3;
        num3 = aux;
    }

    if(num1 > num2) {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    printf("\nValores em ordem crescente: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
