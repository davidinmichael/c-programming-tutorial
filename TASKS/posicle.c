#include <stdio.h>

/**
 * main - Entry point
 * A program that detrmines whether to give away or keep a popsicles
 * Return: returns 0 (sucess)
 */

int main(void)
	
{
	int popsicle;
	int sibling;

	printf("Enter the amount of popsicles: ");
	scanf("%d", &popsicle);

	printf("Enter the number of siblings: ");
	scanf("%d", &sibling);

	if (popsicle % 2 == 0 && sibling % 2 == 0)
	{
	printf("Give away\n");
	}
	else
	{
	printf("Eat them yourself\n");
	}
	return (0);
}
