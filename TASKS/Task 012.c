/*Write your solution after the comment
Write a function that adds two integers and prints
the result.
*/

#include <stdio.h>

int add(int a, int b)
{
    int sum;
    sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
}

int main()
{
    int n1, n2;
    printf("Enter two numbers to add\n");
    scanf("%d \n %d", &n1, &n2);
    
    add(n1, n2);
}
