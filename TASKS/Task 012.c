/*Write your solution after the comment
Write a function that adds two integers and prints
the result.
*/
#include <stdio.h>
void sum()
{
    int x;
    int y;
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("Enter another integer you want to add: ");
    scanf("%d", &y);
    printf("%d + %d = %d\n", x, y,x+y);
}
int main()
{
    sum();
    return 0;
}

OR

#include <stdio.h>
void sum()
{
    int x;
    int y;
    if (x = 9, y=8)
    printf("%d + %d = %d\n", x, y,x+y);
}
int main()
{
    sum();
    return 0;
}
