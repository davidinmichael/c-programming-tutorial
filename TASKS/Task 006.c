/*
Write a program in C to check a given number is even
or odd using the function.
*/

#include <stdio.h>
int checkEven(int a)
{
    
    
    if (a % 2 == 0)
    {
        printf("%d is an Even number", a);
    }
    else 
    {
        printf("%d is an Odd number", a);
    }
}
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    
    checkEven(num);
