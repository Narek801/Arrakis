#include <stdio.h>

int main() 
{
	int i = 0;

	printf("Enter the number: ");
	scanf("%d", &i);
	
	if (i % 2 == 0) {
		for (i = 0; i <= 100; ++i) {
			printf("%d \n", i);
		}
	} else {
		for (i = 100; i >= 0; --i) {
			printf("%d \n", i);
		}
	}

	return 0;
}
