/*
5 – Elaborar um algoritmo para ler dois números inteiros (dividendo e divisor) e imprimir a seguinte
saída:
Divididendo:
Divisor:
Quociente:
Resto:
*/

#include <stdio.h>

int main()
{
    int dividendo, divisor;

    printf("Informe o dividendo: ");
    scanf("%d",&dividendo);

    printf("Informe o divisor: ");
    scanf("%d",&divisor);

    printf("Dividendo: %d\n", dividendo);
    printf("Divisor..: %d\n", divisor);
    printf("Quociente: %d\n", dividendo / divisor);
    printf("Resto....: %d\n", dividendo % divisor);

    return 0;
}
