#include <stdio.h>

/*write your solution after the comment
Write a function that computes the absolute
value of an integer.
Understand what an absolute value is, before attempting it.
*/
int get_absolute(int num)
{
        if (num < 0)
                num *= -1;
        return (num);
}

int main(void)
{
        int num = 0;
        int result = 0;

        printf("Enter a Number:\t");
        if (scanf("%d", &num) == 1)
        {
                result = get_absolute(num);
                printf("The absolute value of %d = %d", num, result);
        }
        else
                printf("\nThe data entered is not a number.");

        return (0);
}