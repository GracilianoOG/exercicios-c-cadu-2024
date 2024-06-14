/*
13 – Elaborar um algoritmo em VisuAlg para ler o nome, nota da primeira e segunda prova de um
aluno. Deve-se imprimir o nome, a média do aluno e uma das mensagens abaixo

• “Aprovado“ se a média for maior ou igual a 6.0;
• “Reprovado“ se a média for menor do que 4.0;
• “Em Exame Final“ se a média for maior ou igual a 4.0 e menor do que 6.0.

Se o aluno estiver em Exame Final, faça a leitura da nota do Exame Final (média da primeira e
segunda prova e nota do Exame Final) for maior ou igual a 6.0, imprimir a mensagem “Aprovado em
Exame Final“. Caso contrário, imprimir a mensagem “Reprovado em Exame Final“.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char nome[30];
    float nota1, nota2, media;

    printf("Informe o nome do aluno: ");
    scanf("%s", nome);

    printf("Informe a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota aluno....: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("\nNome do aluno.: %s\n", nome);
    printf("Média do aluno: %.1f\n", media);
    printf("Situação......: ");

    if(media < 4.0) {
        printf("Reprovado");
    } else if(media < 6.0) {
        printf("Em Exame Final");
    } else if(media >= 6.0) {
        printf("Aprovado");
    }

    printf("\n");

    return 0;
}
