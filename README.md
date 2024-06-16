# Exercicios Feitos na Linguagem C

Repositório criado com o intuito de armazenar todos os exercícios feitos na disciplina de Programação Estruturada. Servirá também como referência para qualquer colega que necessite revisar ou comparar as respostas.

## Estrutura Sequencial

1. Elaborar um algoritmo para ler cinco valores reais, calcular e imprimir os números lidos e a média
desses valores.

2. Elaborar um algoritmo para calcular e imprimir a expressão X = (A+B)/(A-B), sabendo-se que A e B
são números reais lidos do teclado.

3. Elaborar um algoritmo para calcular a área de um trapézio. Fórmula da Área do Trapézio:
A = ((BMA + BME)*H)/2, onde BMA é a base maior do trapézio, BME é a base menor do trapézio e H é
a altura do trapézio.

4. Elaborar um algoritmo para ler o valor do raio e calcular a área e volume de uma esfera. O cálculo
da área de uma esfera é dado pela fórmula: A = 4 x Pi x R2. O cálculo do volume de uma esfera é dado
pela fórmula: V = 4/3 x Pi x R3.

5. Elaborar um algoritmo para ler dois números inteiros (dividendo e divisor) e imprimir a seguinte
saída:

    - Divididendo:
    - Divisor:
    - Quociente:
    - Resto:

6. Elaborar um algoritmo para ler o saldo de uma aplicação e imprimir o saldo anterior, valor do
reajuste e o novo saldo, considerando que o reajuste foi de 5%.

7. Elaborar um algoritmo para ler o valor de um produto e imprimir esse valor, o valor do desconto e
um novo valor, tendo em vista que o desconto foi de 9%.

8. Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se
usar 18W de potência. Elaborar um algoritmo que receba as duas dimensões de um cômodo (em
metros), calcule e mostre a sua área (em m2) e a potência de iluminação que deverá ser utilizada.

9. Elaborar um algoritmo para ler um número inteiro de 3 casas decimais e imprimir a soma dos
algarismos da casa das dezenas e das unidades. Exemplo: 123. A soma dos algarismos da casa das
dezenas e das unidades é: 5.

10. Elaborar um algoritmo para ler as variáveis A e B e efetuar a troca dos valores de forma que a
variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da variável A.
Apresentar os valores trocados.

## Estruturas Condicionais

1. Elaborar um algoritmo para ler o nome e a idade de duas pessoas e verificar qual é a mais nova
dentre as duas pessoas lidas.

2. Elaborar um algoritmo para calcular o volume de um cilindro, sabendo-se que o raio (R) e a altura
(H) não podem ser números negativos ou zero.
Fórmula do Volume do Cilindro: V = Pi*R2*H

3. Elaborar um algoritmo para ler o nome de um funcioná rio, seu cargo e salá rio e fazer o reajuste
salarial de acordo com os crité rios apresentados abaixo. Deve-se imprimir o nome, cargo, salário
antigo e novo do funcionário.

        Salário ≤ R$ 1.000,00 -> 30% de reajuste
        R$ 1.000,00 < Salá rio ≤ 5.000,00 -> 20% de reajuste
        Salário > R$ 5.000,00 -> 10% de reajuste

4. Elaborar um algoritmo para imprimir o maior valor entre três valores lidos, sem levar em
consideração a leitura de valores iguais.

5. Elaborar um algoritmo que leia trê s nú meros diferentes, coloque-os em ordem crescente e
imprima-os nesta ordem.

6. Elaborar um algoritmo Menu de Opções, que para cada uma das opções lidas abaixo, imprima as
seguintes mensagens:

| Opções | Mensagem |
| ------ | -------- |
| 1 | Executa a rotina de inclusão de alunos |
| 2 | Executa a rotina de alteração de alunos |
| 3 | Executa a rotina de exclusão de alunos |
| 4 | Executa a rotina de consulta de alunos |

7. O cardápio de uma Casa de Sucos é dado abaixo. Elaborar um algoritmo para ler o código do
suco comprado, a quantidade de suco comprada e calcular a conta final.

| Código do Suco | Sucos | Preço |
| -------------- | ----- | ----- |
| 1 | Uva | R$ 1,50 |
| 2 | Morango | R$ 2,00 |
| 3 | Limão | R$ 1,50 |
| 4 | Maracujá | R$ 1,00 |
| 5 | Abacaxi | R$ 1,00 |

8. Para auxiliar os vendedores de uma loja na orientação aos clientes sobre as diversas formas de
pagamento, elaborar um algoritmo para:

    - Imprimir o menu abaixo.

            Formas de Pagamento

            1. A vista
            2. Cheque para trinta dias
            3. Em duas vezes
            4. Em três vezes
            5. Em quatro vezes
            6. A partir de cinco vezes

    - Ler o código da opção de pagamento.

    - Imprimir uma das mensagens de acordo com opção lida:

            Opção = 1: Desconto de 20%
            Opção = 2,3 ou 4: Mesmo preço a vista
            Opção = 5: Juros de 3% ao mês
            Opção = 6: Juros de 5% ao mês

            Se a opção for menor do que 1 ou maior do que 6:
            
            > Opção inválida

9. O preço, ao consumidor, de um carro novo é a soma do custo de fábrica com a porcentagem do
distribuidor e com os impostos, ambos aplicados ao custo de fábrica, de acordo com as
porcentagens encontradas na tabela abaixo. Elaborar um algoritmo que receba o custo de fábrica
de um carro e mostre o preço ao consumidor.

| Custo da Fábrica | % do Distribuidor | % dos Impostos |
| ---------------- | ----------------- | -------------- |
| Até R$ 12.000,00 (inclusive) | 5% | isento |
| Entre R$ 12.000,00 e R$ 25.000,00 (inclusive) | 10% | 15% |
| Acima de R$ 25.000,00 | 15% | 20% |

10. Elaborar um algoritmo que receba o preço de um produto, calcule e mostre, de acordo com as
tabelas abaixo, o novo preço e a classificação.

Tabela 1 – Percentual de Aumento:

| Preço | % |
| ----- | - |
| Até R$ 50,00 (inclusive) | 5% |
| Entre R$ 50,00 e R$ 100,00 (inclusive) | 10% |
| Acima de R$ 100,00 | 15% |

Tabela 2 – Classificações:

| Novo Preço | Classificação |
| ---------- | ------------- |
| Até R$ 80,00 (inclusive) | Barato |
| Entre R$ 80,00 e R$ 120,00 (inclusive) | Normal |
| Entre R$ 120,00 e R$ 200,00 (inclusive) | Caro |
| Acima de R$ 200,00 | Muito Caro |

11. Elaborar um algoritmo que receba dois números e execute as operações listadas a seguir, de
acordo com a escolha do usuário. Se a opção digitada for inválida, mostre uma mensagem de erro.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.

| Escolha do Usuário | Operação |
| ------------------ | -------- |
| 1 | Média entre os números digitados |
| 2 | Diferença do maior pelo menor |
| 3 | Produto entre os números digitados |
| 4 | Divisão do primeiro pelo segundo |

12 – Um endocrinologista deseja controlar a saúde de seus pacientes e, para isso, se utiliza do
Índice de Massa Corporal (IMC). Sabendo-se que o IMC é calculado através da seguinte fórmula
IMC = peso/altura2, onde o peso é dado em Kg e a altura é dada em metros, elaborar um algoritmo
que apresente o nome do paciente e sua faixa de risco, baseando-se na seguinte tabela:

| IMC | Operação |
| --- | -------- |
| abaixo de 20 | abaixo do peso |
| a partir de 20 até 25 | normal |
| acima de 25 até 30 | excesso de peso |
| acima de 30 até 35 | obesidade |
| acima de 35 | obesidade mórbida |

13. Elaborar um algoritmo em VisuAlg para ler o nome, nota da primeira e segunda prova de um
aluno. Deve-se imprimir o nome, a média do aluno e uma das mensagens abaixo:

- “Aprovado“ se a média for maior ou igual a 6.0;
- “Reprovado“ se a média for menor do que 4.0;
- “Em Exame Final“ se a média for maior ou igual a 4.0 e menor do que 6.0.

Se o aluno estiver em Exame Final, faça a leitura da nota do Exame Final (média da primeira e
segunda prova e nota do Exame Final) for maior ou igual a 6.0, imprimir a mensagem “Aprovado em
Exame Final“. Caso contrário, imprimir a mensagem “Reprovado em Exame Final“.

14. Elaborar um algoritmo em VisuAlg para ler os coeficientes A, B e C de uma equação do
segundo grau levando-se em consideração os seguintes critérios:

- Se delta for negativo: imprimir a mensagem ”Não há solução real.”;
- Se delta for igual a zero: imprimir a mensagem “Duas raízes reais iguais.” e calcular e
imprimir a raiz da equação;
- Se delta for maior do que zero: imprimir a mensagem “Duas raízes reais diferentes.” e
calcular e imprimir as raízes da equação.