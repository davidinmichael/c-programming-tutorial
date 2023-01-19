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

	printf("Please enter your magic number ");
	scanf("%d", &userInput);

	if ((userInput % 2) == 0)
		printf("Your magic number is even!\n");
	else if ((userInput % 2) == 1)
		printf("Your magic number is odd!\n");
	else
		printf("This is zero\n");
	return (0);
}
