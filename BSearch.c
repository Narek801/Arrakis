#include <stdio.h>
#include <stdlib.h>

int* create(int);
void scan(int*, int);
void print(int*, int);
int Binary(int*, int, int, int);

int main() 
{
    int target = 0;
    printf("Enter the number: ");
    scanf("%i", &target);

    int size = 5;
    int* ptr = create(size);
    scan(ptr, size);
    print(ptr, size);

    int start = 0;
    int end = size - 1;
    int result = Binary(ptr, start, end, target);

    if (result == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index: %d\n", result);
    }

    free(ptr);
    ptr = NULL;
}

int* create(int size) {
    int* arr = (int*) malloc (size * sizeof(int));
    if (arr == NULL) {
        return NULL;
    }
    return arr;
}

void scan(int* ptr, int size) {
    for (int i = 0; i < size; ++i) {
        scanf("%i", (ptr + i));
    }
}

void print(int* ptr, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%i ", *(ptr + i));
    }
    printf("\n");
}

int Binary(int* arr, int start, int end, int target) {
    if (start > end) {
        return -1;
    }
    int mid = (start + end) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] < target) {
        return Binary(arr, mid + 1, end, target);
    } else {
        return Binary(arr, start, mid - 1, target);
    }
}