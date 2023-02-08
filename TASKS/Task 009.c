/*write your solution after the comment
Write a function that checks for lowercase character.
That is, when passed in an arguments, it checks if the
argument is lowercase or uppercase.
*/
#include <stdio.h>

void Lower(char letter)
{

  if (letter >= 'a' && letter <= 'z')
  {
    printf("It's lowercase ");
  }
  else if (letter >= 'A' && letter <= 'Z')
  {
    printf("It's not lowercase ");
  }
}

int main()
{
  char letter;

  printf("Enter a letter: ");
  scanf("%c", &letter);

  Lower(letter);
}
