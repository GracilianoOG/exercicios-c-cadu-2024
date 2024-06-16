/*
8 � Elaborar um algoritmo que leia 10 n�meros inteiros e calcule o produto dos n�meros pares e
divis�veis por 5 maiores do que um n�mero de refer�ncia qualquer digitado pelo usu�rio.

Ex: N�mero de refer�ncia digitado pelo usu�rio: 9

10 N�meros digitados pelo usu�rio: 5, 10, 9, 15, 20, 8, 10, 1, 12, 35
Produto: 10 x 20 x 10 = 2000

Obs: Utilizar o comando de repeti��o for.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    int num, numRef, resultado = 1;

    setlocale(LC_ALL, "");

    printf("Digite um valor para refer�ncia: ");
    scanf("%d", &numRef);

    printf("\n");

    for(int i = 0; i < 10; i++) {
        printf("Informe o %d� valor: ", i + 1);
        scanf("%d", &num);

        printf("\n");

        if((num > numRef) && (num % 2 == 0) && (num % 5 == 0)) {
            resultado *= num;
        }
    }

    printf("Resultado final: %d\n", resultado);

    return 0;
}
