/*Write your solution after the comment
Write a function that adds two integers and prints
the result.
*/
#include<stdio.h>
int add_int(int x, int y)
{
    return(x + y);
}

int main(void)
{
    add_int(4, 5);
    printf("the addition of %d and %d is %d", 4, 5, add_int(4,5));
}