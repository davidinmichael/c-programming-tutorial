/*
Write a program in C to check a given number is even
or odd using the function.
*/

#include <stdio.h>

int main(void)
{
	int num;
	
	printf("Please enter a number: ");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("%d is even \n", num);
	}
	else 
		printf("%d is odd \n", num);
}
