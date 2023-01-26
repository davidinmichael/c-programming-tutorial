#include <stdio.h>

/*A program that prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 * use printf
*/

int main ()
{
	char apl;


	for (apl = 'a'; apl <= 'z'; apl != 'e'; apl != 'q'; apl++)
	{
		printf ("%c", apl);
	}


	return	(0);
}
