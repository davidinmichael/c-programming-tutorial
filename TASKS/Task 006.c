/*
Write a program in C to check a given number is even
or odd using the function.
*/

#include <stdio.h>

int even_odd(int num);
int even_odd(int num)
{
    if ((num % 2) == 0)
    {
        return (0);
    }
    else
    {
        return (1);
    }
}
int main()
{
    int a;
    int num;

    for (num = 0; num <= 10; num++)
    {
        a = even_odd(num);
        if (a == 0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
        if (num < 10)
        {
            printf(", ");
        }
    }
    return (0);
}
