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

void print_ten_times()
{
    for(int n=0; n<10; n++ )
    {
        for(int j=0; j<=14; j++)
        {
                printf("%d ", j);
    }
    printf("\n");
}
}
int main()
{
    print_ten_times();
    return 0;
}

