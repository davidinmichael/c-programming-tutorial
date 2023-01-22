/*
Write a program in C to check a given number is even
or odd using the function.
*/


#include <stdio.h>

void check()
{
 int num1;

printf("Enter the number: ");
 scanf("%d", &num1);
 if (num1%2==0)
 {
     printf("%d is even number\n", num1);

 }
else
{
    printf("%d is odd number\n",num1);

}
}

int main()
{

check ();
return 0;
}


