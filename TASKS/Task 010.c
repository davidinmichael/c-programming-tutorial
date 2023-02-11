/*write your solution after the comment
Write a function that computes the absolute
value of an integer.
Understand what an absolute value is, before attempting it.
*/


#include <stdio.h>

int abs(int num);

int abs(int num)
{
    if (num < 0)
    {
        num = -(num);
    }
    return (num);
}

int main()
{
    int a = 89;
    int c = -98;
    int b = abs(a);
    int d = abs(c);

    printf("The absolute value of %d is %d\n", a, b);
    printf("The absolute value of %d is %d\n", c, d);
    return (0);
}
