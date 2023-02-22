#include <stdio.h>
#include <stdlib.h>

/* Write a program to find the largest and smallest number in an array. */

void sort_array(int *arr, int size)
{
        int low = 0, high = 0, itr = 0;

        low = arr[0];
        high = arr[0];
        for (itr = 1; itr < size; itr++)
        {
                if (*(arr + itr) < low)
                        low = *(arr + itr);
                if (*(arr + itr) > high)
                        high = *(arr + itr);
        }

        printf("\n\nHighest Value:\t%d\nLowest Value:\t%d", high, low);
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

                sort_array(arr, size);
        }
}



int main(void)
{
        accept_arr();

        return (0);
}