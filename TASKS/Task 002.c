/* Write your program after the comment
Write a program that asks and reads the score of a user
If the score is less than 80, display to the user that they
are not elgible to be enrolled.
If the score is greater than or equal 80, they can be enrolled.
*
*/

#include <stdio.h>

int main(void)
{
	int score;
	
	printf("Please enter your score:");
	scanf("%d", &score);
	
	if (score < 80)
	{
		printf("Sorry, you are not eligible to be enrolled,try again");
	}
	else if (score >= 80)
	{
		printf("Congratulations, you have been enrolled);
	}
	printf('\n');
	return 0;
}
