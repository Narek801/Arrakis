#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int size = 10;
    char ch[size];

    scanf("%s", &ch);

    for (int i = 1; i < size; i += 2) {
        if (ch[i] >= 'a' && ch[i] <= 'z') {
            ch[i] -= 32;
        }
    }

    printf("%s", ch);
    return 0;
}
