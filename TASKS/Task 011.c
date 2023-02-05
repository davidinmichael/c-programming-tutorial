/*write your solution after the comment
Write a function that prints the 9 times table,
starting with 0.
Output should look like this;
9 x 0 = 0
9 x 1 = 9
9 x 2 = 18
... and so on till 12
*/

#include <stdio.h>

void ninetimes();

void ninetimes()
{
    int a;
    int times;

    for (a = 0; a <= 12; a++)
    {
        times = 9 * a;
        printf("9 x %d = %d\n", a, times);
    }
}

int main()
{
    ninetimes();
    return (0);
}
