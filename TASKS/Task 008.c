/*write your solution after the comment
Write a function that prints the alphabet, in lowercase
followed by a new line.
*/

#include <stdio.h>

void LowerAlph()
{
  char letters;
  
  for (letters = 'a'; letters <= 'z'; letters++)
  {
    printf("%c ", letters);
  }
}

int main()
{
    LowerAlph();
}
