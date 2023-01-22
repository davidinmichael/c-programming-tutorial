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

void print9timestable()
{

int a;
for (a=0; a<13; a++)
{
     printf("9*%d=%d\n", a,9*a);
}

}

int main()
{
print9timestable();

return 0;
}

