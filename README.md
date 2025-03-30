# targetsistemas.gupy

Exercícios de Programação em C e JavaScript
Este repositório contém a resolução de 5 exercícios de programação, tanto em C quanto em JavaScript. Os exercícios abordam temas de loops, manipulação de strings, cálculo de soma, análise de dados e manipulação de JSON.

Exercício 1: Cálculo da Soma
Objetivo: Calcular a soma dos números de 1 até um valor definido (INDICE = 13).

Em C: Utilizamos um loop while para somar os valores de K até o valor de INDICE. O valor de SOMA foi atualizado a cada iteração do loop.

Em JavaScript: A lógica foi a mesma, usando um while loop, somando os valores de K até atingir o valor de INDICE.

Resultado esperado: O valor de SOMA ao final será 91, que é a soma de todos os números de 1 a 13.

Exercício 2: Sequência de Fibonacci
Objetivo: Verificar se um número informado pertence à sequência de Fibonacci.

Em C: A sequência de Fibonacci foi gerada a partir dos números 0 e 1, com a soma dos dois valores anteriores formando o próximo número. A função verifica se o número fornecido pertence à sequência, retornando um valor booleano.

Em JavaScript: A lógica é semelhante à de C. A sequência é gerada iterativamente e comparada com o número fornecido para determinar se ele pertence à sequência.

Resultado esperado: A função retorna true se o número pertence à sequência e false caso contrário.

Exercício 3: Análise de Faturamento Mensal com JSON
Objetivo: Analisar os dados de faturamento de uma distribuidora e calcular:

Menor valor de faturamento do mês.

Maior valor de faturamento do mês.

Número de dias com faturamento superior à média mensal.

Em C: Utilizamos um arquivo JSON contendo os dados de faturamento diário. A leitura do arquivo foi feita com a ajuda da biblioteca jansson. A análise dos dados consistiu em encontrar o menor e maior valor de faturamento e contar os dias com faturamento superior à média.

Em JavaScript: O código foi semelhante ao de C, mas utilizando o fs (file system) para ler o arquivo JSON. A análise dos dados seguiu a mesma lógica, utilizando funções JavaScript nativas para encontrar os resultados.

Resultado esperado: O programa retorna o menor e maior valor de faturamento, além de quantificar os dias com faturamento superior à média mensal.

Exercício 4: Percentual de Representação dos Estados
Objetivo: Calcular o percentual de faturamento que cada estado representa no total.

Em C: Foi criada uma estrutura simples para armazenar os valores de faturamento de cada estado. O programa somou o faturamento total e calculou o percentual de cada estado.

Em JavaScript: A estrutura de dados foi implementada com um objeto contendo os estados e seus respectivos valores de faturamento. O percentual foi calculado iterativamente e impresso para cada estado.

Resultado esperado: O programa imprime o percentual de participação de cada estado no faturamento total da distribuidora.

Exercício 5: Inversão de String
Objetivo: Inverter os caracteres de uma string sem usar funções prontas como reverse().

Em C: A string foi invertida manualmente, usando um loop que começa do último caractere e vai até o primeiro. O código armazena a string invertida em uma nova variável e a imprime.

Em JavaScript: A inversão também foi feita de forma manual, percorrendo a string de trás para frente e concatenando os caracteres em uma nova string.

Resultado esperado: O programa imprime a string invertida.

Como Rodar os Códigos
Em C:
Compile o código utilizando um compilador C, por exemplo:

bash
Copiar
Editar
gcc -o exercicio1 exercicio1.c
Execute o arquivo compilado:

bash
Copiar
Editar
./exercicio1
Em JavaScript:
Instale o Node.js no seu sistema, se ainda não tiver.

Salve o código em um arquivo .js.

Execute o código com o Node.js:

bash
Copiar
Editar
node exercicio1.js
Conclusão
Esses exercícios foram desenvolvidos para abordar conceitos importantes de programação, como loops, manipulação de strings, leitura e análise de arquivos JSON e cálculos simples. O código em C e JavaScript foi desenvolvido para ter uma implementação simples e clara, facilitando o entendimento dos conceitos envolvidos.
