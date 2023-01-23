/*Write your solution after the comment
Write a function that adds two integers and prints
the result.
*/

int add(int num, int num2)
{
	int sum = num + num2;
	printf("Therefore, %d + %d = %d \n", num, num2, sum);
}

int main()
{
	int first;
	int second;
	int n;

	printf("Please enter the first Integer: ");
	scanf("%d", &first);
	printf("Please enter the second Integer: ");
	scanf("%d", &second);

	n = add(first, second);

	printf('\n');
	return 0;
}
