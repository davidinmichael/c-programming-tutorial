/*write your solution after the comment
Write a function that checks for lowercase character.
That is, when passed in an arguments, it checks if the
argument is lowercase or uppercase.
*/


 #include <stdio.h>

 void checkletter(char alphabet)
 {

 if (alphabet>='A'&& alphabet <='Z')
 {
 printf("%c is upper case \n", alphabet);
 }
  else if (alphabet>='a' && alphabet<='z')
  {

  printf("%c is lower case \n", alphabet);
  }
else
{
    printf("Your input is not letter.\n");
}
}
    int main()
    {
    char alphabet='a';

    checkletter(alphabet);

    return 0;
    }

