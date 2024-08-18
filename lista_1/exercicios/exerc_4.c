/*
4 – Elaborar um algoritmo para ler o valor do raio e calcular a área e volume de uma esfera. O cálculo
da área de uma esfera é dado pela fórmula: A = 4 x Pi x R2. O cálculo do volume de uma esfera é dado
pela fórmula: V = 4/3 x Pi x R3.
*/

#include <stdio.h>
#include <locale.h>

#define PI 3.14159

int main()
{
    setlocale(LC_ALL, "");

    float raio, area, volume;

    printf("Informe o raio da esfera: ");
    scanf("%f", &raio);

    area = 4.0 * PI * raio * raio;
    volume = 4.0 / 3 * PI * raio * raio * raio;

    printf("\nÁrea da esfera..: %.3f\n", area);
    printf("Volume da esfera: %.3f\n", volume);

    return 0;
}
