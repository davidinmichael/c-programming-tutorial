/*
    Write a recursive function that takes an integer as
    an argument and returns the sum of all integers from
    1 to that number.

    Example
    functionName(6);

    Output:
    21      // That is; 1+2+3+4+5+6 = 21
*/
int recur_add(int k)
{
	if (k == 0)
		return (0);
	else
		return (k + recur_add(k - 1));
}

int main(void)
{
	int n, add;

	printf("Enter an integer\n");
	scanf("%d", &n);

	add = recur_add(n);
	printf("The addition is %d\n", add);
	return (0);
}
