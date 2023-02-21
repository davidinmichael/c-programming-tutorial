/*
    Write a function that returns the value of x raised to the power of y.

    functionName(int x, int y);
*/
#include <stdio.h>

int raise_to_power(int x, int y)
{
	int power = 1;
	int i;

	for (i = 1; i <= y; i++)
	{
		power = power * x;
	}
	return power;
}

int main()
{
	int x, y;

	printf("Please input base x number: ");
	scanf("%d", &x);
	printf("Please input exponential y number: ");
	scanf("%d", &y);

	printf("%d ^ %d = %d", x, y, raise_to_power(x,y));

	printf("\n");
	return 0;
}
