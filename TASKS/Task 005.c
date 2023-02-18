/*
 Write a program in C to find the square of any number
using the function.
*/

#include <stdio.h>
#include <math.h>

int main() 
{
    int x;
    printf("Enter a number to find the square root\n");
    scanf("%d", &x);
    
    float res;
    res = sqrt(x);   
    printf (" The square root of %d is: %.2f", x, res); 

    return 0;
}
