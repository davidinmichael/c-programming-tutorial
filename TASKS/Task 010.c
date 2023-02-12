/*write your solution after the comment
Write a function that computes the absolute
value of an integer.
Understand what an absolute value is, before attempting it.
*/

#include <stdio.h>

int main(void)
{
	int n, result;

	printf("Input a number: ");
	scanf("%d", &n);

	if (n >= 0)
	{
		result = n;
	}
	else if (n < 0)
	{
		result = -n;
	}

	printf("The absolute value of %d is %d\n", n, result);
	return 0;
}
