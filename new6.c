#include <stdio.h>

int main()
{
	int num = 0;
	char Name[30];

	printf("Enter the quantity; ");
	scanf("%d", &num);
	printf("Enter your name: ");
	scanf("%s", &Name);

	for (int i = 0; i <= num; ++i) {
		printf("%s \n", Name);
	}

	return 0;
}
