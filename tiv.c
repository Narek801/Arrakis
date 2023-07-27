#include <stdio.h>

int main()
{
	int a = 0;

	printf("Enter the number: ");
	scanf("%i", &a);

	if (a % 2 == 0) {
		printf("Even\n");
	} else {
		printf("Odd \n");
	}

	return 0;
}
