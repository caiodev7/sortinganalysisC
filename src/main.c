#include <stdio.h>

void bubbleSort(int v[], int n);

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

    bubbleSort(v, n);

    printf("Depois:\n");
    imprimirVetor(v, n);

    return 0;
}