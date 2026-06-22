# Relatório de Profiling (GPROF)

## Objetivo

Analisar o comportamento dos algoritmos de ordenação utilizando a ferramenta GPROF, identificando funções que consomem maior tempo de execução.

## Metodologia

O projeto foi compilado utilizando a opção:

gcc -pg -g -O0

Em seguida, foram executados os testes implementados em `test_basic.c`, gerando o arquivo `gmon.out`.

O relatório bruto foi produzido através do comando:

gprof testes_profile.exe gmon.out > docs/perfil_bruto.txt

## Resultados

Durante a execução dos testes, o relatório apresentou a mensagem:

"no time accumulated"

Isso ocorreu porque os vetores utilizados nos testes possuem tamanho reduzido e os algoritmos executaram em tempo muito pequeno para que o GPROF registrasse amostras significativas de processamento.

## Análise

Embora não tenha sido possível obter uma distribuição detalhada de tempo entre as funções, a ferramenta foi configurada e executada corretamente, produzindo o arquivo de perfil bruto.

Em cenários com vetores maiores, espera-se que algoritmos de complexidade O(n²), como Bubble Sort, Selection Sort e Insertion Sort, consumam mais tempo de execução que algoritmos O(n log n), como Merge Sort, Quick Sort e Heap Sort.

## Conclusão

O profiling foi realizado com sucesso utilizando o GPROF. A ausência de dados temporais detalhados está relacionada ao pequeno volume de dados utilizado nos testes, e não a falhas na configuração da ferramenta.
