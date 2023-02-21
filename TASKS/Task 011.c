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

int timesTable(int num)
{
	int x;
	for(x = 0; x <= 12; x++)
	{
		printf("%d * %d = %d \n", num, x, (num * x));
	}
}

int main()
{
	int num = 9;
	int n;

	n = timesTable(num);
	printf("Times Table of 9);

	printf('\n');
	return 0;
