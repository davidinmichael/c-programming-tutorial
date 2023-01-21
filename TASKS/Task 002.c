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

	printf("input your score: \n");
	scanf("%d", &score);	
	printf("your score is: %d\n", score);

	if (score < 80)
		printf("you are not eligible for this course\n");

	if (score >= 80)
		printf("congratulations, you can enrol for this course\n");

	return (0);
}
