#include <stdio.h>

int main ()
{
	int a = 0;
	int b = 0;
	char opCode = '+';

	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("Enter the operation (+, -, *, /): ");
	scanf(" %c", &opCode);

	if (opCode == '+') {
		printf("%d \n", a + b);
	} else if (opCode == '-') {
		printf("%d \n", a - b);
	} else if (opCode == '*') {
		printf("%d \n", a * b);
	} else if (opCode == '/') {
		if (b != 0) {
			printf("%d \n", a / b);
		} else {
			printf("The divisor cannot be zero!\n");
		}
	} else {
		printf("Unknown operation\n");
	}

	return 0;
}	
