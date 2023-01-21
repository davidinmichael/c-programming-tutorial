/* Write your program after the comment
Write a program that asks and reads the score of a user
If the score is less than 80, display to the user that they
are not elgible to be enrolled.
If the score is greater than or equal 80, they can be enrolled.
*/

#include <stdio.h>

int main (void)
{
	int score;

	printf("Enter your score : ");
	scanf("%d", &score);

	if (score >= 0 && score < 80)
		printf("your score is %d, wich is under 80\nYou are not eligible to enroll to the program.\n", score);
	else if (score >= 80 && score <=100)
		printf("your score is %d\nYou can enroll to the program\n", score);
	else if (score < 0 || score > 100)
		printf("Error... please enter a valid score\n");

	return (0);
}
