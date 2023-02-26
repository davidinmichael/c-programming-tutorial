#include <stdio.h>

/**
 * main - entry point
 * a program that calcules the amount of pie that can be
 * made with an apple fruit
 * Return: returns 0
 */

int main(void)
{
	int fruit;
	int banana;
	int apple;
	int pie;

	printf("Enter the amount of fruits on the bowl: ");
	scanf("%d", &fruit);

	if (fruit >= 6)
	{
	apple = fruit / 2;
	banana = fruit / 2;
	pie = apple / 3;
	printf("%d\n", pie);
	}
	else
	{
	printf("Unknoun amount");
	}
	return (0);
}
