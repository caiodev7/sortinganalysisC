# Implementação e Análise de Algoritmos de Ordenação em C

## 📚 Sobre o Projeto

Este projeto foi desenvolvido como parte da disciplina de Estrutura de Dados, com o objetivo de implementar, testar e analisar diferentes algoritmos de ordenação utilizando a linguagem C.

Além da implementação dos algoritmos, o sistema realiza a coleta de estatísticas de execução, permitindo comparar o comportamento de cada método de ordenação através da quantidade de comparações e trocas realizadas.

---

## 🎯 Objetivos

* Implementar algoritmos clássicos de ordenação.
* Aplicar conceitos de modularização em C.
* Comparar o desempenho dos algoritmos.
* Analisar a quantidade de comparações e trocas.
* Desenvolver boas práticas de organização de projetos.
* Utilizar Git e GitHub para versionamento.

---

## 🛠 Tecnologias Utilizadas

* Linguagem C
* GCC (GNU Compiler Collection)
* Git
* GitHub
* Visual Studio Code

---

## 📂 Estrutura do Projeto

```text
ordenacao-trio/
│
├── src/
│   ├── basicos/
│   │   ├── bubble.c
│   │   ├── bubble.h
│   │   ├── selection.c
│   │   ├── selection.h
│   │   ├── insertion.c
│   │   └── insertion.h
│   │
│   ├── avancados/
│   │   ├── merge.c
│   │   ├── merge.h
│   │   ├── quick.c
│   │   └── quick.h
│   │
│   ├── utils/
│   │   ├── utils.c
│   │   ├── utils.h
│   │   ├── estatisticas.c
│   │   └── estatisticas.h
│   │
│   └── main.c
│
├── docs/
├── tests/
├── Makefile
└── README.md
```

---

## 📋 Algoritmos Implementados

### Bubble Sort

Algoritmo baseado na comparação entre elementos adjacentes, realizando trocas até que o vetor esteja ordenado.

Complexidade:

* Melhor Caso: O(n)
* Caso Médio: O(n²)
* Pior Caso: O(n²)

---

### Selection Sort

Seleciona repetidamente o menor elemento do vetor e o posiciona corretamente.

Complexidade:

* Melhor Caso: O(n²)
* Caso Médio: O(n²)
* Pior Caso: O(n²)

---

### Insertion Sort

Insere cada elemento na posição correta dentro da parte já ordenada do vetor.

Complexidade:

* Melhor Caso: O(n)
* Caso Médio: O(n²)
* Pior Caso: O(n²)

---

### Merge Sort

Algoritmo baseado na estratégia de Divisão e Conquista.

Complexidade:

* Melhor Caso: O(n log n)
* Caso Médio: O(n log n)
* Pior Caso: O(n log n)

---

### Quick Sort

Algoritmo baseado na escolha de um pivô para particionar o vetor.

Complexidade:

* Melhor Caso: O(n log n)
* Caso Médio: O(n log n)
* Pior Caso: O(n²)

---

## 📊 Estatísticas Coletadas

O sistema registra:

* Quantidade de comparações
* Quantidade de trocas/movimentações

Essas métricas permitem comparar a eficiência prática dos algoritmos.

---

## 🚀 Funcionalidades

* Entrada dinâmica de vetores.
* Escolha do algoritmo pelo menu.
* Ordenação dos dados.
* Exibição do vetor antes e depois da ordenação.
* Contagem de comparações.
* Contagem de trocas.
* Comparação entre algoritmos.
* Implementação modular.

---

## ▶ Como Compilar

```bash
gcc src/main.c \
src/basicos/bubble.c \
src/basicos/selection.c \
src/basicos/insertion.c \
src/avancados/merge.c \
src/avancados/quick.c \
src/utils/utils.c \
-o programa
```

---

## ▶ Como Executar

```bash
./programa
```

No Windows:

```bash
programa.exe
```

---

## 📈 Exemplo de Execução

```text
Digite o tamanho do vetor: 5

Digite os elementos do vetor:
9
4
1
7
2

===== ALGORITMOS DE ORDENACAO =====

1 - Bubble Sort
2 - Selection Sort
3 - Insertion Sort
4 - Merge Sort
5 - Comparar Todos
6 - Quick Sort

Escolha uma opcao: 6

Vetor antes da ordenacao:
9 4 1 7 2

Comparacoes: 8
Trocas: 4

Vetor depois da ordenacao:
1 2 4 7 9
```

---

## 👨‍💻 Equipe

Projeto desenvolvido para a disciplina de Estrutura de Dados.

Integrantes do grupo:

* Caio Ferreira Sousa


---

## 📌 Status do Projeto

🚧 Em desenvolvimento

Próximas melhorias:

* Medição de tempo de execução.
* Geração automática de relatórios.
* Testes com vetores de grande porte.
* Exportação de resultados para arquivo.
* Gráficos comparativos de desempenho.
