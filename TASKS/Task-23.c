#include <stdio.h>

/*
Create a program that uses pointers to find the maximum value stored
in an array.
*/
/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int num;
	int i;
	int *s;
	int highest = 0;


	printf("How many values do you wish to input? \n");
	scanf("%d", &num);

	printf("Input your values here: \n");


	for (i = 0; i < num; i++)
	{
		scanf("%d", &s[i]);
		{
			if (s[i] < highest)
			{
				continue;
			}
			else
			{
				highest = s[i];
			}
		}
	}
	printf("The maximum value of your array is: %d\n", highest);

	return (0);
}
