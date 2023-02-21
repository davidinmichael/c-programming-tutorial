/*
    Write a recursive function that takes an integer as
    an argument and returns the sum of all integers from
    1 to that number.

    Example
    functionName(6);

    Output:
    21      // That is; 1+2+3+4+5+6 = 21
*/

#include <stdio.h>

int addNumbers(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	int num;

	printf("Please input an integer: ");
	scanf("%d", &num);

	printf("The sum of numbers from 1 to %d is %d", num, addNumbers(num));

	printf("\n");
	return 0;
}
