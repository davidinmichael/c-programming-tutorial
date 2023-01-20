 /* Write your program after the comment
Write a program that prints the alphabet in lowercase, followed by a new line.
Print all the letters except q and e
use printf
*/
#include <stdio.h>

int main() {
    char i;
    for (i = 'a'; i <='z'; ++i)
    if (i != 'e' && i != 'q')
    printf("%c", i);

    return 0;
}
