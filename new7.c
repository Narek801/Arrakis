#include <stdio.h>

int main()
{	
	int a = 0;

	for (int i = 0; i <= 100; ++i) {
		a = i * i;
		printf("%d \n", a);
	}

	return 0;
}
