#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * Write your program after the comment
 * Write a program that asks and reads the score of a user
 * If the score is less than 80, display to the user that they are not eligible to be enrolled.
 * If the score is greater than or equal 80, they can be enrolled. 
 */

int  main(void)
{
	int score = 0;
	printf("Enter a Score:\t");
	if (scanf("%d", &score) == 1)
	{
		if (score < 80)
			printf("You are not eligible to be enrolled.");
		else if (score >= 80)
			printf("You can be enrolled.");
	}
	else
		printf("Your input is not a numeric data.");
	return 0;
}
