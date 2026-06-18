#include <stdio.h>
#include <string.h>

#include "../src/basicos/bubble.h"
#include "../src/basicos/selection.h"
#include "../src/basicos/insertion.h"

#include "../src/avancados/merge.h"
#include "../src/avancados/quick.h"
#include "../src/avancados/heap.h"

#include "../src/utils/estatisticas.h"

int vetorOrdenado(int v[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            return 0;
        }
    }

    return 1;
}

void testarBubble()
{
    int v1[] = {5, 2, 8, 1, 3};
    int v2[] = {5, 4, 3, 2, 1};

    Estatisticas stats = {0, 0};

    bubbleSort(v1, 5, &stats);

    printf("%s Bubble Teste 1\n",
           vetorOrdenado(v1, 5) ? "PASSOU" : "FALHOU");

    bubbleSort(v2, 5, &stats);

    printf("%s Bubble Teste 2\n",
           vetorOrdenado(v2, 5) ? "PASSOU" : "FALHOU");
}

void testarSelection()
{
    int v1[] = {5, 2, 8, 1, 3};
    int v2[] = {5, 4, 3, 2, 1};

    Estatisticas stats = {0, 0};

    selectionSort(v1, 5, &stats);

    printf("%s Selection Teste 1\n",
           vetorOrdenado(v1, 5) ? "PASSOU" : "FALHOU");

    selectionSort(v2, 5, &stats);

    printf("%s Selection Teste 2\n",
           vetorOrdenado(v2, 5) ? "PASSOU" : "FALHOU");
}

void testarInsertion()
{
    int v1[] = {5, 2, 8, 1, 3};
    int v2[] = {5, 4, 3, 2, 1};

    Estatisticas stats = {0, 0};

    insertionSort(v1, 5, &stats);

    printf("%s Insertion Teste 1\n",
           vetorOrdenado(v1, 5) ? "PASSOU" : "FALHOU");

    insertionSort(v2, 5, &stats);

    printf("%s Insertion Teste 2\n",
           vetorOrdenado(v2, 5) ? "PASSOU" : "FALHOU");
}

void testarMerge()
{
    int v1[] = {5, 2, 8, 1, 3};
    int v2[] = {5, 4, 3, 2, 1};

    mergeSort(v1, 0, 4);

    printf("%s Merge Teste 1\n",
           vetorOrdenado(v1, 5) ? "PASSOU" : "FALHOU");

    mergeSort(v2, 0, 4);

    printf("%s Merge Teste 2\n",
           vetorOrdenado(v2, 5) ? "PASSOU" : "FALHOU");
}

void testarQuick()
{
    int v1[] = {5, 2, 8, 1, 3};
    int v2[] = {5, 4, 3, 2, 1};

    Estatisticas stats = {0, 0};

    quickSort(v1, 0, 4, &stats);

    printf("%s Quick Teste 1\n",
           vetorOrdenado(v1, 5) ? "PASSOU" : "FALHOU");

    quickSort(v2, 0, 4, &stats);

    printf("%s Quick Teste 2\n",
           vetorOrdenado(v2, 5) ? "PASSOU" : "FALHOU");
}

void testarHeap()
{
    int v1[] = {5, 2, 8, 1, 3};
    int v2[] = {5, 4, 3, 2, 1};

    Estatisticas stats = {0, 0};

    heapSort(v1, 5, &stats);

    printf("%s Heap Teste 1\n",
           vetorOrdenado(v1, 5) ? "PASSOU" : "FALHOU");

    heapSort(v2, 5, &stats);

    printf("%s Heap Teste 2\n",
           vetorOrdenado(v2, 5) ? "PASSOU" : "FALHOU");
}

int main()
{
    printf("===== EXECUTANDO TESTES =====\n\n");

    testarBubble();
    testarSelection();
    testarInsertion();
    testarMerge();
    testarQuick();
    testarHeap();

    return 0;
}