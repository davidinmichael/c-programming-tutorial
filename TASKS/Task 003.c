/* Write your program after the comment
Write a program that reads input from user (Number)
If the number is Odd, display 'userInput is Odd'
If the number is even, display 'userInput is even'
If the number is zero, display 'This is zero'

NOTE: 'userInput' should be the number entered by the user.

*/
#include <stdio.h>

int main(void)
{
	int userInput;

	printf("input a number\n");
	scanf("%d\n", &userInput);

	if (userInput % 2 == 0 && userInput != 0)
		printf("userInput is even\n");
	if (userInput % 2 == 1)
		printf("userInput is Odd\n");
	if (userInput == 0)
		printf("userInput is zero\n");
	
	return (0);
}	
