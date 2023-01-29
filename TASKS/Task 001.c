/* Write your program after the comment
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e

use printf
*/
#include <stdio.h>

int main(void)
{
    char alpha;

    for (alpha = 'a'; alpha <= 'z'; alpha++)
    {
        if (alpha != 'e' && alpha != 'q')
            printf("%c ", alpha);
    }
    printf("\n");
    return(0);
}
