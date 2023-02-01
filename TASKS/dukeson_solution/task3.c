#include <stdio.h>

/* Write a function to find the factorial of a number */

int get_factorial(int a)
{
        if (a == 0)
                return (1);
        if (a == 1)
                return (a);
        return (a * get_factorial(a - 1));
}

int main(void)
{
        int num = 0;

        printf("Enter a number:\t");
        if (scanf("%i", &num) == 1)
                printf("%d! is %d\n", num, get_factorial(num));
        else
                printf("\nYou did not provide a numeric data.\n");
        return (0);
}