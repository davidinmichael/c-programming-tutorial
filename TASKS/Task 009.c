#include <stdio.h>

/*write your solution after the comment
Write a function that checks for lowercase character.
That is, when passed in an arguments, it checks if the
argument is lowercase or uppercase.
*/

/**
 * main - checks function
 * check_case - checks for lowercase character
 * Return: 0;
 */

void check_case(char alpha)
{
//	printf("Enter an alphabet\n");
//	scanf("%c", &alpha);

	if (alpha >= 97 && alpha <= 122)
		printf("%c is lowercase\n", alpha);
	else if (alpha >= 65 && alpha <= 90)
		printf("%c is uppercase\n", alpha);
	else
		printf("%c is not an alphabet\n", alpha);
}
int main(void)
{
	check_case('a');
	check_case('6');
	check_case('B');
	check_case('-');
	return (0);
}
