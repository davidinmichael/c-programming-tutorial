/*write your solution after the comment
Write a function that prints the alphabet, in lowercase
followed by a new line.
*/

/**
 * lowercase - prints alphabets in lowercase
 * @c: characters
 *
 */
#include <stdio.h>

void lowercase()
{
        char c;

        for (char c ='a'; c <= 'z'; c++)
                printf("%c\n", c);
}

/**
 * main - checks code
 * Return: 0
 */

int main(void)
{
        lowercase();
        return (0);
}
