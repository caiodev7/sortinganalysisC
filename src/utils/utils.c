#include <stdio.h>

#include "utils.h"

void imprimirVetor(int v[], int n) {

    for(int i = 0; i < n; i++) {

        printf("%d ", v[i]);
    }

    printf("\n");
}