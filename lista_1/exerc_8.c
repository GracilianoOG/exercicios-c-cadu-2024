/*
8 – Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se
usar 18W de potência. Elaborar um algoritmo que receba as duas dimensões de um cômodo (em
metros), calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser utilizada.
*/

#include <stdio.h>
#include <locale.h>

#define POTENCIA 18

int main()
{
    setlocale(LC_ALL, "");

    float m1, m2, area;

    printf("Informe a primeira dimensão em metros quadrados: ");
    scanf("%f", &m1);

    printf("Informe a segunda dimensão em metros quadrados: ");
    scanf("%f", &m2);

    area = m1 * m2;

    printf("Área da casa......: %.1f Metros Quadrados\n", area);
    printf("Potência utilizada: %.1f Watts\n", area * POTENCIA);

    return 0;
}
