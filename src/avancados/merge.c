#include "merge.h"

void merge(int v[], int inicio, int meio, int fim)
{

    int tamanho1 = meio - inicio + 1;
    int tamanho2 = fim - meio;

    int esquerda[tamanho1];
    int direita[tamanho2];

    for (int i = 0; i < tamanho1; i++)
    {
        esquerda[i] = v[inicio + i];
    }

    for (int j = 0; j < tamanho2; j++)
    {
        direita[j] = v[meio + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = inicio;

    while (i < tamanho1 && j < tamanho2)
    {

        if (esquerda[i] <= direita[j])
        {
            v[k] = esquerda[i];
            i++;
        }
        else
        {
            v[k] = direita[j];
            j++;
        }

        k++;
    }

    while (i < tamanho1)
    {
        v[k] = esquerda[i];
        i++;
        k++;
    }

    while (j < tamanho2)
    {
        v[k] = direita[j];
        j++;
        k++;
    }
}

void mergeSort(int v[], int inicio, int fim)
{

    if (inicio < fim)
    {

        int meio = inicio + (fim - inicio) / 2;

        mergeSort(v, inicio, meio);

        mergeSort(v, meio + 1, fim);

        merge(v, inicio, meio, fim);
    }
}