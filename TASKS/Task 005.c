#include <stdio.h>

/**
 * Write a program in C to find the square of any number
 * using the function.
 */

 void return_square()
 {
        int num = 0, result;

        printf("Enter a Number:\t");
        if (scanf("%d", &num) == 1)
                result = (num * num);
        else
                result = 0;
        if (result == 0)
                printf("\nThe data entered is not a number. The result is %d", result);
        else
                printf("\nThe square of %d = %d", num, result);
 }

 int main(void)
 {
        return_square();
        return (0);
 }