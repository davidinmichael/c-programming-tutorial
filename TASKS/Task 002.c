/* Write your program after the comment
Write a program that asks and reads the score of a user
If the score is less than 80, display to the user that they
are not elgible to be enrolled.
If the score is greater than or equal 80, they can be enrolled.
*/
#include <stdio.h>

/**
 * main - A program to reads user scores
 *
 * Return: 0 (success)
 */
int main(void)
{
	int myScore;
	
	/*Ask the student to input score*/
	printf("Type in your score please: \n");
	/*Get and save the number the student types*/
	scanf("%d", &myScore);
	/*Output the number the user typed*/
	printf("Your score is : %d\n", myScore);
	
	if (myScore >= 80)
	{
		printf("Congratulations you have met the cut off\n");
	}
	else if (myScore < 80)
	{
		printf("You are not eligible to continue with the program\n");
	}
	return (0);
}
