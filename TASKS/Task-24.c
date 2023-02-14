/*
Create a program that demonstrates the use of pointers to pass
information between functions.
*/
// write a program that adds elements of an array and outputs the sum
#include <stdio.h>
int main(void)
{
    int arr[4] = {10, 20, 30, 40};
    // total = 

    printf("The total of all the number is: %d", add_arr(arr, 4));
}

int add_arr(int *ptr, int n)
{
    int i = 0;
    int sum = 0;

    while (i < n)
    {
        sum = sum + *ptr;
        i++;
    }
    return (sum);
}