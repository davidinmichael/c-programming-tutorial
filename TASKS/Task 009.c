/*write your solution after the comment
Write a function that checks for lowercase character.
That is, when passed in an arguments, it checks if the
argument is lowercase or uppercase.
*/

#include <stdio.h>

char checkCase(char b)
{
    if (b >= 'a' && b <= 'z')
    {
        printf("This is a lowercase character\n");
    }
    else
    {
        printf("This is not a lowercase character\n");
    }
}

int main()
{
    char s;
    
    printf("Enter a character\n");
    scanf("%c", &s);
    
    checkCase(s);
    
    return (0);
}
