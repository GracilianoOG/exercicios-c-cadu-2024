/*
14 � Elaborar um algoritmo em VisuAlg para ler os coeficientes A, B e C de uma equa��o do
segundo grau levando-se em considera��o os seguintes crit�rios:

� Se delta for negativo: imprimir a mensagem �N�o h� solu��o real.�;
� Se delta for igual a zero: imprimir a mensagem �Duas ra�zes reais iguais.� e calcular e
imprimir a raiz da equa��o;
� Se delta for maior do que zero: imprimir a mensagem �Duas ra�zes reais diferentes.� e
calcular e imprimir as ra�zes da equa��o.
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

    // C�lculos
    delta = pow(b, 2) - 4 * a * c;

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    // Sa�das
    if(delta >= 0) {
        if(delta == 0) {
            printf("\nDuas ra�zes reais iguais.\n");
        } else {
            printf("\nDuas ra�zes reais diferentes.\n");
        }

        printf("Raiz x1: %f\n", x1);
        printf("Raiz x2: %f\n", x2);
     } else {
        printf("\nN�o h� solu��o real.\n");
     }

    return 0;
}
