/*
Write a program in C to check a given number is even
or odd using the function.
*/

#include <stdio.h>

void check(int c);
int main(void)
{
	int a;

	printf("Enter any number: ");
	scanf("%d", &a);

	check(a);
	return (0);
}

void check(int c)
{
	if ((c % 2) != 0)
		printf("This number is an odd number\n");
	else
		printf("This number is a  even number\n");
}
