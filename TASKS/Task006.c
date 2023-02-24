#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (sucess)
 */

int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
	printf("The number is even\n");
	}
	else
	{
	printf("The number id odd\n");
	}
}
