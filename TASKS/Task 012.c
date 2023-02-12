/*Write your solution after the comment
Write a function that adds two integers and prints
the result.
*/

#include <stdio.h>

int main(void)
{
	int i, j, sum;

	printf("Input the first integer: ");
	scanf("%d", &i);
	printf("Input the second integer: ");
	scanf("%d", &j);
	sum = i + j;
	printf("%d + %d = %d\n", i, j, sum);

	return 0;
}
