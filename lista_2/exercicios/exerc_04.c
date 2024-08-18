/*
4 – Elaborar um algoritmo para imprimir o maior valor entre três valores lidos, sem levar em
consideração a leitura de valores iguais.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int num1, num2, num3;

    printf("Informe o 1° valor: ");
    scanf("%d", &num1);

    printf("Informe o 2° valor: ");
    scanf("%d", &num2);

    printf("Informe o 3° valor: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3) {
        printf("%d é maior", num1);
    } else if(num2 > num1 && num2 > num3) {
        printf("%d é maior", num2);
    } else if(num3 > num1 && num3 > num2) {
        printf("%d é maior", num3);
    }

    return 0;
}
