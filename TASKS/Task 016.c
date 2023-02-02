/*Write your solution after the comment
    Write a recursive function that takes an integer as
    an argument and returns the product of all integers
    from 1 to that number.

    Example:
    functionName(6)

    Output:
    720         // That is 1x2x3x4x5x6 = 720
*/

#include <stdio.h>

int timesNumbers(int n)
{
	int product = 1, count = 0;

	for (int i = 1; i <= n; i++)
	{
		product = product * i;
		count++;
	}
	return product;
}

int main()
{
	int num;

	printf("Please input an integer: ");
	scanf("%d", &num);

	printf("The product of numbers from 1 to %d is %d", num, timesNumbers(num));

	printf("\n");
	return 0;
}
