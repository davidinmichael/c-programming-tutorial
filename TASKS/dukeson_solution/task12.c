#include <stdio.h>
#include <stdlib.h>

/* Create a program to check if a number is prime or not.. */
void is_prime(int num)
{
        int itr = 0;
        int flag = 0;

        if (num == 0 || num == 1)
                flag = 1;

        for (itr = 2; itr <= (num / 2); itr++)
        {
                if (num % itr == 0)
                {
                        flag = 1;
                        break;
                }
        }
        if (flag == 0)
                printf("%d is a prime number\n", num);
        else
                printf("%d is NOT a prime number\n", num);
}

int main(void)
{
        int num = 0;

        printf("Enter the number:\t");
        if (scanf("%i", &num))
        {
                is_prime(num);
        }
        return (0);
}