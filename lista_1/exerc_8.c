/*
8 � Sabe-se que, para iluminar de maneira correta os c�modos de uma casa, para cada m2, deve-se
usar 18W de pot�ncia. Elaborar um algoritmo que receba as duas dimens�es de um c�modo (em
metros), calcule e mostre a sua �rea (em m2) e a pot�ncia de ilumina��o que dever� ser utilizada.
*/

#include <stdio.h>
#include <locale.h>

#define POTENCIA 18

int main()
{
    setlocale(LC_ALL, "");

    float m1, m2, area;

    printf("Informe a primeira dimens�o em metros quadrados: ");
    scanf("%f", &m1);

    printf("Informe a segunda dimens�o em metros quadrados: ");
    scanf("%f", &m2);

    area = m1 * m2;

    printf("�rea da casa......: %.1f Metros Quadrados\n", area);
    printf("Pot�ncia utilizada: %.1f Watts\n", area * POTENCIA);

    return 0;
}
