/*Write your solution after the comment
Write a function that prints all natural numbers from n to 100,
followed by a new line.
That is n is your argument, it should print from any number
passed as argument till 100.
*/

#include <stdio.h>

void print_natural(int num);

void print_natural(int num)
{
    while (num <= 100)
    {
        printf("%d", num);
        if (num < 100)
        {
            printf(", ");
        }
        num++;
    }
}

int main()
{
    print_natural(70);
    return (0);
}

