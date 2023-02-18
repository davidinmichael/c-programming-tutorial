/*
write your solution after the comment
Write a function that prints the alphabet, in uppercase,
followed by a new line.
*/

#include <stdio.h>

char upperAlpha()
{
    for (char i = 'A'; i <= 'Z'; ++i)
    {
        printf("%c\n", i);
    }
}

int main()
{
    upperAlpha();
    
    return (0);
}
