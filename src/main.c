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
    printf("4 - Merge Sort\n\n");

   printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    

    printf("\nVetor antes da ordenacao:\n");

    imprimirVetor(v, n);

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

default:
    printf("\nOpcao invalida!\n");
    return 1;
}



    printf("\nVetor depois da ordenacao:\n");

    imprimirVetor(v, n);

    return 0;
}