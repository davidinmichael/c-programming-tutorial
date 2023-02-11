/*
write your solution after the comment
Write a function that prints the alphabet, in uppercase,
followed by a new line.
*/

#include <stdio.h>

void print_ALPHA(char c);

void print_ALPHA(char c)
{
    c = 'A';

    while (c <= 'Z')
    {
        printf("%c", c);
        c++;
    }
    printf("\n");
}
