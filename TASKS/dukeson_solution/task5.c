#include <stdio.h>

/* Write a function to find the GCD (greatest common divisor) of two numbers */

int gcd_one(int num_one, int num_two)
{
	if (num_two != 0)
		return (gcd_one(num_two, num_one % num_two));
	else
		return (num_one);
}

int gcd_two(int numone, int numtwo)
{
	int i = 0;
	int gcd = 0;

	for(i = 1; i <= numone && i <= numtwo; ++i)
	{
		if(numone % i == 0 && numtwo % i == 0)
			gcd = i;
	}
	return (gcd);
}

int main(void)
{
	int first = 0, second = 0;

        printf("Enter two (2) numbers separated with a space:\t");
        scanf("%i %i", &first, &second);
	printf("\n\nFIRST METHOD\n");
	printf("Greatest Common Divisor of %d and %d:\t %d", first, second, gcd_two(first, second));
	printf("\n\nRECURSIVE METHOD\n");
	printf("Greatest Common Divisor of %d and %d:\t %d", first, second, gcd_one(first, second));
}
