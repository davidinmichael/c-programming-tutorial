#include <stdio.h>

/*
    Write a recursive function that takes an integer as
    an argument and returns the sum of all integers from
    1 to that number.

    Example
    functionName(6);

    Output:
    21      // That is; 1+2+3+4+5+6 = 21
*/

int add(int);

int main() {
    int num;
    
    num = 6;
    printf("%d\n", add(num));
    return 0;
}

/**
 * add - function to recursively add a number till it is 1
 * @num - number to add till it is 1
 * Return: the recursive sum
 */
int add(int num)
{
    if (num == 1)
        return (num);
    if (num < 1)
        return (0);
    return ( num + add(num -1));
}
