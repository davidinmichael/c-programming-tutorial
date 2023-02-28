/*
Write a program in C to check a given number is even
or odd using the function.
*/
// Online C compiler to run C program online
#include <stdio.h>
void even_or_odd()
{
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num))
    {
        if (num%2 == 0)
        printf("%d is an even number\n",num);
        else
        printf("%d is an odd number\n", num);
    }
}
int main (void)
{
    even_or_odd();
    return (0);
}
