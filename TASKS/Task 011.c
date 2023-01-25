/*write your solution after the comment
Write a function that prints the 9 times table,
starting with 0.
Output should look like this;
9 x 0 = 0
9 x 1 = 9
9 x 2 = 18
... and so on till 12
*/

#include <stdio.h>

int times(int t);
int main(void)
{
	times(9);
	return (0);
}

int times(int t)
{
	int y, m;

	y = 0;
	while (y < 13)
	{
	m = (t * y);
	printf("%i x %i = %i\n", t, y, m);
	y++;
	}
/*	return ();*/
}	
