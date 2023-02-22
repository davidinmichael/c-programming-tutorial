#include <stdio.h>

/*
    Write a function that returns the value of x raised to the power of y.

    functionName(int x, int y);
*/

int get_power(int x, int y)
{
    if (y < 0)
        return ((double)(1.0/(x * get_power(x, (-1) * (y + 1)))));
    else if (y == 0)
        return (1);
    else if (y == 1)
        return (x);
    else
        return (x * get_power(x, (y - 1)));
}

int main() {
    int x, y;
    
    x = y = 0;
    printf("Enter 2 Numbers separated by a space:\t");
    scanf("%d %d", &x, &y);
    
    printf("%d\n", get_power(x, y));
    return 0;
}
