/* Write your program after the comment
Write a program that asks and reads the following input from a use;
Your name
Your age
and then displays; Your name is 'name' and you are 'age' years old.

Example;
what is your name: David
How old are you?: 65

Output:
Your name is David and you are 65 years old.

*/

/**
 * main - checks code
 * Return: zero
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[50];
	int age;

	printf("Please enter your name: \n");
	scanf("%s \n", name);

	printf("input your age: \n");
	scanf("%d \n", &age);

	printf("Your name is %s and you are %d years old\n", name, age);

	return (0);
}
