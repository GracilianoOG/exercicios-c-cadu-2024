/*
1 � Elaborar um algoritmo para ler cinco valores reais, calcular e imprimir os n�meros lidos e a m�dia
desses valores.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float num1, num2, num3, num4, num5, media;

    printf("Informe o primeiro n�mero: ");
    scanf("%f", &num1);

    printf("Informe o segundo n�mero: ");
    scanf("%f", &num2);

    printf("Informe o terceiro n�mero: ");
    scanf("%f", &num3);

    printf("Informe o quarto n�mero: ");
    scanf("%f", &num4);

    printf("Informe o quinto n�mero: ");
    scanf("%f", &num5);

    media = (num1 + num2 + num3 + num4 + num5) / 5;
    printf("M�dia: %.2f", media);

    return 0;
}
