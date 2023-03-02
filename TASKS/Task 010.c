/*write your solution after the comment
Write a function that computes the absolute
value of an integer.
Understand what an absolute value is, before attempting it.
*/
#include <stdio.h>

int abs(int x) {
    return x < 0 ? -x : x;
}

int main() {
    int x = -5;
    printf("The absolute value of %d is %d.\n", x, abs(x));
    return 0;
}
