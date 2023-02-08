/*
    Write a recursive function that takes an integer as
    an argument and returns the sum of all integers from
    1 to that number.

    Example
    functionName(6);

    Output:
    21      // That is; 1+2+3+4+5+6 = 21
*/
#include <stdio.h>

int sumAll(int n) {
    if (n == 1) {
        return 1;
    }
    return n + sumAll(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The sum of integers from 1 to %d is %d", num, sumAll(num));
    return 0;
}
