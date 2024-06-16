/*
7 – Elaborar um algoritmo que receba a idade e o estado civil (C – Casado, S – Solteiro, V – Viúvo e D –
Desquitado ou Separado), lidos nessa ordem. Calcule e imprima:

• A quantidade de pessoas casadas com idade menor ou igual a 30 anos;
• A quantidade de pessoas solteiras com idade maior ou igual a 22 anos;
• A média das idades das pessoas viúvas;
• A porcentagem de pessoas desquitadas ou separadas dentre todas as pessoas analisadas.

O algoritmo termina quando se digita um número igual a zero para a idade (flag). Se nenhuma pessoa
viúva for digitada, deve-se contornar o erro apresentando uma mensagem ao usuário.

Obs: Utilizar o comando while.
*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    int idade, somaIdadesViuvos = 0, qtdIdadesViuvos = 0,
        qtdCasadosMenorTrintaAnos = 0, qtdSolteirosMaiorVinteDoisAnos = 0, qtdSeparados = 0, qtdTotalPessoas = 0;
    float mediaViuvos, percPessoasSeparadas;
    char estadoCivil;

    setlocale(LC_ALL, "");

    while(1) {
        printf("Informe a idade da pessoa: ");
        scanf("%d", &idade);

        if(idade < 1) {
            if(idade == 0) {
                break;
            }
            idade *= -1;
        }

        printf("Informe o estado civil: ");
        scanf(" %c", &estadoCivil);

        estadoCivil = tolower(estadoCivil);
        qtdTotalPessoas++;

        if(estadoCivil == 'c' && idade <= 30) {
            qtdCasadosMenorTrintaAnos++;
        } else if(estadoCivil == 's' && idade >= 22) {
            qtdSolteirosMaiorVinteDoisAnos++;
        } else if(estadoCivil == 'v') {
            somaIdadesViuvos += idade;
            qtdIdadesViuvos++;
        } else if(estadoCivil == 'd') {
            qtdSeparados++;
        }
    }

    mediaViuvos = (float) somaIdadesViuvos / qtdIdadesViuvos;
    percPessoasSeparadas = (float) qtdSeparados / qtdTotalPessoas;

    printf("\nPessoas casadas com idade menor ou igual a 30..: %d\n", qtdCasadosMenorTrintaAnos);
    printf("Pessoas solteiras com idade maior ou igual a 22: %d\n", qtdSolteirosMaiorVinteDoisAnos);
    if(qtdIdadesViuvos > 0) {
        printf("Média das idades de pessoas viúvas.............: %.1f\n", mediaViuvos);
    } else {
        printf("Nenhuma idade de pessoa viúva digitada!\n");
    }
    printf("Porcentagem de pessoas desquitadas ou separadas: %.1f %%\n", percPessoasSeparadas * 100);

    return 0;
}
