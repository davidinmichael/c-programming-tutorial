/* Write your program after the comment
Write a program that asks and reads the score of a user
If the score is less than 80, display to the user that they
are not elgible to be enrolled.
If the score is greater than or equal 80, they can be enrolled.
*/
#include <stdio.h>

int main(void)
{
	int score;
	int valid_input = 0;
	while (valid_input == 0)
	{
		printf("input your score: \n");
		valid_input = scanf("%d", &score);
		if (valid_input == 0)
		{
			printf("Invalid input. Please enter a number.\n");
			scanf("%*s");
		}
	}
	if (score < 80)
		printf("you are not eligible for this course\n");

	if (score >= 80)
		printf("congratulations, you can enrol for this course\n");

	return (0);
}
