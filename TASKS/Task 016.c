/*Write your solution after the comment
    Write a recursive function that takes an integer as
    an argument and returns the product of all integers
    from 1 to that number.

    Example:
    functionName(6)

    Output:
    720         // That is 1x2x3x4x5x6 = 720
*/
int recur_prod(int k)
{
	if (k == 0)
		return (1);
	else
		return (k * recur_prod(k - 1);
}

int main(void)
{
	int n, prod;

	printf("Enter an integer ");
	scanf("%d", &n);

	prod = recur_prod(n);
	printf("The product is %d\n", prod);
	return (0);
}
