/*
Create a program that uses pointers to find the maximum value stored
in an array.
*/
#include <stdio.h>
int main(void)
{
    int i; // number of elements in array
    int j; // index of element in array
    int array[100];

    printf("enter number of elements in array (from 1-100): ");
    scanf("%d", &i);

    for (j = 0; j < i; ++j)
    {
        printf("Enter %d number: ", j + 1);
        scanf("%d", &array[j]);
    }
    //to get the largest number
    for (j = 0; j < i; ++j)// loop through the indices of the array
    {
        if (array[0] < array[j])// if the array[0] is smaller than the current array[j]
        {
            array[0] = array[j]; // update the array[0]
        }
    }
    printf("Largest number is: %d\n", array[0]);
    return (0);
}