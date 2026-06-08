#include <stdio.h>

#include "basicos/bubble.h"
#include "basicos/selection.h"
#include "basicos/insertion.h"

#include "utils/utils.h"

int main() {

    int v[] = {5, 4, 3, 2, 1};

    int n = 5;

    int opcao;

    printf("===== ALGORITMOS DE ORDENACAO =====\n\n");

    printf("1 - Bubble Sort\n");
    printf("2 - Selection Sort\n");
    printf("3 - Insertion Sort\n\n");

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("\nVetor antes da ordenacao:\n");

    imprimirVetor(v, n);

    switch(opcao) {

        case 1:
            bubbleSort(v, n);
            break;

        case 2:
            selectionSort(v, n);
            break;

        case 3:
            insertionSort(v, n);
            break;

        default:
            printf("\nOpcao invalida!\n");
            return 1;
    }

    printf("\nVetor depois da ordenacao:\n");

    imprimirVetor(v, n);

    return 0;
}