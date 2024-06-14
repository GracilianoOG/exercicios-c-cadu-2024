/*
2 – Elaborar um algoritmo para calcular o volume de um cilindro, sabendo-se que o raio (R) e a altura
(H) não podem ser números negativos ou zero.

Fórmula do Volume do Cilindro: V = Pi*R2*H
*/

#include <stdio.h>

#define PI 3.14159

int main()
{
    float volume, raio, altura;

    printf("Informe o raio do cilindro: ");
    scanf("%f", &raio);

    printf("Informe a altura do cilindro: ");
    scanf("%f", &altura);

    volume = PI * raio * raio * altura;

    printf("Volume do cilindro: %.3f", volume);

    return 0;
}
