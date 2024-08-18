/*
2 – Elaborar um algoritmo para calcular e imprimir a expressão X = (A+B)/(A-B), sabendo-se que A e B
são números reais lidos do teclado.
*/

#include <stdio.h>

int main()
{
    float a, b, x;

    printf("Informe o valor de A: ");
    scanf("%f", &a);

    printf("Informe o valor de B: ");
    scanf("%f", &b);

    x = (a + b) / (a - b);

    printf("Resultado: %.2f", x);

    return 0;
}
