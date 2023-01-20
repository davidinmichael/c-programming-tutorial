#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>

/**
 * Write your program after the comment
 * Write a program that asks and reads the score of a user
 * If the score is less than 80, display to the user that they
 * are not elgible to be enrolled.
 * If the score is greater than or equal 80, they can be enrolled.
 */

int main(void)
{
        int score = 0;
	
	printf("Enter a Score:\t");
        if (scanf("%d", &score) == 1)
	{
		if (score < 80)
			printf("You cannot be enrolled.");
		else if (score >= 80)
			printf("You can be enrolled.");
	}
	else
		printf("You did not enter a numeric data.");
	return (0);  
}
