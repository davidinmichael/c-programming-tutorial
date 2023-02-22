#include <stdio.h>

/* Write a function to check if a number is even or odd */

void odd_even(int num)
{
        printf("%s",(num % 2 == 0) ? "Even" : "Odd");
}

int main(void)
{
        int num = 0;

        printf("Enter a number:\t");
        if (scanf("%i", &num) == 1)
        {
                printf("%d is an ", num);
                odd_even(num);
                printf(" number\n");
        }
        else
                printf("\nYou did not provide a numeric data.\n");
        return (0);
}