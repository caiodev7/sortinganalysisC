# Relatório de Cobertura de Código (GCOV)

## Objetivo

Avaliar a cobertura de código dos algoritmos de ordenação implementados utilizando a ferramenta GCOV.

## Metodologia

Foram desenvolvidos testes manuais para todos os algoritmos de ordenação implementados no projeto. Os testes contemplam diferentes cenários de entrada, incluindo vetores invertidos e vetores já ordenados.

A compilação foi realizada utilizando a flag:

gcc --coverage -g -O0

Após a execução dos testes, foram gerados os arquivos de cobertura e analisados por meio da ferramenta GCOV.

## Resultados

| Algoritmo      | Cobertura |
| -------------- | --------- |
| Bubble Sort    | 100%      |
| Selection Sort | 100%      |
| Insertion Sort | 100%      |
| Merge Sort     | 100%      |
| Quick Sort     | 100%      |
| Heap Sort      | 100%      |

## Análise

Os testes executaram todas as linhas dos algoritmos implementados, atingindo cobertura total de código.

Esse resultado demonstra que os principais fluxos de execução foram exercitados durante os testes, aumentando a confiabilidade das implementações.

Além de validar a correta ordenação dos vetores, os testes também garantiram a execução dos trechos responsáveis por comparações, trocas e chamadas recursivas dos algoritmos avançados.

## Conclusão

Todos os algoritmos atingiram 100% de cobertura de código, superando o requisito mínimo estabelecido para o trabalho e evidenciando a qualidade dos testes implementados.
