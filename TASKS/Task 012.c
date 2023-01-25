/*Write your solution after the comment
Write a function that adds two integers and prints
the result.
*/

#include <stdio.h>

int add(int a, int b);
int main(void)
{
	int r, y, m;

	m = r + y;
	printf("Enter any two digits you would like to add ");
	scanf("%d%d", &r, &y);

	m = r + y;
	printf("The sum of the digits you entered is %d\n", m);
	m = add(5, 10);
	printf("%d\n", m);
	m = add(-16, 20);
	printf("%d\n", m);
	return (0);
}
int add(int a, int b)
{
	int t;

	t = a + b;
	return (t);
}
