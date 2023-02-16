/*
Write a program in C to check a given number is even
or odd using the function.
*/

#include <stdio.h>

void odd_even(int num)
{
  if (num % 2 == 0)
  {
    printf("It's even\n");
  }
  else if (num % 2 != 0)
  {
    printf("It's odd\n");
  }
  return;
}

int main()
{
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);
  
  odd_even(num);
}
