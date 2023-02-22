#include <stdio.h>

/**
 * main - Entry point
 * Return: return 0 sucess
 */

int main(void)
{
	int num;

	printf("Please input a number: ");
	scanf("%i", &num);

	if (num % 2 == 0)
	{
	printf("User Input is even\n");
	}
	else if (num % 2 == 1)
	{
	printf("User Input is odd\n");
	}
	else if (num == 0)
	{
	printf("This is Zero\n");
	}

	return (0);
}
