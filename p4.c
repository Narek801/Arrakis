#include <stdio.h>

int main() {
    const int size = 5;
    int arr[size];
    int* p = arr;
    int mini = 0;
    
    for (int i = 0; i < size; ++i) {
        scanf("%d", (p + i));
    }
    int min = *p;
    
    for (int i = 0; i < size; ++i) {
        if (*(p + i) < min) {
            min = *(p + i);
            mini = i;
        }
    }
    
    printf("%d \n", mini);
    return 0;
}