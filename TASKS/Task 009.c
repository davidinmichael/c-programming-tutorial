/*write your solution after the comment
Write a function that checks for lowercase character.
That is, when passed in an arguments, it checks if the
argument is lowercase or uppercase.
*/

#include <stdio.h>

void check(char a);
int main(void)
{
	char r;

	printf("Enter any letter: ");
	scanf("%c", &r);

	check(r);
	check('r');
	check('J');
	return (0);
}

void check(char a)
{
	if (a >= 'a' && a <= 'z')
	{
		printf("%c is lower\n", a);
	}
	else if (a >= 'A' && a <='Z')
	{
		printf("%c is upper\n", a);
	}
}
