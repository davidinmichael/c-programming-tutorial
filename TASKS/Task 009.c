/*write your solution after the comment
Write a function that checks for lowercase character.
That is, when passed in an arguments, it checks if the
argument is lowercase or uppercase.
*/

#include <stdio.h>

int main(void)
{
	char input;

	printf("Input a character: ");
	scanf("%c", &input);

	if (input >= 'a' && input <= 'z')
	{
		printf("This is a lowercase letter\n");
	}
	else if (input >= 'A' && input <= 'Z')
	{
		printf("This is an uppercase letter\n");
	}
	else
	{
		printf("This character is not a letter!\n");
	}
	return 0;
}
