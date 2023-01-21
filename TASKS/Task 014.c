#include <stdio.h>

/*Write your solution after the comment
Write a function that prints 10 times the numbers, from 0 to 14,
followed by a new line.
Your output should look like this;
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
...up to 10 times
*/

void print_14()
{
        int i;

        for (i = 0; i <= 14; i++)
                printf("%d ", i);
        printf("\n");
}
void print_10()
{
        int i;

        for (i = 0; i < 10; i++)
                print_14();
        printf("\n");
}

int main(void)
{
        print_10();
        return (0);
}