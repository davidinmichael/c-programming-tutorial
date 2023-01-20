/* Write your program after the comment
Write a program that reads input from user (Number)
If the number is Odd, display 'userInput is Odd'
If the number is even, display 'userInput is even'
If the number is zero, display 'This is zero'

NOTE: 'userInput' should be the number entered by the user.

*/
#include <stdio.h>

int main (void)
{
	int num;

	printf("Enter a number : ");
	scanf("%d", &num);

	if (num == 0)
		printf("%d is Zero\n", num);
	else if (num % 2 == 0)
		printf("%d is Even\n", num);
	else
		printf("%d is Odd\n", num);

	return (0);
}
