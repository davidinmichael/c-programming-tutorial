/*
    Write a function that returns the value of x raised to the power of y.

    functionName(int x, int y);
*/

#include <stdio.h>

int power(int x, int y)
{
    int ans = 1;
    while (y != 0)
    {
       ans *= x;
       --y;
    }
    return (ans);
}

int main()
{
    int n1, n2, result;
    printf("Enter a base number: ");
    scanf("%d", &n1);
    printf("Enter an exponential: ");
    scanf("%d", &n2);

    result = power(n1, n2);
    printf("%d ^ %d = %d", n1, n2, result);
    
 return (0);   
}
