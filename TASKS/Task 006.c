#include <stdio.h>
/*
Write a program in C to check a given number is even
or odd using the function.
*/
void type_checker()
{
        int num = 0;
        
        printf("Enter a Number:\t");
        if (scanf("%d", &num) == 1)
        {
                if ((num % 2) == 0)
                        printf("\nThe number %d is an even number.", num);
                else
                        printf("\nThe number %d is an odd number.", num);
        }
        else
                printf("\nThe data entered is not a number.");
        
}
int main(void)
{
        type_checker();
        return (0);
}