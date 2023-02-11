/*Write your solution after the comment
Write a function that adds two integers and prints
the result.
*/

#include <stdio.h>

int add(int a, int b);

int add(int a, int b)
{
    int sum;

    sum = a + b;
    return (sum);
}

int main()
{
    int sum1 = add(5, 7);
    int sum2 = add(8, 2);
    printf("%d\n%d\n", sum1, sum2);
    return (0);
}
