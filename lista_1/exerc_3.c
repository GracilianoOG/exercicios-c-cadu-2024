/*
3 – Elaborar um algoritmo para calcular a área de um trapézio. Fórmula da Área do Trapézio:
A = ((BMA + BME)*H)/2, onde BMA é a base maior do trapézio, BME é a base menor do trapézio e H é
a altura do trapézio.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float area, baseMaior, baseMenor, altura;

    printf("Informe a base maior: ");
    scanf("%f", &baseMaior);

    printf("Informe a base menor: ");
    scanf("%f", &baseMenor);

    printf("Informe a altura....: ");
    scanf("%f", &altura);

    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("Área do trapézio: %.1f", area);

    return 0;
}
