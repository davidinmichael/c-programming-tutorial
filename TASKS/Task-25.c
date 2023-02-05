/*
Declare two integer variables and swap their values using a pointer.
*/
#include <stdio.h>

int main()
{
	int a = 6;
	int b = 2;
	int *temp;

	*temp = a;
	a = b;
	b = *temp;

	printf("%d %d", a, b);

	return (0);
}
