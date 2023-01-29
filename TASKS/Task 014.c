/*Write your solution after the comment
Write a function that prints 10 times the numbers, from 0 to 14,
followed by a new line.
Your output should look like this;
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
...up to 10 times
*/
#include<stdio.h>
int main(void)
{
    int i, j;

    for (i = 0; i < 10; i++) // runs 10 times outer loop
    {
        for (j = 0; j < 15; j++) // inner loop
        {
            printf("%d ", j); // prints from 0 - 14
        }
        printf("\n"); // prints new line after each iteration
    }
    printf("\n"); // prints new line after the loop is done
    return(0);
}
