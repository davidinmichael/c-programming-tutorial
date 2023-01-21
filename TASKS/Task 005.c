/*
 Write a program in C to find the square of any number
using the function.
*/

#include <stdio.h>

int sqr(int num)
{
    return num * num;
}
int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = sqr(num);
    printf("Square of %d is %d", num, result);

    return 0;
}
