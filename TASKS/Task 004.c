/* Write your program after the comment
Write a program that asks and reads the following input from a user;
Your name
Your age
and then displays; Your name is 'name' and you are 'age' years old.

Example;
what is your name: David
How old are you?: 65

Output:
Your name is David and you are 65 years old.

*/

#include <stdio.h>

int main(void)
{
	char name[10];
	int age, y;

	printf("What is your name?\nHow old are you? \n");
	scanf("%s %d", name,  &age);

	printf("Your name is %s and you are %d years old.\n", name, age);
	return (0);
}

