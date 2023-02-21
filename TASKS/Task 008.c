/*
write your solution after the comment
Write a function that prints the alphabet, in lowercase,
followed by a new line.
*/

#include <stdio.h>

char lower(char alpha)
{
	for(alpha = 'a'; alpha <= 'z'; alpha++)
		printf("%c, \n", alpha);
}

int main()
{
	char alpha;
	char small;

	small = lower(alpha);

	printf('\n');
	return 0;
}
