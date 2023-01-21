/* Write your program after the comment
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e

use printf
*/
#include <stdio.h>
int main (void)
{
printf("Alpahbet letters in lowercase from a to z : \n");
char c;
for (c = 97; c <= 122; c++)
	printf("%c ",c);
putchar('\n');

printf("Alpahbet letters in lowercase from a to z exept e and q : \n");
for (c = 97; c <= 122; c++)
	if (c != 'e' && c != 'q')
		printf("%c ",c);
putchar('\n');

return (0);
}
