/*
Create a program that declares a pointer to an integer, assigns an
address to it, and outputs the value stored at the memory address
pointed by the pointer.
*/
#include<stdio.h>
int main()
{
    int *ptr; // pointer
    int num = 91; // variable that hold an int

    ptr = &num; // assigning the address of the int to the pointer

    printf("This is the address: %p\n", ptr);// prints address using pointer
    printf("This is the value: %d\n", *ptr); // print value using pointer
    return 0;
}

