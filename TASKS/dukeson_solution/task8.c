#include <stdio.h>

#define PI 3.14159

/* Write a function to find the volume of a sphere */

double sphere_volume(int radius)
{
        if (radius > 0)
                return ((double)(4  * (PI * (radius * radius * radius))) / 3);
        return (0.0);
}

int main(void)
{
        int rad = 0;

        printf("Enter the radius:\t");
        if (scanf("%i", &rad))
                printf("The volume of a sphere with radius of %d = %.2f\n", rad, sphere_volume(rad));
        return (0);
}