/*write your solution after the comment
Write a function that prints the 9 times table,
starting with 0.
Output should look like this;
9 x 0 = 0
9 x 1 = 9
9 x 2 = 18
... and so on till 12
*/
#include<stdio.h>
void times_table(int times)
{
    int i, j;

    for (i = times; i <= times; i++) // outer loop
    {
        for (j = 1; j < 12; j++) //inner loop
        {
            printf("%02d * %02d = %03d\n", i, j,(i * j));
        }
        printf("\n");
    }
}
int main(void)
{
    int num;
    printf("print time table of ");
    scanf("%d", &num);
    times_table(num);
}
