#include <stdio.h>
#include <ctype.h>

/*write your solution after the comment
Write a function that prints the alphabet, in lowercase
followed by a new line.
*/

void to_lower_case_one()
{
        char n;

        for (n = 'a'; n <= 'z'; n++)
        {
                printf("%c", n);
        }
        printf("\n");
}

void to_lower_case_two()
{
        char n;

        for (n = 'A'; n <= 'Z'; n++)
        {
                printf("%c", tolower(n));
        }
        printf("\n");
}

int main(void)
{
        to_lower_case_one();
        to_lower_case_two();

        return (0);
}