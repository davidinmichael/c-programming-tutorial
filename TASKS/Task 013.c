/*Write your solution after the comment
Write a function that prints all natural numbers from n to 100,
followed by a new line.
That is n is your argument, it should print from any number
passed as argument till 100.
*/
#include <stdio.h>

void NatNum(int n)
{
    int i;
    if (n >= 0 && n <= 100)
    {
        for (i = n; i <= 100; i++)
        {
            printf("%d ", i);
        }
    }
    else if (n < 0)
    {
        printf("This is not a natural number\n");
    }
    else
    {
        printf("This number exceeds 100\n");
    }
}


int main()
{
    int num;

    printf("Enter a number from 0 - 100: ");
    scanf("%d", &num);
    NatNum(num);
}
