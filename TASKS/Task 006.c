/*
Write a program in C to check a given number is even
or odd using the function.
*/

#include <stdio.h>

int EvenOrOdd(int num)
{
	if(num % 2 == 0)
	{
		printf("The number s an even number");
	}
	else
	{
		printf("The number is an odd number");
	}
}

int main()
{
	int num;
	int n;

	printf("Please input a whole number: ");
	scanf("%d", &num);

	n = EvenOrOdd(num);

	printf('\n');
	return 0;
}
