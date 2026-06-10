#include "quick.h"

int particao(int v[], int inicio, int fim, Estatisticas *stats)
{
    int pivo = v[fim];

    int i = inicio - 1;

    for (int j = inicio; j < fim; j++)
    {
        stats->comparacoes++;

        if (v[j] < pivo)
        {
            i++;

            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;

            stats->trocas++;
        }
    }

    int temp = v[i + 1];
    v[i + 1] = v[fim];
    v[fim] = temp;
    stats->trocas++;

    return i + 1;
}

void quickSort(int v[], int inicio, int fim, Estatisticas *stats)
{
    if (inicio < fim)
    {
        int p = particao(v, inicio, fim, stats);

        quickSort(v, inicio, p - 1, stats);
        quickSort(v, p + 1, fim, stats);
    }
}