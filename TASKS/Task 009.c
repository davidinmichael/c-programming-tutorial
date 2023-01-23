/*write your solution after the comment
Write a function that checks for lowercase character.
That is, when passed in an arguments, it checks if the
argument is lowercase or uppercase.
*/

#include <stdio.h>

char lowerOrUpper(char alpha)
{
	if(alpha >= 'A' && alpha <= 'Z')
	{
		printf("This is an uppercase character");
	}
	else if(alpha >= 'a' && alpha <= 'z');
	{
		printf("This is a lowercase character");
	}
	else
	{
		printf("This is not a character");
	}
}

int main()
{
	char alpha;
	char x;

	printf("Please input a character: ");
	scanf("%c", &alpha);

	x = lowerOrUpper(alpha);

	printf('\n');
	return 0;
}
