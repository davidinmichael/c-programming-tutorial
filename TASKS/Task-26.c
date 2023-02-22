/*
Write a program that takes an array of scores, and
then outputs the array in reverse order.
*/

#include <stdio.h>
#include <stdlib.h>
void reverse_arr(int *arr, int size)
{
        int itr = 0;

        printf("The array [");
        for (itr = 0; itr < size; itr++)
        {
                printf("%d", arr[itr]);
                if (itr < (size - 1))
                        printf(", ");
        }
        printf("] printed in reverse order is [");

        for (itr = (size - 1); itr >= 0; itr--)
        {
                printf("%d", arr[itr]);
                if (itr > 0)
                        printf(", ");
        }
        printf("]\n");
}

void accept_arr(void)
{
        int size = 0, itr;
        static int arr[20];

        printf("How many numbers?:\t");
        if (scanf("%d", &size) == 1)
        {
                if (size <= 1)
                {
                        printf("Your array size cannot be lesser than 1.");
                        exit(1);
                }
                else if (size > 20)
                {
                        printf("Your array size cannot be more than 20.");
                        exit(1);
                }
                for (itr = 0; itr < size; itr++)
                {
                        printf("Enter a number:\t");
                        scanf("%i", &arr[itr]);
                }

                reverse_arr(arr, size);
        }
}

int main(void)
{
        accept_arr();

        return (0);
}