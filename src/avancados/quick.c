#include "quick.h"

int particao(int v[], int inicio, int fim)
{
    int pivo = v[fim];

    int i = inicio - 1;

    for (int j = inicio; j < fim; j++)
    {
        if (v[j] < pivo)
        {
            i++;

            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }

    int temp = v[i + 1];
    v[i + 1] = v[fim];
    v[fim] = temp;

    return i + 1;
}

void quickSort(int v[], int inicio, int fim)
{
    if (inicio < fim)
    {
        int p = particao(v, inicio, fim);

        quickSort(v, inicio, p - 1);
        quickSort(v, p + 1, fim);
    }
}