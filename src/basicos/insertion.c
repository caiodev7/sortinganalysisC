#include "insertion.h"

void insertionSort(int v[], int n, Estatisticas *stats)
{
    for (int i = 1; i < n; i++)
    {
        int atual = v[i];
        int j = i - 1;

        while (j >= 0)
        {
            stats->comparacoes++;

            if (v[j] > atual)
            {
                v[j + 1] = v[j];

                stats->trocas++;

                j--;
            }
            else
            {
                break;
            }
        }

        v[j + 1] = atual;
    }
}
