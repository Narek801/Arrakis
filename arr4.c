#include <stdio.h>

int main(int argc, char const *argv[])
{
    char arr[] = "Hello World";
    short oIndex = 0;
    short SpaceCount = 0;
    short oIndex2 = 0;
    short CountBig = 0;

    // a
    const int length = sizeof(arr) / sizeof(arr[0]);
    printf("a - %d\n", length);

    // g
    for (int i = 0; i < length; ++i) {
        if (arr[i] >= 65 && arr[i] <= 90) {
            CountBig += 1;
        }
    }
    printf("g - %hd\n", CountBig);

    // b
    for (int i = 0; i < length; ++i) {
        if (arr[i] == 111) {
            oIndex = i;
            printf("b - %hd\n", oIndex);
            break;
        }
    }

    //c
    printf("c - ");
    for (int i = 0; i < length; ++i) {
        if (arr[i] == 108) {
            arr[i] += 14;
        }
        printf("%c", arr[i]);
    }

    // f
    for (int i = length - 1; i >= 0; --i) {
        if (arr[i] == 111) {
            oIndex2 = i;
            break;
        }
    }
    printf("\nf - %hd\n", oIndex2);

    // d
    printf("d - ");
    for (int i = 0; i < length; ++i) {
        if (arr[i] == 122) {
            arr[i] -= 14;
        }
        if (arr[i] >= 97 && arr[i] <= 122) {
            arr[i] -= 32;
        }
        printf("%c", arr[i]);
    }

    // e
    for (int i = 0; i < length; ++i) {
        if (arr[i] == 32) {
            ++SpaceCount;
        }
    }
    printf("\ne - %d\n", SpaceCount);

    return 0;
}