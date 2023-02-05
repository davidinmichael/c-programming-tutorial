/*
Create a program that declares a pointer to an integer, assigns an
address to it, and outputs the value stored at the memory address
pointed by the pointer.
*/

#include <stdio.h>

int main()
{
    int a;
    int *ptr;

    ptr = &a;

    *ptr = 89;

    printf("%d %d", a, *ptr);

    return (0);

}
