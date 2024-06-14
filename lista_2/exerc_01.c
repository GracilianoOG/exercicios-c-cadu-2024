/*
1 – Elaborar um algoritmo para ler o nome e a idade de duas pessoas e verificar qual é a mais nova
dentre as duas pessoas lidas.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char nome1[30], nome2[30];
    int idade1, idade2;

    printf("Informe o primeiro nome: ");
    scanf("%s", nome1);

    printf("Informe a primeira idade de %s: ", nome1);
    scanf("%d", &idade1);

    printf("Informe o segundo nome: ");
    scanf("%s", nome2);

    printf("Informe a segunda idade de %s: ", nome2);
    scanf("%d", &idade2);

    if(idade1 < idade2) {
        printf("%s é mais novo(a) que %s!", nome1, nome2);
    }

    if(idade1 > idade2) {
        printf("%s é mais novo(a) que %s!", nome2, nome1);
    }

    if(idade1 == idade2) {
        printf("%s e %s possuem as mesmas idades!", nome1, nome2);
    }

    return 0;
}
