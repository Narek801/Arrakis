#include <stdio.h>

int main() 
{
	int x = 0;
	int y = 0;
	int z = 0;
	int max = 0;

	scanf("%i", &x);
	scanf("%i", &y);
	scanf("%i", &z);

	if (x > y) {
		max = x;
	} else if (x < y) {
		max = y;
	} 

	if (z > max) {
		max = z;
	}

	printf("%i \n", max);

	return 0;
}
