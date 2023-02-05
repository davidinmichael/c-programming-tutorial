/*Write your solution after the comment
Write a function that prints 10 times the numbers, from 0 to 14,
followed by a new line.
Your output should look like this;
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
...up to 10 times
*/

#include <stdio.h>

void one_to_fourteen();

void one_to_fourteen()
{
    int a = 0;
    int b = 0;

    while (b <= 10)
    {
        for (a = 0; a <= 14; a++)
        {
            printf("%d", a);
            if (a < 14)
            {
                printf(" ");
            }
        }
        printf("\n");
        b++;
    }
}

int main()
{
    one_to_fourteen();
}
