#include <stdio.h>

#include "basicos/bubble.h"
#include "basicos/selection.h"
#include "basicos/insertion.h"

void imprimirVetor(int v[], int n) {

    for(int i = 0; i < n; i++) {

        printf("%d ", v[i]);
    }

    printf("\n");
}

int main() {

    int v[] = {5, 4, 3, 2, 1};

    int n = 5;

    printf("Antes:\n");

    imprimirVetor(v, n);

    insertionSort(v, n);

    printf("Depois:\n");

    imprimirVetor(v, n);

    return 0;
}