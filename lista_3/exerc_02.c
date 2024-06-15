/*
2 – Chico tem 1.50 m e cresce 2 cm por ano, enquanto Juca tem 1.10 m e cresce 3 cm por ano. Elaborar um
algoritmo para calcular e imprimir quantos anos serão necessários para que Juca seja maior do que Chico.
Obs: Utilizar o comando while.
*/

#include <stdio.h>

int main()
{
    int altChico = 150, altJuca = 110, anos = 0;

    while(altJuca <= altChico) {
        altChico += 2;
        altJuca += 3;
        anos++;
    }

    printf("Anos: %d", anos);

    return 0;
}
