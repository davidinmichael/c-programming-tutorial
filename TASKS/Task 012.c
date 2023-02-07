/*Write your solution after the comment
Write a function that adds two integers and prints
the result.
*/

#include <stdio.h>
int absNum(int n)
{
    int abs;
    if (n < 0)
    {
        abs = n - n - n;
        printf("The absolute of %d is %d", n, abs);
    }
    else
    {
        printf("The absolute of %d is %d", n, n);
    }
}

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    
    absNum(num);
    
    return (0);
}
