/*Write your solution after the comment
Write a function that prints all natural numbers from n to 100,
followed by a new line.
That is n is your argument, it should print from any number
passed as argument till 100.
*/

#include <stdio.h>

int natNum(int n)
{
    for (int i = 0; i <= 100; ++i)
    {   
        if (n <= i)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int num;
    printf("Enter a number to count till 100\n");
    scanf("%d", &num);
    
    natNum(num);
    
    return (0);
}
