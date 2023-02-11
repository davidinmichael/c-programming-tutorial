/* Write your program after the comment
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e

use printf
*/
#include <stdio.h>

int main()
{
    char alpha = 'a';

    while (alpha <= 'z')
    {
        if (alpha == 'q' || alpha == 'e')
        {
            alpha++;
        }
        printf("%c", alpha);
        alpha++;
        if (alpha <= 'z')
        {
           printf(", ");
        }

    }
    return (0);
}

