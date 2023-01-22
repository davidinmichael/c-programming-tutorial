/*write your solution after the comment
Write a function that prints the alphabet, in lowercase
followed by a new line.
*/

 #include <stdio.h>

 void lowerletter()
 {
 char lower;

 for(lower='a'; lower<='z'; lower++)
 {
      printf("%c \n", lower);
 }

 }


 int main()
 {
lowerletter();
 return 0;
 }
