/*write your solution after the comment
Write a function that computes the absolute
value of an integer.
Understand what an absolute value is, before attempting it.
*/

#include <stdio.h>

int AbsVal(int num)
{
    if(num < 0)
    {
        return (-num);
    }
    if (num >= 0)
    {
        return (num);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int Absolute = AbsVal(num);
    
    printf("The absolute value if %d is %d\n", num, Absolute);
}
