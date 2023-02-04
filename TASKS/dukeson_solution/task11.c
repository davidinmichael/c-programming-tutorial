#include <stdio.h>

/* Create a program to calculate the factorial of a number. */
int factorial(int num)
{
        if (num == 0)
                return (1);
        if (num == 1)
                return (num);
        return (num * factorial(num - 1));
}

int main(void)
{
        int num = 0;

        printf("Enter the number:\t");
        if (scanf("%i", &num))
                printf("The factorial of %d! = %d\n", num, factorial(num));
        return (0);
}