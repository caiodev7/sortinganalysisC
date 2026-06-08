#include "insertion.h"

void insertionSort(int v[], int n) {

    for(int i = 1; i < n; i++) {

        int atual = v[i];

        int j = i - 1;

        while(j >= 0 && v[j] > atual) {

            v[j + 1] = v[j];

            j--;
        }

        v[j + 1] = atual;
    }
}