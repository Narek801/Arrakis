#include <stdio.h>

int main() 
{
	int a = 0;
	int b = 0;

	scanf("%d", &a);
	scanf("%d", &b);

	if (a < b) {
		printf("%d \n", a);
	} else if (a > b) {
		printf("%d \n", b);
	} else {
		printf("Numbers are even \n");
	}

	return 0;
}
