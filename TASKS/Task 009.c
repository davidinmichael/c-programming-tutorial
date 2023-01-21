#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*write your solution after the comment
Write a function that checks for lowercase character.
That is, when passed in an arguments, it checks if the
argument is lowercase or uppercase.
*/
void check_case(char chr)
{
        if ( chr >= 'a' && chr <= 'z')
                printf("\n%c is a lower cased character.", chr);
        else if (chr >= 'A' && chr <= 'Z')
                printf("\n%c is an upper cased character.", chr);
        else
                printf("\nKindly provide a character.");
}
int main(void)
{
        char str;

        printf("Enter a character:\t");
        scanf("%c", &str);
        check_case(str);

        return (0);
}