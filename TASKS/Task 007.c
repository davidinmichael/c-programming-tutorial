/*
write your solution after the comment
Write a function that prints the alphabet, in uppercase,
followed by a new line.
*/


 #include <stdio.h>

 void UpperAlphabet()
 {
 char Alphabet;

 for(Alphabet='A'; Alphabet<='Z'; Alphabet++)
 {
      printf("%c \n", Alphabet);
 }

 }

 int main()
 {
UpperAlphabet();
 return 0;
 }

