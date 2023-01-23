/*Write your solution after the comment
Write a function that prints all natural numbers from n to 100,
followed by a new line.
That is n is your argument, it should print from any number
passed as argument till 100.
*/


#include <stdio.h>


int naturalNumb(int n)
{
    n=0;
for(int n; n<=100; n++)
    {
    printf("%d ",n);
}
}

int main()
{

    naturalNumb(9);
    return 0;
}

// i am pass 9 has argument and function is printing number to 100
