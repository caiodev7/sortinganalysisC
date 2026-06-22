# Implementação e Análise de Algoritmos de Ordenação em C

## 📚 Sobre o Projeto

Este projeto foi desenvolvido para a disciplina de Estrutura de Dados com o objetivo de implementar, testar e analisar algoritmos clássicos de ordenação utilizando a linguagem C.

Além da implementação dos algoritmos, foram realizadas análises de desempenho através de estatísticas de execução, cobertura de código (GCOV) e profiling (GPROF), conforme os requisitos da disciplina.

---

## 🎯 Objetivos

* Implementar algoritmos básicos e avançados de ordenação.
* Aplicar conceitos de modularização em C.
* Comparar algoritmos através de estatísticas de execução.
* Utilizar Git e GitHub para versionamento.
* Realizar testes automatizados.
* Avaliar cobertura de código com GCOV.
* Avaliar desempenho com GPROF.
* Documentar o desenvolvimento do projeto.

---

## 🛠 Tecnologias Utilizadas

* Linguagem C (C11)
* GCC
* Git
* GitHub
* Visual Studio Code
* GCOV
* GPROF

---

## 📂 Estrutura do Projeto

```text
ordenacao-trio/
├── README.md
├── Makefile
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
│   │   ├── quick.h
│   │   ├── heap.c
│   │   └── heap.h
│   │
│   ├── utils/
│   │   ├── utils.c
│   │   ├── utils.h
│   │   └── estatisticas.h
│   │
│   └── main.c
│
├── tests/
│   └── test_basic.c
│
└── docs/
    ├── cobertura.md
    ├── perfil.md
    ├── perfil_bruto.txt
    └── uso-ia.md
```

---

## 📋 Algoritmos Implementados

### Bubble Sort

* Melhor Caso: O(n)
* Caso Médio: O(n²)
* Pior Caso: O(n²)

### Selection Sort

* Melhor Caso: O(n²)
* Caso Médio: O(n²)
* Pior Caso: O(n²)

### Insertion Sort

* Melhor Caso: O(n)
* Caso Médio: O(n²)
* Pior Caso: O(n²)

### Merge Sort

* Melhor Caso: O(n log n)
* Caso Médio: O(n log n)
* Pior Caso: O(n log n)

### Quick Sort

* Melhor Caso: O(n log n)
* Caso Médio: O(n log n)
* Pior Caso: O(n²)

### Heap Sort

* Melhor Caso: O(n log n)
* Caso Médio: O(n log n)
* Pior Caso: O(n log n)

---

## 📊 Estatísticas Coletadas

O sistema registra:

* Quantidade de comparações
* Quantidade de trocas/movimentações

Essas métricas permitem comparar a eficiência prática dos algoritmos implementados.

---

## ✅ Testes Implementados

Foram desenvolvidos testes para todos os algoritmos de ordenação.

Cada algoritmo possui pelo menos dois casos de teste, incluindo:

* Vetor aleatório
* Vetor já ordenado
* Vetor invertido

Todos os testes foram executados com sucesso.

---

## 📈 Cobertura de Código

Foi utilizada a ferramenta GCOV para análise de cobertura.

Resultado obtido:

* Bubble Sort: 100%
* Selection Sort: 100%
* Insertion Sort: 100%
* Merge Sort: 100%
* Quick Sort: 100%
* Heap Sort: 100%

Relatório disponível em:

```text
docs/cobertura.md
```

---

## ⚡ Profiling de Desempenho

Foi utilizada a ferramenta GPROF para análise de desempenho.

Arquivos gerados:

```text
docs/perfil_bruto.txt
docs/perfil.md
```

---

## 🤖 Uso de Inteligência Artificial

O projeto utilizou ferramentas de IA como apoio educacional para:

* Explicação de algoritmos
* Revisão de código
* Correção de erros
* Apoio na documentação

Toda utilização foi documentada em:

```text
docs/uso-ia.md
```

---

## ▶ Compilação

```bash
gcc src/main.c src/basicos/bubble.c src/basicos/selection.c src/basicos/insertion.c src/avancados/merge.c src/avancados/quick.c src/avancados/heap.c src/utils/utils.c -o programa
```

---

## ▶ Execução

Linux:

```bash
./programa
```

Windows:

```bash
programa.exe
```

---

## 👨‍💻 Integrantes

* Caio Ferreira Sousa

---

## 📌 Status do Projeto

✅ Concluído para entrega acadêmica

Funcionalidades implementadas:

* 6 algoritmos de ordenação
* Estatísticas de comparações e trocas
* Testes automatizados
* Cobertura de código (GCOV)
* Profiling (GPROF)
* Documentação técnica
* Controle de versão com Git/GitHub
