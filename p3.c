#include <stdio.h>

int main() {
    const int size = 5;
    int arr[size];
    int* p = arr;
    int maxi = 0;
    
    for (int i = 0; i < size; ++i) {
        scanf("%d", (p + i));
    }
    int max = *p;
    
    for (int i = 0; i < size; ++i) {
        if (*(p + i) > max) {
            max = *(p + i);
            maxi = i;
        }
    }
    
    printf("%d \n", maxi);
    return 0;
}