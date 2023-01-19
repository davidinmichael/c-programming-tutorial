/* Write your program after the comment
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e

use printf
*/

#include <stdio.h>

int main(void)
{
    char LowerAlpha;
    
    for (LowerAlpha = 'a'; LowerAlpha >= 'z'; LowerAlpha++)
    {
        if (LowerAlpha != 'e' || LowerAlpha != 'q')
            printf("%c", LowerAlpha)
    }
    printf("\n")
    return;
}