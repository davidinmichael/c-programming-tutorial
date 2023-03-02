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
void table_9()
{
    int x;
    int y;
    if (x = 9)
    for (y>=0; y<=12; y++)
    printf("%d X %d = %d\n", x, y,x*y);
}
int main()
{
    table_9();
    return 0;
}
