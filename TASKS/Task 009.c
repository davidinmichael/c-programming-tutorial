/*write your solution after the comment
Write a function that checks for lowercase character.
That is, when passed in an arguments, it checks if the
argument is lowercase or uppercase.
*/

#include <stdio.h>

void is_upper(char c);

void is_upper(char c)
{

    if (c >= 'a' && c <= 'z')
    {
        printf("%c is lowercase\n", c);
    }
    if (c >= 'A' && c <= 'Z')
    {
        printf("%c is uppercase\n", c);
    }
}

int main()
{

    is_upper('C');
    is_upper('c');
    is_upper('Z');
    is_upper('q');

    return (0);
}
