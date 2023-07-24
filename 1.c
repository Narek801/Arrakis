#include <stdio.h>

int main() 
{
	int a = 0;
	int b = 0;
	int a1 = 0;
	int b1 = 0;

	scanf("%i", &a);
	scanf("%i", &b);

	a1 = b;
	b1 = a;

	printf("%i \n", a1);
	printf("%i \n", b1);

	return 0;
}
