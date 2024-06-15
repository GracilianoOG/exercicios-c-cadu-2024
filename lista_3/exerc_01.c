/*
1 � Elaborar um algoritmo para ler 10 n�meros positivos e imprimir a raiz quadrada de cada n�mero.
Para cada entrada de dados, dever� haver um trecho de prote��o para que um n�mero negativo n�o seja
aceito. Obs: Utilizar o comando for (leitura dos 10 n�meros positivos) e do � while (trecho de prote��o).
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    int num;

    setlocale(LC_ALL, "");

    for(int i = 0; i < 10; i++) {
        do {
            printf("\nInforme um valor positivo inteiro: ");
            scanf("%d", &num);
        } while(num < 0);

        printf("Raiz do %d� n�mero: %.1f\n", i + 1, sqrt(num));
    }

    return 0;
}
