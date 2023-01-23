/*write your solution after the comment
Write a function that computes the absolute
value of an integer.
Understand what an absolute value is, before attempting it.
*/

#include <stdio.h>

int absValue(int val)
{
	if(val < 0)
	{
		val = (-1) * val;
		printf("The absolute value is: %d ", val);
	}
	else
	{
		printf("the absolute value is %d", val);
	}
}

int main()
{
	int val;
	int x;

	printf("please enter a number: ");
	scanf("%d", &val);

	x = absval(val);

	printf('\n');
	return 0;
}
