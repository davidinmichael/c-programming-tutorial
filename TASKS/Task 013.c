/*Write your solution after the comment
Write a function that prints all natural numbers from n to 100,
followed by a new line.
That is n is your argument, it should print from any number
passed as argument till 100.
*/

#include <stdio.h>

int printNaturalNum(int num, int N)
{
	for(num = N; num <= 100; num++)
		printf("%d\n", num);
}

int main()
{
	int i = 100;
	int n;
	int x;

	printf("Enter your N Number: ");
	scanf("%d", &n);

	printf("Your Natural numbers from %d to %d: \n", n, i);
	x = printNaturalNum(i, n);

	printf('\n');
	return 0;
}
