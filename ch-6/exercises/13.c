#include <stdio.h>
#include <stdlib.h>

void allocateMemory(int **ptr, int n) {
    *ptr = (int *)malloc(n * sizeof(int));
    if (*ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
}

int main() {
    int *array;
    int n = 5;

    allocateMemory(&array, n);

    for (int i = 0; i < n; i++) {
        array[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);
    return 0;
}