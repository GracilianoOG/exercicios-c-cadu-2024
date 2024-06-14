/*
9 � Elaborar um algoritmo para ler um n�mero inteiro de 3 casas decimais e imprimir a soma dos
algarismos da casa das dezenas e das unidades. Exemplo: 123. A soma dos algarismos da casa das
dezenas e das unidades �: 5.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num, soma, dezena, unidade;

    printf("Forne�a um n�mero com tr�s casas: ");
    scanf("%d", &num);

    unidade = num % 10;
    dezena = num % 100 / 10;
    soma = dezena + unidade;

    printf("\nSoma da dezena e unidade: %d\n", soma);

    return 0;
}
