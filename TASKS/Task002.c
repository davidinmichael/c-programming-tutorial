#include <stdio.h>

/**
 * main - Entry point 
 * Return: always 0 (success)
 */
int main(void)
{
	int score;

	printf("Please enter your score: ");
	scanf("%d", &score);

	if (score < 80)
	{
	printf("You are not elgible to be enrolled\n");
	}
	else if (score >= 80)
	{
	printf("You are elgible to enroll\n");
	}
	return (0);
}
