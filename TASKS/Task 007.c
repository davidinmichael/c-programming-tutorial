/*
write your solution after the comment
Write a function that prints the alphabet, in uppercase,
followed by a new line.
*/
#include <stdio.h>
void capital_letters()
{
    for (char i = 'A'; i <= 'Z'; ++i)
    printf("%c\n", i);
}
int main()
{
    capital_letters();
    return (0);
}
