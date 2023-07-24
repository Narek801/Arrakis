#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool a = 0;
	bool b = 1;
	bool c = 0;
	bool d = 1;

	if (a && b) {
		printf("a and b are 1 \n");
	} else if (a || b) {
		printf("one of the numbers is 0 \n");
	} 

	if (a || b || c) {
		printf("one of the numbers is definitely 1");
	} 

	return 0;
}
