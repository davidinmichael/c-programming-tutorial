/*
write your solution after the comment
Write a function that prints the alphabet, in uppercase,
followed by a new line.
*/
#include <stdio.h>

void UpperAlph()
{
  char Caps;

  for (Caps = 'A'; Caps <= 'Z'; Caps++)
  {
    printf("%c ", Caps);
  }
}

int main()
{
    UpperAlph();
}
