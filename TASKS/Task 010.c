/*write your solution after the comment
Write a function that computes the absolute
value of an integer.
Understand what an absolute value is, before attempting it.
*/
#include<stdio.h>
int abs(int x)
{
    int y;

    y = y * -1;
    return(y);
}

int main(void)
{
    int z = -3;
    
    abs(z);
    return(0);
}