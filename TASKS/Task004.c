#include <stdio.h>

/**
 * main - entry point
 * Return: 0 (sucess)
 */

int main(void)
{
	char name[20];
	int age;

	printf("What is your name: ");
	scanf("%s", name);
	printf("How old are you?: ");
	scanf("%d", &age);
	printf("Your name is %s and your are %d years old.\n", name, age);

	return (0);
}
