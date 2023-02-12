#include <stdio.h>
/*
Write a program in C to check a given number is even
or odd using the function.
*/

/**
 * main - tests the function
 * parity_checker
 * Return: 0
 */

void parity_checker()
{
	int num;

	printf("Enter a number\n");

	if (scanf("%d", &num) == 1)
	{
		if (num % 2 == 0)
		{
			printf("%d is an even number\n", num);
		}
		else
		{
			printf("%d is an odd number\n", num);
		}
	}
	else
	{
		printf("You have not entered a valid number\n");
	}
}

int main(void)
{
	parity_checker();

	return(0);
}
