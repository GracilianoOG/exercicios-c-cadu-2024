/*
10 � Elaborar um algoritmo para ler as vari�veis A e B e efetuar a troca dos valores de forma que a
vari�vel A passe a ter o valor da vari�vel B e que a vari�vel B passe a ter o valor da vari�vel A.
Apresentar os valores trocados.
*/

#include <stdio.h>

int main()
{
    int a, b, aux;

    printf("Informe um valor para A: ");
    scanf("%d", &a);

    printf("Informe um valor para B: ");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("\nValor de A: %d\n", a);
    printf("Valor de B: %d\n", b);

    return 0;
}
