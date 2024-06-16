/*
11 – Seja a seguinte característica do número 3025: 30 + 25 = 55 e 552 = 3025. Elaborar um algoritmo
que possa ler vários números inteiros de 4 algarismos, um de cada vez e diga se o número apresenta a
mesma característica. O algoritmo termina quando for lido um valor menor do que 1000 ou maior do que
9999 (flag).

Dica: 3025/100 = 30 com resto 25.

Obs: Utilizar o comando de repetição while.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    int num, soma, quadrado, numEsq, numDir;

    setlocale(LC_ALL, "");

    while(1) {
        printf("Informe um valor: ");
        scanf("%d", &num);
        printf("\n");

        if(num < 1000 || num > 9999) {
            break;
        }

        numEsq = num / 100;
        numDir = num % 100;

        soma = numEsq + numDir;
        quadrado = soma * soma;

        printf("Valor....................: %d\n", num);
        printf("Partes...................: %d e %d\n", numEsq, numDir);
        printf("Soma.....................: %d\n", soma);
        printf("Soma ao quadrado.........: %d\n", quadrado);
        printf("Caracteristicas parecidas: ");
        if(num == quadrado) {
            printf("Sim\n\n");
        } else {
            printf("Não\n\n");
        }
    }

    return 0;
}
