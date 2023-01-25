/*Write your solution after the comment
Write a function that prints all natural numbers from n to 100,
followed by a new line.
That is n is your argument, it should print from any number
passed as argument till 100.
*/

#include <stdio.h>

void natural(int a);
int main(void)
{
	natural(10);
	natural(100);
	natural(101);
	natural(150);
	natural(0);
	natural(-10);
	natural(-110);
	return (0);
}

void natural(int a)
{
	if (a > 100)
	{
		while (a >= 100)
		{
			printf("%d", a);
			printf(" ");
			a--;
		}
	}
	else if (a < 100)
	{
		while (a <= 100)
		{
			printf("%d", a);
			printf(" ");
			a++;
		}
	}
		else
			printf("%d", a);
		printf("\n");
}
