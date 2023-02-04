/*
Declare two integer variables and swap their values using a pointer.
*/
#include <stdio.h>

void swapper(int *n, int *m)
{
	int temp;

	temp = *n;
	*n = *m;
	*m = temp;
}

int main(void)
{
	int n_one;
	int n_two;

	printf("Enter two (2) numbers separated by a space:\t");
	scanf("%d %d", &n_one, &n_two);
	printf("Before Swap\n");
	printf("Number 1:\t%d\nNumber 2:\t%d\n", n_one, n_two);
	swapper(&n_one, &n_two);
	printf("After Swap\n");
	printf("Number 1:\t%d\nNumber 2:\t%d\n", n_one,     n_two);

	return (0);
}
