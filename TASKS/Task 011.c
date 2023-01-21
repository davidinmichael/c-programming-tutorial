#include <stdio.h>

/*write your solution after the comment
Write a function that prints the 9 times table,
starting with 0.
Output should look like this;
9 x 0 = 0
9 x 1 = 9
9 x 2 = 18
... and so on till 12
*/

void times_table()
{
        int i = 9, j;

        for (j = 0; j <= 12; j++)
                printf("%d * %d = %d\n", i, j, (i * j));
        printf("\n");
}
int main(void)
{
        times_table();
        return (0);
}