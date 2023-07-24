#include <stdio.h>

int main() 
{
	int a = 0;
	int b = 0;
	int c = 0;
	int min = 0;

	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);

	if (a < b) {
		min = a;
	} else {
		min = b;
	}

	if (c < min){
		min = c;
	}

	printf("%i \n", min);

	return 0;
}
