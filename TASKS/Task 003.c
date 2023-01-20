#include <stdio.h>
#include <stdlib.h>

/**
 * Write your program after the comment
 * Write a program that reads input from user (Number)
 * If the number is Odd, display 'userInput is Odd'
 * If the number is even, display 'userInput is even'
 * If the number is zero, display 'This is zero'
 *
 * NOTE: 'userInput' should be the number entered by the user.
 */

int main(void)
{
        int num = 0;

        printf("Enter Number:\t");
        scanf("%d", &num);

        (num == 0) ? printf("Input is Zero") : ((num % 2 == 0) ? printf("Input is even") : printf("input is odd"));
        return (0);
}
