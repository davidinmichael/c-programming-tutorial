/*Write your solution after the comment
Write a function that prints all natural numbers from n to 100,
followed by a new line.
That is n is your argument, it should print from any number
passed as argument till 100.
*/

#include <stdio.h>

int main()
{
	unsigned int n, i;

	printf("Input the starting integer: ");
	scanf("%d", &n);

	for (i = n; i < 100; i++)
	{
		printf("%d ", i);
	}
	if (i == 100)
		printf("%d\n", i);
	return 0;
}
