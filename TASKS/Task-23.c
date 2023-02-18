/*
Create a program that uses pointers to find the maximum value stored
in an array.
*/

#include <stdio.h>

int main()
{
    int nums[] = {95, 43, 6, 64, 23,89, 41, 15};
    int max;
    int n = sizeof(nums) / sizeof(nums[0]);
    
    max = nums[3];
    
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
        
    }
    printf("the highest number is: %d\n", max);
    return 0;
}
