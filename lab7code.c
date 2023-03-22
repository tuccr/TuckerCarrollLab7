#include <stdio.h>
#include <stdlib.h>

const int SIZE = 9;

int * bubbleSort(int data[]) {
    int temp;
    int * swap = (int *)malloc(sizeof(int)*SIZE);
    for(int i = 0; i < SIZE; i++) {
        swap[i] = 0;
    }
    int k = 0;
    for(int i = 0; i < SIZE-1; ++i) {
        for(int j = 0; j < SIZE-1-i; j++) {
            if(data[j] > data[j+1]) {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
                swap[k]++;
            }
        }
        k++;
    }
    for(int i = 0; i < SIZE; ++i) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return swap;
}

int main() {
    int data[9] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
    int * result = bubbleSort(data);
    for(int i = 0; i < SIZE; i++) {
        printf("Pass %d: %d\n", i + 1, result[i]);
    }
    free(result);
    return 0;
}