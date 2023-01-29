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

	if (userInput == 0)
		printf("You entered zero\n");
	else if (userInput % 2 == 0)
		printf("%d is even\n", userInput);
	else
		printf("%d is odd\n", userInput);
	
	return (0);
}	
