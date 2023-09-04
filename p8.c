#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int size = 5;
    int arr[size];
    int* p = arr;
    int num = 0;
    int* n = &num;

    printf("Enter the number: ");
    scanf("%d", n);

    for (int i = 0; i < size; ++i) {
        scanf("%d", (p + i));
    }

    for (int i = 0; i < size; ++i) {
        if (*(p + i) == num) {
            printf("%d \n", i);
            return 0;
        }
    }

    printf("-1");
}