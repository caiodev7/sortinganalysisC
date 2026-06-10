#include "selection.h"

void selectionSort(int v[], int n, Estatisticas *stats)
{
    for (int i = 0; i < n - 1; i++)
    {
        int menor = i;

        for (int j = i + 1; j < n; j++)
        {
            stats->comparacoes++;

            if (v[j] < v[menor])
            {
                menor = j;
            }
        }

        if (menor != i)
        {
            int temp = v[i];
            v[i] = v[menor];
            v[menor] = temp;

            stats->trocas++;
        }
    }
}