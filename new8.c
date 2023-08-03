#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;

	printf("Enter the number: ");
	scanf("%d", &a);

	while (a != 0) {
		b = a % 10;
		a = a / 10;
		printf("%d \n", b);
	}
	return 0;
}
