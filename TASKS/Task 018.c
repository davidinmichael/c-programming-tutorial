/*
    Write a function that returns the value of x raised to the power of y.

    functionName(int x, int y);
*/
#include <stdio.h>
int recur_pow(int x, int y)
{
	if (y == 0)
		return (1);
	else
		return (x * (recur_pow(x, (y - 1))));
}

int main(void)
{
	int base, pow, ans;

	printf("Enter Base\n");
	scanf("%d", &base);
	printf("Enter Power\n");
	scanf("%d", &pow);

	ans = recur_pow(base,pow);
	printf("The result of %d raised to %d is %d", base, pow, ans);
	return (0);
}
