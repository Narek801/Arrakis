#include <stdio.h>

int main() 
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int min = 0;
	int sum = 0;

	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	scanf("%i", &d);

	sum = a + b + c + d;

	if (sum == 0) {
		if (a < b) {
			min = a;
		} else {
			min = b;
		}

		if (c < min) {
			min = c;
		} 

	  	if (d < min) {
			min = d;
		}	

		printf("%i \n", min);
	}

	return 0;
}
