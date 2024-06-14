/*
14 – Elaborar um algoritmo em VisuAlg para ler os coeficientes A, B e C de uma equação do
segundo grau levando-se em consideração os seguintes critérios:

• Se delta for negativo: imprimir a mensagem ”Não há solução real.”;
• Se delta for igual a zero: imprimir a mensagem “Duas raízes reais iguais.” e calcular e
imprimir a raiz da equação;
• Se delta for maior do que zero: imprimir a mensagem “Duas raízes reais diferentes.” e
calcular e imprimir as raízes da equação.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float delta, a, b, c, x1, x2;

    // Entradas
    printf("Informe o coeficiente A: ");
    scanf("%f", &a);

    printf("Informe o coeficiente B: ");
    scanf("%f", &b);

    printf("Informe o coeficiente C: ");
    scanf("%f", &c);

    // Cálculos
    delta = pow(b, 2) - 4 * a * c;

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    // Saídas
    if(delta >= 0) {
        if(delta == 0) {
            printf("\nDuas raízes reais iguais.\n");
        } else {
            printf("\nDuas raízes reais diferentes.\n");
        }

        printf("Raiz x1: %f\n", x1);
        printf("Raiz x2: %f\n", x2);
     } else {
        printf("\nNão há solução real.\n");
     }

    return 0;
}
