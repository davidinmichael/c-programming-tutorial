#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

/* Write your program after the comment
Write a program that asks and reads the score of a user
If the score is less than 80, display to the user that they
are not elgible to be enrolled.
If the score is greater than or equal 80, they can be enrolled.
*/

int main(void)
{
	int score;

	printf("Enter your score:\n");
	scanf("%d", &score);

	if (score >= 80)
		printf("Congratulations! You are eligible to enrol in the program.\n");
	else
		printf("You are not eligible to be enrolled in the program.\n");
	return (0);
}
