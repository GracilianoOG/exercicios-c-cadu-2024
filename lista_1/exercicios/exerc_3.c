/*
3 � Elaborar um algoritmo para calcular a �rea de um trap�zio. F�rmula da �rea do Trap�zio:
A = ((BMA + BME)*H)/2, onde BMA � a base maior do trap�zio, BME � a base menor do trap�zio e H �
a altura do trap�zio.
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

    printf("�rea do trap�zio: %.1f", area);

    return 0;
}
