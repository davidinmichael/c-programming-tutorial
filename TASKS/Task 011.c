#include <stdio.h>

/*write your solution after the comment
Write a function that prints the 9 times table,
starting with 0.
Output should look like this;
9 x 0 = 0
9 x 1 = 9
9 x 2 = 18
... and so on till 12
*/

/**
 * main - checks code
 * nine_times - prints the nine times table starting with zero
 * Return: 0
 */

void nine_times()
{
	int num = 9;
	int times;
	int ans;

	for (times = 0; times <= 12; times++)
	{
		ans = num * times;
		printf("%d x %d = %d\n", num, times, ans);
	}
}


int main(void)
{
	nine_times();
	return (0);
}
