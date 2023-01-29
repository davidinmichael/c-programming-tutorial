/*write your solution after the comment
Write a function that checks for lowercase character.
That is, when passed in an arguments, it checks if the
argument is lowercase or uppercase.
*/
#include<stdio.h>
void _islower(char low)
{
    if (low >= 'a' && low <= 'z' )
        printf("%c - This is in lowercase", low);
    else
        printf("This is in uppercase");
}

int main(void)
{
    char let;

    printf("input an argument\n");
    scanf("%c", &let);
    _islower(let);
    return(0);
}
