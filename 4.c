#include <stdio.h>

int main() 
{
	int a = 0;
	int b = 0;

	printf("Enter the first number: ");
	scanf("%i", &a);
	printf("Enter the second number: ");
	scanf("%i", &b);

	if (a > b) {
		printf("%i \n", a);
	} else if (a < b) {
		printf("%i \n", b);
	} else {
		printf("Numbers are even \n");
	}

	return 0;
}
