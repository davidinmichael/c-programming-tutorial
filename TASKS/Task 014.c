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

void tenTimesNum()
{
    
    for (int i = 0; i < 10; ++i)// why does < print up to 10
    {
        for (int n = 0; n <= 14; ++n)// why does only < not print up to 14
        {
            printf("%d ", n);
        }
    printf("\n");    
    }
