#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int size = 5;
    int arr0[size];
    int arr1[size];
    int* p0 = arr0;
    int* p1 = arr1;
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        scanf("%d", (p0 + i));
        scanf("%d", (p1 + i));
        sum += *(p0 + i) + *(p1 + i); 
    }

    printf("%d \n", sum);

    return 0;
}
