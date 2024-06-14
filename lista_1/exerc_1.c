/*
1 – Elaborar um algoritmo para ler cinco valores reais, calcular e imprimir os números lidos e a média
desses valores.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float num1, num2, num3, num4, num5, media;

    printf("Informe o primeiro número: ");
    scanf("%f", &num1);

    printf("Informe o segundo número: ");
    scanf("%f", &num2);

    printf("Informe o terceiro número: ");
    scanf("%f", &num3);

    printf("Informe o quarto número: ");
    scanf("%f", &num4);

    printf("Informe o quinto número: ");
    scanf("%f", &num5);

    media = (num1 + num2 + num3 + num4 + num5) / 5;
    printf("Média: %.2f", media);

    return 0;
}
