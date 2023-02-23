/*
Write a program in C to check a given number is even
or odd using the function.
*/


#include <stdio.h>


int main() 
{


int number;


printf("Enter your number: ");

scanf("%d", &number);



if (number%2==0){
    
printf("Number is even");}

else {    
    
printf("Number is odd");}



return 0;

}
