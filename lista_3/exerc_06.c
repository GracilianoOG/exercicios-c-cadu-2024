/*
6 – No dia da estréia do filme Tropa de Elite 2, uma emissora de TV realizou uma pesquisa logo após o
encerramento do filme. Cada espectador respondeu a um questionário no qual constava sua idade e a sua
opinião em relação ao filme: Excelente – 3; Bom – 2; Regular – 1. Elaborar um algoritmo que receba a
idade e a opinião de 12 espectadores, calcule e imprima:

• A média das idades das pessoas que responderam excelente;
• A quantidade de pessoas que responderam regular;
• A percentagem de pessoas que responderam bom entre todos os espectadores analisados.

Obs: Utilizar o comando for.
*/

#include <stdio.h>
#include <locale.h>

#define TOT_NOTAS 12

int main()
{
    int idade, nota, somaIdadesExcelente = 0, qtdRegular = 0, qtdBom = 0, qtdExcelente = 0;
    float mediaExcelente = 0, percNotasBoas;

    setlocale(LC_ALL, "");

    for(int i = 0; i < TOT_NOTAS; i++) {
        do {
            printf("Informe a idade n° %d: ", i + 1);
            scanf("%d", &idade);

            printf("Informe a nota n° %d: ", i + 1);
            scanf("%d", &nota);

            printf("\n");
        } while(nota < 1 || nota > 3);

        if(nota == 1) {
            qtdRegular++;
        } else if(nota == 2) {
            qtdBom++;
        } else if(nota == 3) {
            qtdExcelente++;
            somaIdadesExcelente += idade;
        }
    }

    if(qtdExcelente > 0) {
        mediaExcelente = somaIdadesExcelente / qtdExcelente;
    }
    percNotasBoas = (float) qtdBom / TOT_NOTAS;

    printf("Média das idades com nota excelente: %.1f\n", mediaExcelente);
    printf("Quantidade de notas regulares......: %d\n", qtdRegular);
    printf("Percentual de opiniões boas........: %.1f %%\n", percNotasBoas * 100);

    return 0;
}
