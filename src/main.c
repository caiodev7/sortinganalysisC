#include <stdio.h>

#include "basicos/bubble.h"
#include "basicos/selection.h"
#include "basicos/insertion.h"
#include "avancados/merge.h"

#include "utils/utils.h"
#include "utils/estatisticas.h"

int main()
{

    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int v[n];

    printf("\nDigite os elementos do vetor:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    int opcao;

    printf("===== ALGORITMOS DE ORDENACAO =====\n\n");

    printf("1 - Bubble Sort\n");
    printf("2 - Selection Sort\n");
    printf("3 - Insertion Sort\n");
    printf("4 - Merge Sort\n");
    printf("5 - Comparar Todos\n\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("\nVetor antes da ordenacao:\n");

    imprimirVetor(v, n);

    int vBubble[n];
    int vSelection[n];
    int vInsertion[n];
    int vMerge[n];

    for (int i = 0; i < n; i++)
    {
        vBubble[i] = v[i];
        vSelection[i] = v[i];
        vInsertion[i] = v[i];
        vMerge[i] = v[i];
    }

    switch (opcao)
    {

    case 1:
    {
        Estatisticas stats = {0, 0};

        bubbleSort(v, n, &stats);

        printf("\nComparacoes: %ld\n", stats.comparacoes);
        printf("Trocas: %ld\n", stats.trocas);

        break;
    }

    case 2:
    {
        Estatisticas stats = {0, 0};

        selectionSort(v, n, &stats);

        printf("\nComparacoes: %ld\n", stats.comparacoes);
        printf("Trocas: %ld\n", stats.trocas);

        break;
    }

    case 3:
    {
        Estatisticas stats = {0, 0};

        insertionSort(v, n, &stats);

        printf("\nComparacoes: %ld\n", stats.comparacoes);
        printf("Trocas: %ld\n", stats.trocas);

        break;
    }

    case 4:
    {
        mergeSort(v, 0, n - 1);

        break;
    }
    case 5:
    {
        Estatisticas bubbleStats = {0, 0};
        Estatisticas selectionStats = {0, 0};
        Estatisticas insertionStats = {0, 0};

        bubbleSort(vBubble, n, &bubbleStats);
        selectionSort(vSelection, n, &selectionStats);
        insertionSort(vInsertion, n, &insertionStats);
        mergeSort(vMerge, 0, n - 1);

        printf("\n===== COMPARACAO DOS ALGORITMOS =====\n");

        printf("\nBubble Sort\n");
        printf("Comparacoes: %ld\n", bubbleStats.comparacoes);
        printf("Trocas: %ld\n", bubbleStats.trocas);

        printf("\nSelection Sort\n");
        printf("Comparacoes: %ld\n", selectionStats.comparacoes);
        printf("Trocas: %ld\n", selectionStats.trocas);

        printf("\nInsertion Sort\n");
        printf("Comparacoes: %ld\n", insertionStats.comparacoes);
        printf("Trocas: %ld\n", insertionStats.trocas);

        printf("\nMerge Sort\n");
        printf("Vetor ordenado: ");
        imprimirVetor(vMerge, n);

        return 0;
    }

    default:
        printf("\nOpcao invalida!\n");
        return 1;
    }

    printf("\nVetor depois da ordenacao:\n");

    imprimirVetor(v, n);

    return 0;
}