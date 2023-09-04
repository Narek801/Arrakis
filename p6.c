#include <stdio.h>

int main() {    
    const int size = 5;
    int arr[size];
    int* p = arr;

    for (int i = 0; i < size; ++i) {
        scanf("%d", (p + i));
    }

    for (int i = 0; i < size - 1 - i; ++i) {
        int tmp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = tmp;
    }

    for (int i = 0; i < size; ++i) {
        printf("%d \n", *(p + i));
    }
    
    return 0;
}