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

void NTab()
{
    int i;
    
    for (i = 0; i <= 12; i++)
    {
        printf("%d x %d = %d\n", 9, i, 9 * i);
    }
}

int main()
{
    NTab();
}
