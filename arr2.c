#include <stdio.h>

int main(int argc, char const *argv[])
{
    char arr[10];
    scanf("%s", &arr);

    const int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; ++i) {
        if (arr[i] >= '0' && arr[i] <= '9') {
            printf("%c", arr[i]);
        }
    }

    return 0;
}