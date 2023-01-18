#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

/* Write your program after the comment
Write a program that reads input from user (Number)
If the number is Odd, display 'userInput is Odd'
If the number is even, display 'userInput is even'
If the number is zero, display 'This is zero'

NOTE: 'userInput' should be the number entered by the user.

*/

int main(void)
{
	int userInput;

	printf("Enter a number: \n");
	scanf("%d", &userInput);
	if (userInput == 0)
		printf("userInput is zero.\n");
	else if (userInput % 2 == 0)
		printf("userInput is even\n");
	else
		printf("userInput is odd\n");
	return (0);
}
