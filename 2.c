#include <stdio.h>
#include <stdbool.h>

int main() 
{
    int a = 0;
    int b = 0;
    bool c = 0;

    scanf("%i", &a);
    scanf("%i", &b);

    if (a > b) {
    	c = true;
    } else {
    	c = false;
    }

    printf("%d \n", c);
}
