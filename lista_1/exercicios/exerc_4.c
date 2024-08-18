/*
4 � Elaborar um algoritmo para ler o valor do raio e calcular a �rea e volume de uma esfera. O c�lculo
da �rea de uma esfera � dado pela f�rmula: A = 4 x Pi x R2. O c�lculo do volume de uma esfera � dado
pela f�rmula: V = 4/3 x Pi x R3.
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

    printf("\n�rea da esfera..: %.3f\n", area);
    printf("Volume da esfera: %.3f\n", volume);

    return 0;
}
