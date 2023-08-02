#include <stdio.h>

int main() 
{
	int a = 100;

	do {
		printf("%d \n", a);
		--a;
	} while (a >= 0);

	return 0;
}
