/*
Write a program in C to check a given number is even
or odd using the function.
*/

#include <stdio.h>

int main(void)
{
	int number, inputCheck;

	printf("Input a number: ");
	scanf("%d", &number);
	inputCheck = number%2;

	if (inputCheck == 0)
	{
		printf("The number %d is an even number\n", number);
	}
	else if (inputCheck == 1)
	{
		printf("The number %d is an odd number\n", number);
	}
	return 0;
}


