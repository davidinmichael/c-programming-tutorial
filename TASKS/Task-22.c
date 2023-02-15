/*
Create a program that declares a pointer to an integer, assigns an
address to it, and outputs the value stored at the memory address
pointed by the pointer.
*/

#include <stdio.h>

int main()
{
    int age = 86;
    int *ptr;
    ptr = age;
    printf("%d", age);
  return (0);
}
