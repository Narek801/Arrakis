#include <stdio.h>

int main(int argc, char const *argv[])
{
    char arr[10];
    scanf("%s", &arr);

    const int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = size - 1; i >= 0; --i) {
        printf("%c", arr[i]);
    }
    return 0;
}
