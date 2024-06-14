/*
12 – Um endocrinologista deseja controlar a saúde de seus pacientes e, para isso, se utiliza do
Índice de Massa Corporal (IMC). Sabendo-se que o IMC é calculado através da seguinte fórmula
IMC = peso/altura2, onde o peso é dado em Kg e a altura é dada em metros, elaborar um algoritmo
que apresente o nome do paciente e sua faixa de risco, baseando-se na seguinte tabela:
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float imc, peso, altura;
    char nome[30];

    printf("Informe o nome do paciente: ");
    scanf("%s", nome);

    printf("Informe o peso (Kg): ");
    scanf("%f", &peso);

    printf("Informe a altura (M): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nIMC de %s: %.2f Kg/M2 - ", nome, imc);

    if(imc < 20.0) {
        printf("Abaixo do peso\n");
    } else if(imc <= 25.0) {
        printf("Normal\n");
    } else if(imc <= 30.0) {
        printf("Excesso de peso\n");
    } else if(imc <= 35.0) {
        printf("Obesidade\n");
    } else if(imc > 35.0) {
        printf("Obesidade mórbida\n");
    }

    return 0;
}
