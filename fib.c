#include <stdio.h>

int foo(int Index) 
{
    if (Index == 0 || Index == 1) {
        return Index;
    }

    int num = 1;
    int tmp = 0;
    int tmp2 = 0;

    for (int i = 2; i <= Index; ++i) {
        tmp = num + tmp2;
        tmp2 = num;
        num = tmp;
    }
    return num;
}

int main(int argc, char const *argv[])
{
    int Index = 0;
    printf("Enter index of number: ");
    scanf("%d", &Index); 

    if (Index < 0) {
        return 0;
    } else {
        foo(Index);
    }
    printf("%d \n", foo(Index));
}