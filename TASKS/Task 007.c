/*
write your solution after the comment
Write a function that prints the alphabet, in uppercase,
followed by a new line.
*/

#include <stdio.h>

char upper(char alpha)
{
	for(alpha = 'A'; alpha <= 'Z'; alpha++)
		printf("%c, \n", alpha);
}

int main()
{
	char alpha;
	char big;

	big = upper(alpha);

	printf('\n');
	return 0;
}
