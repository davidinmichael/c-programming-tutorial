/*
Create a program that demonstrates the use of pointers to pass
information between functions.
*/

#include <stdio.h>

int sum_total(int *tsum, int num, int num2)
{
	int sum = 0;

	sum = num + num2;
	*tsum += sum;
	return (sum);
}

int accept_val(char *str)
{
	int num = 0;
	printf("Enter %s:\t", str);
	if (scanf("%d", &num) == 1)
		return (num);
	return (0);
}

int main(void)
{
	int sum_all = 0;
	int itr = 0;
	int n1, n2, sum;
	int itrsize = 0;

	itrsize = accept_val("Loop Size");
	printf("\n");
	for (itr = 1; itr <= itrsize; itr++)
	{
		sum = 0;
		n1 = n2 = 0;
		n1 = accept_val("First Number");
		n2 = accept_val("Second Number");
		sum = sum_total(&sum_all, n1, n2);
		printf("\n%d + %d = %d\n", n1, n2, sum);
	}
	printf("\nOverall Sum is %d\n", sum_all);
}
