#include <stdio.h>

int main() {
    const int size = 5;
    int arr[size];
    int* pntr = arr;

    for (int i = 0; i < size; ++i) {
        scanf("%d", (pntr + i));
    }

    for (int i = size - 1; i >= 0; --i) {
        printf("%d \n", *(pntr + i));
    }

    return 0;
}