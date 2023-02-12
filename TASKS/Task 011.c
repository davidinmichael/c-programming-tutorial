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

int main(void)
{
	int i, result;

	for (i = 0; i <= 12; i++)
	{
		result = 9 * i;
		printf("9 x %d = %d\n", i, result);
	}
	return 0;
}
