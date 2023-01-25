/*write your solution after the comment
Write a function that computes the absolute
value of an integer.
Understand what an absolute value is, before attempting it.
*/

#include <stdio.h>

int absolute(int a);
int main(void)
{
	int ab;
	int a;
	
	printf("Enter any digit ");
	scanf("%i", &ab);

	printf("The abolute value of the digit you entered is %d\n", absolute(ab));
	a = absolute(8);
	printf("%i", a);
	putchar('\n');
	a = absolute(190);
	printf("%i", a);
	putchar('\n');
	a = absolute(0);
	printf("%i", a);
	putchar('\n');
	a = absolute(-2);
	printf("%i", a);
	putchar('\n');
	return (0);
}

int absolute(int a)
{
	if (a < 0)
	{
		return (a * (-1));
	}
	else if (a >= 0)
	{
		return (a);
	}
	putchar('\n');
	return (a);
}
