#include "heap.h"

void heapify(int v[], int n, int i, Estatisticas *stats)
{
    int maior = i;

    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;

    if (esquerda < n)
    {
        stats->comparacoes++;

        if (v[esquerda] > v[maior])
        {
            maior = esquerda;
        }
    }

    if (direita < n)
    {
        stats->comparacoes++;

        if (v[direita] > v[maior])
        {
            maior = direita;
        }
    }

    if (maior != i)
    {
        int temp = v[i];
        v[i] = v[maior];
        v[maior] = temp;

        stats->trocas++;

        heapify(v, n, maior, stats);
    }
}

void heapSort(int v[], int n, Estatisticas *stats)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(v, n, i, stats);
    }

    for (int i = n - 1; i > 0; i--)
    {
        int temp = v[0];
        v[0] = v[i];
        v[i] = temp;

        stats->trocas++;

        heapify(v, i, 0, stats);
    }
}