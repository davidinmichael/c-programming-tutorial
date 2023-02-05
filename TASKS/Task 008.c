/*write your solution after the comment
Write a function that prints the alphabet, in lowercase
followed by a new line.
*/

#include <stdio.h>

void print_alpha(char c);

void print_ALPHA(char c)
{
    c = 'a';

    while (c <= 'z')
    {
        printf("%c", c);
        c++;
    }
    printf("\n");
}

