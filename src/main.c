#include <stdio.h>
#include "basicos/selection.h"


int main() {

    int v[] = {5, 4, 3, 2, 1};

    int n = 5;

    printf("Antes:\n");
    imprimirVetor(v, n);

    selectionSort(v, n);

    printf("Depois:\n");
    imprimirVetor(v, n);

    return 0;
}